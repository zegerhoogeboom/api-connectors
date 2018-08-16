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


#include "SWGMargin.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGMargin::SWGMargin(QString json) {
    init();
    this->fromJson(json);
}

SWGMargin::SWGMargin() {
    init();
}

SWGMargin::~SWGMargin() {
    this->cleanup();
}

void
SWGMargin::init() {
    account = 0.0;
    m_account_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    risk_limit = 0.0;
    m_risk_limit_isSet = false;
    prev_state = new QString("");
    m_prev_state_isSet = false;
    state = new QString("");
    m_state_isSet = false;
    action = new QString("");
    m_action_isSet = false;
    amount = 0.0;
    m_amount_isSet = false;
    pending_credit = 0.0;
    m_pending_credit_isSet = false;
    pending_debit = 0.0;
    m_pending_debit_isSet = false;
    confirmed_debit = 0.0;
    m_confirmed_debit_isSet = false;
    prev_realised_pnl = 0.0;
    m_prev_realised_pnl_isSet = false;
    prev_unrealised_pnl = 0.0;
    m_prev_unrealised_pnl_isSet = false;
    gross_comm = 0.0;
    m_gross_comm_isSet = false;
    gross_open_cost = 0.0;
    m_gross_open_cost_isSet = false;
    gross_open_premium = 0.0;
    m_gross_open_premium_isSet = false;
    gross_exec_cost = 0.0;
    m_gross_exec_cost_isSet = false;
    gross_mark_value = 0.0;
    m_gross_mark_value_isSet = false;
    risk_value = 0.0;
    m_risk_value_isSet = false;
    taxable_margin = 0.0;
    m_taxable_margin_isSet = false;
    init_margin = 0.0;
    m_init_margin_isSet = false;
    maint_margin = 0.0;
    m_maint_margin_isSet = false;
    session_margin = 0.0;
    m_session_margin_isSet = false;
    target_excess_margin = 0.0;
    m_target_excess_margin_isSet = false;
    var_margin = 0.0;
    m_var_margin_isSet = false;
    realised_pnl = 0.0;
    m_realised_pnl_isSet = false;
    unrealised_pnl = 0.0;
    m_unrealised_pnl_isSet = false;
    indicative_tax = 0.0;
    m_indicative_tax_isSet = false;
    unrealised_profit = 0.0;
    m_unrealised_profit_isSet = false;
    synthetic_margin = 0.0;
    m_synthetic_margin_isSet = false;
    wallet_balance = 0.0;
    m_wallet_balance_isSet = false;
    margin_balance = 0.0;
    m_margin_balance_isSet = false;
    margin_balance_pcnt = 0.0;
    m_margin_balance_pcnt_isSet = false;
    margin_leverage = 0.0;
    m_margin_leverage_isSet = false;
    margin_used_pcnt = 0.0;
    m_margin_used_pcnt_isSet = false;
    excess_margin = 0.0;
    m_excess_margin_isSet = false;
    excess_margin_pcnt = 0.0;
    m_excess_margin_pcnt_isSet = false;
    available_margin = 0.0;
    m_available_margin_isSet = false;
    withdrawable_margin = 0.0;
    m_withdrawable_margin_isSet = false;
    timestamp = NULL;
    m_timestamp_isSet = false;
    gross_last_value = 0.0;
    m_gross_last_value_isSet = false;
    commission = 0.0;
    m_commission_isSet = false;
}

