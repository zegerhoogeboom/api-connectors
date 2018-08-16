/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGAccessToken.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGAccessToken::SWGAccessToken(QString json) {
    init();
    this->fromJson(json);
}

SWGAccessToken::SWGAccessToken() {
    init();
}

SWGAccessToken::~SWGAccessToken() {
    this->cleanup();
}

void
SWGAccessToken::init() {
    id = new QString("");
    m_id_isSet = false;
    ttl = 0.0;
    m_ttl_isSet = false;
    created = NULL;
    m_created_isSet = false;
    user_id = 0.0;
    m_user_id_isSet = false;
}

void
SWGAccessToken::cleanup() {
    if(id != nullptr) { 
        delete id;
    }

    if(created != nullptr) { 
        delete created;
    }

}

SWGAccessToken*
SWGAccessToken::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAccessToken::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    
    ::Swagger::setValue(&ttl, pJson["ttl"], "double", "");
    
    ::Swagger::setValue(&created, pJson["created"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&user_id, pJson["userId"], "double", "");
    
}

QString
SWGAccessToken::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGAccessToken::asJsonObject() {
    QJsonObject obj;
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(m_ttl_isSet){
        obj.insert("ttl", QJsonValue(ttl));
    }
    if(created != nullptr) { 
        toJsonValue(QString("created"), created, obj, QString("QDateTime"));
    }
    if(m_user_id_isSet){
        obj.insert("userId", QJsonValue(user_id));
    }

    return obj;
}

QString*
SWGAccessToken::getId() {
    return id;
}
void
SWGAccessToken::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

double
SWGAccessToken::getTtl() {
    return ttl;
}
void
SWGAccessToken::setTtl(double ttl) {
    this->ttl = ttl;
    this->m_ttl_isSet = true;
}

QDateTime*
SWGAccessToken::getCreated() {
    return created;
}
void
SWGAccessToken::setCreated(QDateTime* created) {
    this->created = created;
    this->m_created_isSet = true;
}

double
SWGAccessToken::getUserId() {
    return user_id;
}
void
SWGAccessToken::setUserId(double user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}


bool
SWGAccessToken::isSet(){
    bool isObjectUpdated = false;
    do{
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(m_ttl_isSet){ isObjectUpdated = true; break;}
        
        if(m_user_id_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

