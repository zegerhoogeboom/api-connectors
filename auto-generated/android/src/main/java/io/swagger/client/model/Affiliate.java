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

package io.swagger.client.model;

import java.math.BigDecimal;
import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class Affiliate {
  
  @SerializedName("account")
  private BigDecimal account = null;
  @SerializedName("currency")
  private String currency = null;
  @SerializedName("prevPayout")
  private BigDecimal prevPayout = null;
  @SerializedName("prevTurnover")
  private BigDecimal prevTurnover = null;
  @SerializedName("prevComm")
  private BigDecimal prevComm = null;
  @SerializedName("prevTimestamp")
  private Date prevTimestamp = null;
  @SerializedName("execTurnover")
  private BigDecimal execTurnover = null;
  @SerializedName("execComm")
  private BigDecimal execComm = null;
  @SerializedName("totalReferrals")
  private BigDecimal totalReferrals = null;
  @SerializedName("totalTurnover")
  private BigDecimal totalTurnover = null;
  @SerializedName("totalComm")
  private BigDecimal totalComm = null;
  @SerializedName("payoutPcnt")
  private Double payoutPcnt = null;
  @SerializedName("pendingPayout")
  private BigDecimal pendingPayout = null;
  @SerializedName("timestamp")
  private Date timestamp = null;
  @SerializedName("referrerAccount")
  private Double referrerAccount = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getAccount() {
    return account;
  }
  public void setAccount(BigDecimal account) {
    this.account = account;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevPayout() {
    return prevPayout;
  }
  public void setPrevPayout(BigDecimal prevPayout) {
    this.prevPayout = prevPayout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevTurnover() {
    return prevTurnover;
  }
  public void setPrevTurnover(BigDecimal prevTurnover) {
    this.prevTurnover = prevTurnover;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevComm() {
    return prevComm;
  }
  public void setPrevComm(BigDecimal prevComm) {
    this.prevComm = prevComm;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getPrevTimestamp() {
    return prevTimestamp;
  }
  public void setPrevTimestamp(Date prevTimestamp) {
    this.prevTimestamp = prevTimestamp;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getExecTurnover() {
    return execTurnover;
  }
  public void setExecTurnover(BigDecimal execTurnover) {
    this.execTurnover = execTurnover;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getExecComm() {
    return execComm;
  }
  public void setExecComm(BigDecimal execComm) {
    this.execComm = execComm;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalReferrals() {
    return totalReferrals;
  }
  public void setTotalReferrals(BigDecimal totalReferrals) {
    this.totalReferrals = totalReferrals;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalTurnover() {
    return totalTurnover;
  }
  public void setTotalTurnover(BigDecimal totalTurnover) {
    this.totalTurnover = totalTurnover;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalComm() {
    return totalComm;
  }
  public void setTotalComm(BigDecimal totalComm) {
    this.totalComm = totalComm;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getPayoutPcnt() {
    return payoutPcnt;
  }
  public void setPayoutPcnt(Double payoutPcnt) {
    this.payoutPcnt = payoutPcnt;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingPayout() {
    return pendingPayout;
  }
  public void setPendingPayout(BigDecimal pendingPayout) {
    this.pendingPayout = pendingPayout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getTimestamp() {
    return timestamp;
  }
  public void setTimestamp(Date timestamp) {
    this.timestamp = timestamp;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getReferrerAccount() {
    return referrerAccount;
  }
  public void setReferrerAccount(Double referrerAccount) {
    this.referrerAccount = referrerAccount;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Affiliate affiliate = (Affiliate) o;
    return (this.account == null ? affiliate.account == null : this.account.equals(affiliate.account)) &&
        (this.currency == null ? affiliate.currency == null : this.currency.equals(affiliate.currency)) &&
        (this.prevPayout == null ? affiliate.prevPayout == null : this.prevPayout.equals(affiliate.prevPayout)) &&
        (this.prevTurnover == null ? affiliate.prevTurnover == null : this.prevTurnover.equals(affiliate.prevTurnover)) &&
        (this.prevComm == null ? affiliate.prevComm == null : this.prevComm.equals(affiliate.prevComm)) &&
        (this.prevTimestamp == null ? affiliate.prevTimestamp == null : this.prevTimestamp.equals(affiliate.prevTimestamp)) &&
        (this.execTurnover == null ? affiliate.execTurnover == null : this.execTurnover.equals(affiliate.execTurnover)) &&
        (this.execComm == null ? affiliate.execComm == null : this.execComm.equals(affiliate.execComm)) &&
        (this.totalReferrals == null ? affiliate.totalReferrals == null : this.totalReferrals.equals(affiliate.totalReferrals)) &&
        (this.totalTurnover == null ? affiliate.totalTurnover == null : this.totalTurnover.equals(affiliate.totalTurnover)) &&
        (this.totalComm == null ? affiliate.totalComm == null : this.totalComm.equals(affiliate.totalComm)) &&
        (this.payoutPcnt == null ? affiliate.payoutPcnt == null : this.payoutPcnt.equals(affiliate.payoutPcnt)) &&
        (this.pendingPayout == null ? affiliate.pendingPayout == null : this.pendingPayout.equals(affiliate.pendingPayout)) &&
        (this.timestamp == null ? affiliate.timestamp == null : this.timestamp.equals(affiliate.timestamp)) &&
        (this.referrerAccount == null ? affiliate.referrerAccount == null : this.referrerAccount.equals(affiliate.referrerAccount));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.account == null ? 0: this.account.hashCode());
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    result = 31 * result + (this.prevPayout == null ? 0: this.prevPayout.hashCode());
    result = 31 * result + (this.prevTurnover == null ? 0: this.prevTurnover.hashCode());
    result = 31 * result + (this.prevComm == null ? 0: this.prevComm.hashCode());
    result = 31 * result + (this.prevTimestamp == null ? 0: this.prevTimestamp.hashCode());
    result = 31 * result + (this.execTurnover == null ? 0: this.execTurnover.hashCode());
    result = 31 * result + (this.execComm == null ? 0: this.execComm.hashCode());
    result = 31 * result + (this.totalReferrals == null ? 0: this.totalReferrals.hashCode());
    result = 31 * result + (this.totalTurnover == null ? 0: this.totalTurnover.hashCode());
    result = 31 * result + (this.totalComm == null ? 0: this.totalComm.hashCode());
    result = 31 * result + (this.payoutPcnt == null ? 0: this.payoutPcnt.hashCode());
    result = 31 * result + (this.pendingPayout == null ? 0: this.pendingPayout.hashCode());
    result = 31 * result + (this.timestamp == null ? 0: this.timestamp.hashCode());
    result = 31 * result + (this.referrerAccount == null ? 0: this.referrerAccount.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Affiliate {\n");
    
    sb.append("  account: ").append(account).append("\n");
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("  prevPayout: ").append(prevPayout).append("\n");
    sb.append("  prevTurnover: ").append(prevTurnover).append("\n");
    sb.append("  prevComm: ").append(prevComm).append("\n");
    sb.append("  prevTimestamp: ").append(prevTimestamp).append("\n");
    sb.append("  execTurnover: ").append(execTurnover).append("\n");
    sb.append("  execComm: ").append(execComm).append("\n");
    sb.append("  totalReferrals: ").append(totalReferrals).append("\n");
    sb.append("  totalTurnover: ").append(totalTurnover).append("\n");
    sb.append("  totalComm: ").append(totalComm).append("\n");
    sb.append("  payoutPcnt: ").append(payoutPcnt).append("\n");
    sb.append("  pendingPayout: ").append(pendingPayout).append("\n");
    sb.append("  timestamp: ").append(timestamp).append("\n");
    sb.append("  referrerAccount: ").append(referrerAccount).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