void
SWGMargin::cleanup() {
    if(account != nullptr) { 
        delete account;
    }
    if(currency != nullptr) { 
        delete currency;
    }
    if(risk_limit != nullptr) { 
        delete risk_limit;
    }
    if(prev_state != nullptr) { 
        delete prev_state;
    }
    if(state != nullptr) { 
        delete state;
    }
    if(action != nullptr) { 
        delete action;
    }
    if(amount != nullptr) { 
        delete amount;
    }
    if(pending_credit != nullptr) { 
        delete pending_credit;
    }
    if(pending_debit != nullptr) { 
        delete pending_debit;
    }
    if(confirmed_debit != nullptr) { 
        delete confirmed_debit;
    }
    if(prev_realised_pnl != nullptr) { 
        delete prev_realised_pnl;
    }
    if(prev_unrealised_pnl != nullptr) { 
        delete prev_unrealised_pnl;
    }
    if(gross_comm != nullptr) { 
        delete gross_comm;
    }
    if(gross_open_cost != nullptr) { 
        delete gross_open_cost;
    }
    if(gross_open_premium != nullptr) { 
        delete gross_open_premium;
    }
    if(gross_exec_cost != nullptr) { 
        delete gross_exec_cost;
    }
    if(gross_mark_value != nullptr) { 
        delete gross_mark_value;
    }
    if(risk_value != nullptr) { 
        delete risk_value;
    }
    if(taxable_margin != nullptr) { 
        delete taxable_margin;
    }
    if(init_margin != nullptr) { 
        delete init_margin;
    }
    if(maint_margin != nullptr) { 
        delete maint_margin;
    }
    if(session_margin != nullptr) { 
        delete session_margin;
    }
    if(target_excess_margin != nullptr) { 
        delete target_excess_margin;
    }
    if(var_margin != nullptr) { 
        delete var_margin;
    }
    if(realised_pnl != nullptr) { 
        delete realised_pnl;
    }
    if(unrealised_pnl != nullptr) { 
        delete unrealised_pnl;
    }
    if(indicative_tax != nullptr) { 
        delete indicative_tax;
    }
    if(unrealised_profit != nullptr) { 
        delete unrealised_profit;
    }
    if(synthetic_margin != nullptr) { 
        delete synthetic_margin;
    }
    if(wallet_balance != nullptr) { 
        delete wallet_balance;
    }
    if(margin_balance != nullptr) { 
        delete margin_balance;
    }



    if(excess_margin != nullptr) { 
        delete excess_margin;
    }

    if(available_margin != nullptr) { 
        delete available_margin;
    }
    if(withdrawable_margin != nullptr) { 
        delete withdrawable_margin;
    }
    if(timestamp != nullptr) { 
        delete timestamp;
    }
    if(gross_last_value != nullptr) { 
        delete gross_last_value;
    }

}

