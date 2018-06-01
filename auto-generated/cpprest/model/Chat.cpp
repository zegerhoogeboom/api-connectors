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



#include "Chat.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Chat::Chat()
{
    m_Id = 0.0;
    m_IdIsSet = false;
    m_date = utility::datetime();
    m_User = utility::conversions::to_string_t("");
    m_Message = utility::conversions::to_string_t("");
    m_Html = utility::conversions::to_string_t("");
    m_FromBot = false;
    m_FromBotIsSet = false;
    m_ChannelID = 0.0;
    m_ChannelIDIsSet = false;
}

Chat::~Chat()
{
}

void Chat::validate()
{
    // TODO: implement validation
}

web::json::value Chat::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    val[utility::conversions::to_string_t("html")] = ModelBase::toJson(m_Html);
    if(m_FromBotIsSet)
    {
        val[utility::conversions::to_string_t("fromBot")] = ModelBase::toJson(m_FromBot);
    }
    if(m_ChannelIDIsSet)
    {
        val[utility::conversions::to_string_t("channelID")] = ModelBase::toJson(m_ChannelID);
    }

    return val;
}

void Chat::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("id")]));
    }
    setDate
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("date")]));
    setUser(ModelBase::stringFromJson(val[utility::conversions::to_string_t("user")]));
    setMessage(ModelBase::stringFromJson(val[utility::conversions::to_string_t("message")]));
    setHtml(ModelBase::stringFromJson(val[utility::conversions::to_string_t("html")]));
    if(val.has_field(utility::conversions::to_string_t("fromBot")))
    {
        setFromBot(ModelBase::boolFromJson(val[utility::conversions::to_string_t("fromBot")]));
    }
    if(val.has_field(utility::conversions::to_string_t("channelID")))
    {
        setChannelID(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("channelID")]));
    }
}

void Chat::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user"), m_User));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("html"), m_Html));
    if(m_FromBotIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fromBot"), m_FromBot));
    }
    if(m_ChannelIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("channelID"), m_ChannelID));
    }
}

void Chat::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    setDate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("date"))));
    setUser(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user"))));
    setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
    setHtml(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("html"))));
    if(multipart->hasContent(utility::conversions::to_string_t("fromBot")))
    {
        setFromBot(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fromBot"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("channelID")))
    {
        setChannelID(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("channelID"))));
    }
}

double Chat::getId() const
{
    return m_Id;
}


void Chat::setId(double value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Chat::idIsSet() const
{
    return m_IdIsSet;
}

void Chat::unsetId()
{
    m_IdIsSet = false;
}

utility::datetime Chat::getDate() const
{
    return m_date;
}


void Chat::setDate(utility::datetime value)
{
    m_date = value;
    
}
utility::string_t Chat::getUser() const
{
    return m_User;
}


void Chat::setUser(utility::string_t value)
{
    m_User = value;
    
}
utility::string_t Chat::getMessage() const
{
    return m_Message;
}


void Chat::setMessage(utility::string_t value)
{
    m_Message = value;
    
}
utility::string_t Chat::getHtml() const
{
    return m_Html;
}


void Chat::setHtml(utility::string_t value)
{
    m_Html = value;
    
}
bool Chat::isFromBot() const
{
    return m_FromBot;
}


void Chat::setFromBot(bool value)
{
    m_FromBot = value;
    m_FromBotIsSet = true;
}
bool Chat::fromBotIsSet() const
{
    return m_FromBotIsSet;
}

void Chat::unsetFromBot()
{
    m_FromBotIsSet = false;
}

double Chat::getChannelID() const
{
    return m_ChannelID;
}


void Chat::setChannelID(double value)
{
    m_ChannelID = value;
    m_ChannelIDIsSet = true;
}
bool Chat::channelIDIsSet() const
{
    return m_ChannelIDIsSet;
}

void Chat::unsetChannelID()
{
    m_ChannelIDIsSet = false;
}

}
}
}
}

