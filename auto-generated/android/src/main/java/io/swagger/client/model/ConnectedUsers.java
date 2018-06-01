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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ConnectedUsers {
  
  @SerializedName("users")
  private BigDecimal users = null;
  @SerializedName("bots")
  private BigDecimal bots = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getUsers() {
    return users;
  }
  public void setUsers(BigDecimal users) {
    this.users = users;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getBots() {
    return bots;
  }
  public void setBots(BigDecimal bots) {
    this.bots = bots;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConnectedUsers connectedUsers = (ConnectedUsers) o;
    return (this.users == null ? connectedUsers.users == null : this.users.equals(connectedUsers.users)) &&
        (this.bots == null ? connectedUsers.bots == null : this.bots.equals(connectedUsers.bots));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.users == null ? 0: this.users.hashCode());
    result = 31 * result + (this.bots == null ? 0: this.bots.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConnectedUsers {\n");
    
    sb.append("  users: ").append(users).append("\n");
    sb.append("  bots: ").append(bots).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