SWGMargin*
SWGMargin::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMargin::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&account, pJson["account"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&risk_limit, pJson["riskLimit"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&prev_state, pJson["prevState"], "QString", "QString");
    
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    
    ::Swagger::setValue(&action, pJson["action"], "QString", "QString");
    
    ::Swagger::setValue(&amount, pJson["amount"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&pending_credit, pJson["pendingCredit"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&pending_debit, pJson["pendingDebit"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&confirmed_debit, pJson["confirmedDebit"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&prev_realised_pnl, pJson["prevRealisedPnl"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&prev_unrealised_pnl, pJson["prevUnrealisedPnl"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&gross_comm, pJson["grossComm"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&gross_open_cost, pJson["grossOpenCost"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&gross_open_premium, pJson["grossOpenPremium"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&gross_exec_cost, pJson["grossExecCost"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&gross_mark_value, pJson["grossMarkValue"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&risk_value, pJson["riskValue"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&taxable_margin, pJson["taxableMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&init_margin, pJson["initMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&maint_margin, pJson["maintMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&session_margin, pJson["sessionMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&target_excess_margin, pJson["targetExcessMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&var_margin, pJson["varMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&realised_pnl, pJson["realisedPnl"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&unrealised_pnl, pJson["unrealisedPnl"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&indicative_tax, pJson["indicativeTax"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&unrealised_profit, pJson["unrealisedProfit"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&synthetic_margin, pJson["syntheticMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&wallet_balance, pJson["walletBalance"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&margin_balance, pJson["marginBalance"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&margin_balance_pcnt, pJson["marginBalancePcnt"], "double", "");
    
    ::Swagger::setValue(&margin_leverage, pJson["marginLeverage"], "double", "");
    
    ::Swagger::setValue(&margin_used_pcnt, pJson["marginUsedPcnt"], "double", "");
    
    ::Swagger::setValue(&excess_margin, pJson["excessMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&excess_margin_pcnt, pJson["excessMarginPcnt"], "double", "");
    
    ::Swagger::setValue(&available_margin, pJson["availableMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&withdrawable_margin, pJson["withdrawableMargin"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&gross_last_value, pJson["grossLastValue"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&commission, pJson["commission"], "double", "");
    
}

QString
SWGMargin::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGMargin::asJsonObject() {
    QJsonObject obj;
    if((account != nullptr) && (account->isSet())){
        toJsonValue(QString("account"), account, obj, QString("SWGNumber"));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if((risk_limit != nullptr) && (risk_limit->isSet())){
        toJsonValue(QString("riskLimit"), risk_limit, obj, QString("SWGNumber"));
    }
    if(prev_state != nullptr && *prev_state != QString("")){
        toJsonValue(QString("prevState"), prev_state, obj, QString("QString"));
    }
    if(state != nullptr && *state != QString("")){
        toJsonValue(QString("state"), state, obj, QString("QString"));
    }
    if(action != nullptr && *action != QString("")){
        toJsonValue(QString("action"), action, obj, QString("QString"));
    }
    if((amount != nullptr) && (amount->isSet())){
        toJsonValue(QString("amount"), amount, obj, QString("SWGNumber"));
    }
    if((pending_credit != nullptr) && (pending_credit->isSet())){
        toJsonValue(QString("pendingCredit"), pending_credit, obj, QString("SWGNumber"));
    }
    if((pending_debit != nullptr) && (pending_debit->isSet())){
        toJsonValue(QString("pendingDebit"), pending_debit, obj, QString("SWGNumber"));
    }
    if((confirmed_debit != nullptr) && (confirmed_debit->isSet())){
        toJsonValue(QString("confirmedDebit"), confirmed_debit, obj, QString("SWGNumber"));
    }
    if((prev_realised_pnl != nullptr) && (prev_realised_pnl->isSet())){
        toJsonValue(QString("prevRealisedPnl"), prev_realised_pnl, obj, QString("SWGNumber"));
    }
    if((prev_unrealised_pnl != nullptr) && (prev_unrealised_pnl->isSet())){
        toJsonValue(QString("prevUnrealisedPnl"), prev_unrealised_pnl, obj, QString("SWGNumber"));
    }
    if((gross_comm != nullptr) && (gross_comm->isSet())){
        toJsonValue(QString("grossComm"), gross_comm, obj, QString("SWGNumber"));
    }
    if((gross_open_cost != nullptr) && (gross_open_cost->isSet())){
        toJsonValue(QString("grossOpenCost"), gross_open_cost, obj, QString("SWGNumber"));
    }
    if((gross_open_premium != nullptr) && (gross_open_premium->isSet())){
        toJsonValue(QString("grossOpenPremium"), gross_open_premium, obj, QString("SWGNumber"));
    }
    if((gross_exec_cost != nullptr) && (gross_exec_cost->isSet())){
        toJsonValue(QString("grossExecCost"), gross_exec_cost, obj, QString("SWGNumber"));
    }
    if((gross_mark_value != nullptr) && (gross_mark_value->isSet())){
        toJsonValue(QString("grossMarkValue"), gross_mark_value, obj, QString("SWGNumber"));
    }
    if((risk_value != nullptr) && (risk_value->isSet())){
        toJsonValue(QString("riskValue"), risk_value, obj, QString("SWGNumber"));
    }
    if((taxable_margin != nullptr) && (taxable_margin->isSet())){
        toJsonValue(QString("taxableMargin"), taxable_margin, obj, QString("SWGNumber"));
    }
    if((init_margin != nullptr) && (init_margin->isSet())){
        toJsonValue(QString("initMargin"), init_margin, obj, QString("SWGNumber"));
    }
    if((maint_margin != nullptr) && (maint_margin->isSet())){
        toJsonValue(QString("maintMargin"), maint_margin, obj, QString("SWGNumber"));
    }
    if((session_margin != nullptr) && (session_margin->isSet())){
        toJsonValue(QString("sessionMargin"), session_margin, obj, QString("SWGNumber"));
    }
    if((target_excess_margin != nullptr) && (target_excess_margin->isSet())){
        toJsonValue(QString("targetExcessMargin"), target_excess_margin, obj, QString("SWGNumber"));
    }
    if((var_margin != nullptr) && (var_margin->isSet())){
        toJsonValue(QString("varMargin"), var_margin, obj, QString("SWGNumber"));
    }
    if((realised_pnl != nullptr) && (realised_pnl->isSet())){
        toJsonValue(QString("realisedPnl"), realised_pnl, obj, QString("SWGNumber"));
    }
    if((unrealised_pnl != nullptr) && (unrealised_pnl->isSet())){
        toJsonValue(QString("unrealisedPnl"), unrealised_pnl, obj, QString("SWGNumber"));
    }
    if((indicative_tax != nullptr) && (indicative_tax->isSet())){
        toJsonValue(QString("indicativeTax"), indicative_tax, obj, QString("SWGNumber"));
    }
    if((unrealised_profit != nullptr) && (unrealised_profit->isSet())){
        toJsonValue(QString("unrealisedProfit"), unrealised_profit, obj, QString("SWGNumber"));
    }
    if((synthetic_margin != nullptr) && (synthetic_margin->isSet())){
        toJsonValue(QString("syntheticMargin"), synthetic_margin, obj, QString("SWGNumber"));
    }
    if((wallet_balance != nullptr) && (wallet_balance->isSet())){
        toJsonValue(QString("walletBalance"), wallet_balance, obj, QString("SWGNumber"));
    }
    if((margin_balance != nullptr) && (margin_balance->isSet())){
        toJsonValue(QString("marginBalance"), margin_balance, obj, QString("SWGNumber"));
    }
    if(m_margin_balance_pcnt_isSet){
        obj.insert("marginBalancePcnt", QJsonValue(margin_balance_pcnt));
    }
    if(m_margin_leverage_isSet){
        obj.insert("marginLeverage", QJsonValue(margin_leverage));
    }
    if(m_margin_used_pcnt_isSet){
        obj.insert("marginUsedPcnt", QJsonValue(margin_used_pcnt));
    }
    if((excess_margin != nullptr) && (excess_margin->isSet())){
        toJsonValue(QString("excessMargin"), excess_margin, obj, QString("SWGNumber"));
    }
    if(m_excess_margin_pcnt_isSet){
        obj.insert("excessMarginPcnt", QJsonValue(excess_margin_pcnt));
    }
    if((available_margin != nullptr) && (available_margin->isSet())){
        toJsonValue(QString("availableMargin"), available_margin, obj, QString("SWGNumber"));
    }
    if((withdrawable_margin != nullptr) && (withdrawable_margin->isSet())){
        toJsonValue(QString("withdrawableMargin"), withdrawable_margin, obj, QString("SWGNumber"));
    }
    if(timestamp != nullptr) { 
        toJsonValue(QString("timestamp"), timestamp, obj, QString("QDateTime"));
    }
    if((gross_last_value != nullptr) && (gross_last_value->isSet())){
        toJsonValue(QString("grossLastValue"), gross_last_value, obj, QString("SWGNumber"));
    }
    if(m_commission_isSet){
        obj.insert("commission", QJsonValue(commission));
    }

    return obj;
}

SWGNumber*
SWGMargin::getAccount() {
    return account;
}
void
SWGMargin::setAccount(SWGNumber* account) {
    this->account = account;
    this->m_account_isSet = true;
}

QString*
SWGMargin::getCurrency() {
    return currency;
}
void
SWGMargin::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

SWGNumber*
SWGMargin::getRiskLimit() {
    return risk_limit;
}
void
SWGMargin::setRiskLimit(SWGNumber* risk_limit) {
    this->risk_limit = risk_limit;
    this->m_risk_limit_isSet = true;
}

QString*
SWGMargin::getPrevState() {
    return prev_state;
}
void
SWGMargin::setPrevState(QString* prev_state) {
    this->prev_state = prev_state;
    this->m_prev_state_isSet = true;
}

QString*
SWGMargin::getState() {
    return state;
}
void
SWGMargin::setState(QString* state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
SWGMargin::getAction() {
    return action;
}
void
SWGMargin::setAction(QString* action) {
    this->action = action;
    this->m_action_isSet = true;
}

SWGNumber*
SWGMargin::getAmount() {
    return amount;
}
void
SWGMargin::setAmount(SWGNumber* amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}

SWGNumber*
SWGMargin::getPendingCredit() {
    return pending_credit;
}
void
SWGMargin::setPendingCredit(SWGNumber* pending_credit) {
    this->pending_credit = pending_credit;
    this->m_pending_credit_isSet = true;
}

SWGNumber*
SWGMargin::getPendingDebit() {
    return pending_debit;
}
void
SWGMargin::setPendingDebit(SWGNumber* pending_debit) {
    this->pending_debit = pending_debit;
    this->m_pending_debit_isSet = true;
}

SWGNumber*
SWGMargin::getConfirmedDebit() {
    return confirmed_debit;
}
void
SWGMargin::setConfirmedDebit(SWGNumber* confirmed_debit) {
    this->confirmed_debit = confirmed_debit;
    this->m_confirmed_debit_isSet = true;
}

SWGNumber*
SWGMargin::getPrevRealisedPnl() {
    return prev_realised_pnl;
}
void
SWGMargin::setPrevRealisedPnl(SWGNumber* prev_realised_pnl) {
    this->prev_realised_pnl = prev_realised_pnl;
    this->m_prev_realised_pnl_isSet = true;
}

SWGNumber*
SWGMargin::getPrevUnrealisedPnl() {
    return prev_unrealised_pnl;
}
void
SWGMargin::setPrevUnrealisedPnl(SWGNumber* prev_unrealised_pnl) {
    this->prev_unrealised_pnl = prev_unrealised_pnl;
    this->m_prev_unrealised_pnl_isSet = true;
}

SWGNumber*
SWGMargin::getGrossComm() {
    return gross_comm;
}
void
SWGMargin::setGrossComm(SWGNumber* gross_comm) {
    this->gross_comm = gross_comm;
    this->m_gross_comm_isSet = true;
}

SWGNumber*
SWGMargin::getGrossOpenCost() {
    return gross_open_cost;
}
void
SWGMargin::setGrossOpenCost(SWGNumber* gross_open_cost) {
    this->gross_open_cost = gross_open_cost;
    this->m_gross_open_cost_isSet = true;
}

SWGNumber*
SWGMargin::getGrossOpenPremium() {
    return gross_open_premium;
}
void
SWGMargin::setGrossOpenPremium(SWGNumber* gross_open_premium) {
    this->gross_open_premium = gross_open_premium;
    this->m_gross_open_premium_isSet = true;
}

SWGNumber*
SWGMargin::getGrossExecCost() {
    return gross_exec_cost;
}
void
SWGMargin::setGrossExecCost(SWGNumber* gross_exec_cost) {
    this->gross_exec_cost = gross_exec_cost;
    this->m_gross_exec_cost_isSet = true;
}

SWGNumber*
SWGMargin::getGrossMarkValue() {
    return gross_mark_value;
}
void
SWGMargin::setGrossMarkValue(SWGNumber* gross_mark_value) {
    this->gross_mark_value = gross_mark_value;
    this->m_gross_mark_value_isSet = true;
}

SWGNumber*
SWGMargin::getRiskValue() {
    return risk_value;
}
void
SWGMargin::setRiskValue(SWGNumber* risk_value) {
    this->risk_value = risk_value;
    this->m_risk_value_isSet = true;
}

SWGNumber*
SWGMargin::getTaxableMargin() {
    return taxable_margin;
}
void
SWGMargin::setTaxableMargin(SWGNumber* taxable_margin) {
    this->taxable_margin = taxable_margin;
    this->m_taxable_margin_isSet = true;
}

SWGNumber*
SWGMargin::getInitMargin() {
    return init_margin;
}
void
SWGMargin::setInitMargin(SWGNumber* init_margin) {
    this->init_margin = init_margin;
    this->m_init_margin_isSet = true;
}

SWGNumber*
SWGMargin::getMaintMargin() {
    return maint_margin;
}
void
SWGMargin::setMaintMargin(SWGNumber* maint_margin) {
    this->maint_margin = maint_margin;
    this->m_maint_margin_isSet = true;
}

SWGNumber*
SWGMargin::getSessionMargin() {
    return session_margin;
}
void
SWGMargin::setSessionMargin(SWGNumber* session_margin) {
    this->session_margin = session_margin;
    this->m_session_margin_isSet = true;
}

SWGNumber*
SWGMargin::getTargetExcessMargin() {
    return target_excess_margin;
}
void
SWGMargin::setTargetExcessMargin(SWGNumber* target_excess_margin) {
    this->target_excess_margin = target_excess_margin;
    this->m_target_excess_margin_isSet = true;
}

SWGNumber*
SWGMargin::getVarMargin() {
    return var_margin;
}
void
SWGMargin::setVarMargin(SWGNumber* var_margin) {
    this->var_margin = var_margin;
    this->m_var_margin_isSet = true;
}

SWGNumber*
SWGMargin::getRealisedPnl() {
    return realised_pnl;
}
void
SWGMargin::setRealisedPnl(SWGNumber* realised_pnl) {
    this->realised_pnl = realised_pnl;
    this->m_realised_pnl_isSet = true;
}

SWGNumber*
SWGMargin::getUnrealisedPnl() {
    return unrealised_pnl;
}
void
SWGMargin::setUnrealisedPnl(SWGNumber* unrealised_pnl) {
    this->unrealised_pnl = unrealised_pnl;
    this->m_unrealised_pnl_isSet = true;
}

SWGNumber*
SWGMargin::getIndicativeTax() {
    return indicative_tax;
}
void
SWGMargin::setIndicativeTax(SWGNumber* indicative_tax) {
    this->indicative_tax = indicative_tax;
    this->m_indicative_tax_isSet = true;
}

SWGNumber*
SWGMargin::getUnrealisedProfit() {
    return unrealised_profit;
}
void
SWGMargin::setUnrealisedProfit(SWGNumber* unrealised_profit) {
    this->unrealised_profit = unrealised_profit;
    this->m_unrealised_profit_isSet = true;
}

SWGNumber*
SWGMargin::getSyntheticMargin() {
    return synthetic_margin;
}
void
SWGMargin::setSyntheticMargin(SWGNumber* synthetic_margin) {
    this->synthetic_margin = synthetic_margin;
    this->m_synthetic_margin_isSet = true;
}

SWGNumber*
SWGMargin::getWalletBalance() {
    return wallet_balance;
}
void
SWGMargin::setWalletBalance(SWGNumber* wallet_balance) {
    this->wallet_balance = wallet_balance;
    this->m_wallet_balance_isSet = true;
}

SWGNumber*
SWGMargin::getMarginBalance() {
    return margin_balance;
}
void
SWGMargin::setMarginBalance(SWGNumber* margin_balance) {
    this->margin_balance = margin_balance;
    this->m_margin_balance_isSet = true;
}

double
SWGMargin::getMarginBalancePcnt() {
    return margin_balance_pcnt;
}
void
SWGMargin::setMarginBalancePcnt(double margin_balance_pcnt) {
    this->margin_balance_pcnt = margin_balance_pcnt;
    this->m_margin_balance_pcnt_isSet = true;
}

double
SWGMargin::getMarginLeverage() {
    return margin_leverage;
}
void
SWGMargin::setMarginLeverage(double margin_leverage) {
    this->margin_leverage = margin_leverage;
    this->m_margin_leverage_isSet = true;
}

double
SWGMargin::getMarginUsedPcnt() {
    return margin_used_pcnt;
}
void
SWGMargin::setMarginUsedPcnt(double margin_used_pcnt) {
    this->margin_used_pcnt = margin_used_pcnt;
    this->m_margin_used_pcnt_isSet = true;
}

SWGNumber*
SWGMargin::getExcessMargin() {
    return excess_margin;
}
void
SWGMargin::setExcessMargin(SWGNumber* excess_margin) {
    this->excess_margin = excess_margin;
    this->m_excess_margin_isSet = true;
}

double
SWGMargin::getExcessMarginPcnt() {
    return excess_margin_pcnt;
}
void
SWGMargin::setExcessMarginPcnt(double excess_margin_pcnt) {
    this->excess_margin_pcnt = excess_margin_pcnt;
    this->m_excess_margin_pcnt_isSet = true;
}

SWGNumber*
SWGMargin::getAvailableMargin() {
    return available_margin;
}
void
SWGMargin::setAvailableMargin(SWGNumber* available_margin) {
    this->available_margin = available_margin;
    this->m_available_margin_isSet = true;
}

SWGNumber*
SWGMargin::getWithdrawableMargin() {
    return withdrawable_margin;
}
void
SWGMargin::setWithdrawableMargin(SWGNumber* withdrawable_margin) {
    this->withdrawable_margin = withdrawable_margin;
    this->m_withdrawable_margin_isSet = true;
}

QDateTime*
SWGMargin::getTimestamp() {
    return timestamp;
}
void
SWGMargin::setTimestamp(QDateTime* timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

SWGNumber*
SWGMargin::getGrossLastValue() {
    return gross_last_value;
}
void
SWGMargin::setGrossLastValue(SWGNumber* gross_last_value) {
    this->gross_last_value = gross_last_value;
    this->m_gross_last_value_isSet = true;
}

double
SWGMargin::getCommission() {
    return commission;
}
void
SWGMargin::setCommission(double commission) {
    this->commission = commission;
    this->m_commission_isSet = true;
}


bool
SWGMargin::isSet(){
    bool isObjectUpdated = false;
    do{
        if(account != nullptr && account->isSet()){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(risk_limit != nullptr && risk_limit->isSet()){ isObjectUpdated = true; break;}
        if(prev_state != nullptr && *prev_state != QString("")){ isObjectUpdated = true; break;}
        if(state != nullptr && *state != QString("")){ isObjectUpdated = true; break;}
        if(action != nullptr && *action != QString("")){ isObjectUpdated = true; break;}
        if(amount != nullptr && amount->isSet()){ isObjectUpdated = true; break;}
        if(pending_credit != nullptr && pending_credit->isSet()){ isObjectUpdated = true; break;}
        if(pending_debit != nullptr && pending_debit->isSet()){ isObjectUpdated = true; break;}
        if(confirmed_debit != nullptr && confirmed_debit->isSet()){ isObjectUpdated = true; break;}
        if(prev_realised_pnl != nullptr && prev_realised_pnl->isSet()){ isObjectUpdated = true; break;}
        if(prev_unrealised_pnl != nullptr && prev_unrealised_pnl->isSet()){ isObjectUpdated = true; break;}
        if(gross_comm != nullptr && gross_comm->isSet()){ isObjectUpdated = true; break;}
        if(gross_open_cost != nullptr && gross_open_cost->isSet()){ isObjectUpdated = true; break;}
        if(gross_open_premium != nullptr && gross_open_premium->isSet()){ isObjectUpdated = true; break;}
        if(gross_exec_cost != nullptr && gross_exec_cost->isSet()){ isObjectUpdated = true; break;}
        if(gross_mark_value != nullptr && gross_mark_value->isSet()){ isObjectUpdated = true; break;}
        if(risk_value != nullptr && risk_value->isSet()){ isObjectUpdated = true; break;}
        if(taxable_margin != nullptr && taxable_margin->isSet()){ isObjectUpdated = true; break;}
        if(init_margin != nullptr && init_margin->isSet()){ isObjectUpdated = true; break;}
        if(maint_margin != nullptr && maint_margin->isSet()){ isObjectUpdated = true; break;}
        if(session_margin != nullptr && session_margin->isSet()){ isObjectUpdated = true; break;}
        if(target_excess_margin != nullptr && target_excess_margin->isSet()){ isObjectUpdated = true; break;}
        if(var_margin != nullptr && var_margin->isSet()){ isObjectUpdated = true; break;}
        if(realised_pnl != nullptr && realised_pnl->isSet()){ isObjectUpdated = true; break;}
        if(unrealised_pnl != nullptr && unrealised_pnl->isSet()){ isObjectUpdated = true; break;}
        if(indicative_tax != nullptr && indicative_tax->isSet()){ isObjectUpdated = true; break;}
        if(unrealised_profit != nullptr && unrealised_profit->isSet()){ isObjectUpdated = true; break;}
        if(synthetic_margin != nullptr && synthetic_margin->isSet()){ isObjectUpdated = true; break;}
        if(wallet_balance != nullptr && wallet_balance->isSet()){ isObjectUpdated = true; break;}
        if(margin_balance != nullptr && margin_balance->isSet()){ isObjectUpdated = true; break;}
        if(m_margin_balance_pcnt_isSet){ isObjectUpdated = true; break;}
        if(m_margin_leverage_isSet){ isObjectUpdated = true; break;}
        if(m_margin_used_pcnt_isSet){ isObjectUpdated = true; break;}
        if(excess_margin != nullptr && excess_margin->isSet()){ isObjectUpdated = true; break;}
        if(m_excess_margin_pcnt_isSet){ isObjectUpdated = true; break;}
        if(available_margin != nullptr && available_margin->isSet()){ isObjectUpdated = true; break;}
        if(withdrawable_margin != nullptr && withdrawable_margin->isSet()){ isObjectUpdated = true; break;}
        
        if(gross_last_value != nullptr && gross_last_value->isSet()){ isObjectUpdated = true; break;}
        if(m_commission_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

