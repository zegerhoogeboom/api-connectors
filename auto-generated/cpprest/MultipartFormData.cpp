/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "MultipartFormData.h"
#include "ModelBase.h"

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace io {
namespace swagger {
namespace client {
namespace model {

MultipartFormData::MultipartFormData()
{
    utility::stringstream_t uuidString;
    uuidString << boost::uuids::random_generator()();
    m_Boundary = uuidString.str();
}

MultipartFormData::MultipartFormData(const utility::string_t& boundary)
    : m_Boundary(boundary)
{

}

MultipartFormData::~MultipartFormData()
{
}

utility::string_t MultipartFormData::getBoundary()
{
    return m_Boundary;
}

void MultipartFormData::add( std::shared_ptr<HttpContent> content )
{
    m_Contents.push_back( content );
    m_ContentLookup[content->getName()] = content;
}

bool MultipartFormData::hasContent(const utility::string_t& name) const
{
    return m_ContentLookup.find(name) != m_ContentLookup.end();
}

std::shared_ptr<HttpContent> MultipartFormData::getContent(const utility::string_t& name) const
{
    auto result = m_ContentLookup.find(name);
    if(result == m_ContentLookup.end())
    {
        return std::shared_ptr<HttpContent>(nullptr);
    }
    return result->second;
}

void MultipartFormData::writeTo( std::ostream& target )
{
    for ( size_t i = 0; i < m_Contents.size(); i++ )
    {
        std::shared_ptr<HttpContent> content = m_Contents[i];

        // boundary
        target << "\r\n" << "--" << utility::conversions::to_utf8string( m_Boundary ) << "\r\n";

        // headers
        target << "Content-Disposition: " << utility::conversions::to_utf8string( content->getContentDisposition() );
        if ( content->getName().size() > 0 )
        {
            target << "; name=\"" << utility::conversions::to_utf8string( content->getName() ) << "\"";
        }
        if ( content->getFileName().size() > 0 )
        {
            target << "; filename=\"" << utility::conversions::to_utf8string( content->getFileName() ) << "\"";
        }
        target << "\r\n";

        if ( content->getContentType().size() > 0 )
        {
            target << "Content-Type: " << utility::conversions::to_utf8string( content->getContentType() ) << "\r\n";
        }

        target << "\r\n";

        // body
        std::shared_ptr<std::istream> data = content->getData();

		data->seekg( 0, data->end );
		std::vector<char> dataBytes( data->tellg() );
		
		data->seekg( 0, data->beg );
		data->read( &dataBytes[0], dataBytes.size() );

		std::copy( dataBytes.begin(), dataBytes.end(), std::ostreambuf_iterator<char>( target ) );
    }

    target << "\r\n--" << utility::conversions::to_utf8string( m_Boundary ) << "--\r\n";
}

}
}
}
}
