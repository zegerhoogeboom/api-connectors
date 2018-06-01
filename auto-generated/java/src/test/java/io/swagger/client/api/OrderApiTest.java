/*
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


package io.swagger.client.api;

import io.swagger.client.ApiException;
import java.math.BigDecimal;
import io.swagger.client.model.Error;
import org.threeten.bp.OffsetDateTime;
import io.swagger.client.model.Order;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OrderApi
 */
@Ignore
public class OrderApiTest {

    private final OrderApi api = new OrderApi();

    
    /**
     * Amend the quantity or price of an open order.
     *
     * Send an &#x60;orderID&#x60; or &#x60;origClOrdID&#x60; to identify the order you wish to amend.  Both order quantity and price can be amended. Only one &#x60;qty&#x60; field can be used to amend.  Use the &#x60;leavesQty&#x60; field to specify how much of the order you wish to remain open. This can be useful if you want to adjust your position&#39;s delta by a certain amount, regardless of how much of the order has already filled.  &gt; A &#x60;leavesQty&#x60; can be used to make a \&quot;Filled\&quot; order live again, if it is received within 60 seconds of the fill.  Use the &#x60;simpleOrderQty&#x60; and &#x60;simpleLeavesQty&#x60; fields to specify order size in Bitcoin, rather than contracts. These fields will round up to the nearest contract.  Like order placement, amending can be done in bulk. Simply send a request to &#x60;PUT /api/v1/order/bulk&#x60; with a JSON body of the shape: &#x60;{\&quot;orders\&quot;: [{...}, {...}]}&#x60;, each object containing the fields used in this endpoint. 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderAmendTest() throws ApiException {
        String orderID = null;
        String origClOrdID = null;
        String clOrdID = null;
        Double simpleOrderQty = null;
        BigDecimal orderQty = null;
        Double simpleLeavesQty = null;
        BigDecimal leavesQty = null;
        Double price = null;
        Double stopPx = null;
        Double pegOffsetValue = null;
        String text = null;
        Order response = api.orderAmend(orderID, origClOrdID, clOrdID, simpleOrderQty, orderQty, simpleLeavesQty, leavesQty, price, stopPx, pegOffsetValue, text);

        // TODO: test validations
    }
    
    /**
     * Amend multiple orders for the same symbol.
     *
     * Similar to POST /amend, but with multiple orders. &#x60;application/json&#x60; only. Ratelimited at 10%.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderAmendBulkTest() throws ApiException {
        String orders = null;
        List<Order> response = api.orderAmendBulk(orders);

        // TODO: test validations
    }
    
    /**
     * Cancel order(s). Send multiple order IDs to cancel in bulk.
     *
     * Either an orderID or a clOrdID must be provided.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderCancelTest() throws ApiException {
        String orderID = null;
        String clOrdID = null;
        String text = null;
        List<Order> response = api.orderCancel(orderID, clOrdID, text);

        // TODO: test validations
    }
    
    /**
     * Cancels all of your orders.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderCancelAllTest() throws ApiException {
        String symbol = null;
        String filter = null;
        String text = null;
        List<Order> response = api.orderCancelAll(symbol, filter, text);

        // TODO: test validations
    }
    
    /**
     * Automatically cancel all your orders after a specified timeout.
     *
     * Useful as a dead-man&#39;s switch to ensure your orders are canceled in case of an outage. If called repeatedly, the existing offset will be canceled and a new one will be inserted in its place.  Example usage: call this route at 15s intervals with an offset of 60000 (60s). If this route is not called within 60 seconds, all your orders will be automatically canceled.  This is also available via [WebSocket](https://www.bitmex.com/app/wsAPI#Dead-Mans-Switch-Auto-Cancel). 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderCancelAllAfterTest() throws ApiException {
        Double timeout = null;
        Object response = api.orderCancelAllAfter(timeout);

        // TODO: test validations
    }
    
    /**
     * Close a position. [Deprecated, use POST /order with execInst: &#39;Close&#39;]
     *
     * If no &#x60;price&#x60; is specified, a market order will be submitted to close the whole of your position. This will also close all other open orders in this symbol.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderClosePositionTest() throws ApiException {
        String symbol = null;
        Double price = null;
        Order response = api.orderClosePosition(symbol, price);

        // TODO: test validations
    }
    
    /**
     * Get your orders.
     *
     * To get open orders only, send {\&quot;open\&quot;: true} in the filter param.  See &lt;a href&#x3D;\&quot;http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_D_68.html\&quot;&gt;the FIX Spec&lt;/a&gt; for explanations of these fields.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderGetOrdersTest() throws ApiException {
        String symbol = null;
        String filter = null;
        String columns = null;
        BigDecimal count = null;
        BigDecimal start = null;
        Boolean reverse = null;
        OffsetDateTime startTime = null;
        OffsetDateTime endTime = null;
        List<Order> response = api.orderGetOrders(symbol, filter, columns, count, start, reverse, startTime, endTime);

        // TODO: test validations
    }
    
    /**
     * Create a new order.
     *
     * ## Placing Orders  This endpoint is used for placing orders. See individual fields below for more details on their use.  #### Order Types  All orders require a &#x60;symbol&#x60;. All other fields are optional except when otherwise specified.  These are the valid &#x60;ordType&#x60;s:  * **Limit**: The default order type. Specify an &#x60;orderQty&#x60; and &#x60;price&#x60;. * **Market**: A traditional Market order. A Market order will execute until filled or your bankruptcy price is reached, at   which point it will cancel. * **MarketWithLeftOverAsLimit**: A market order that, after eating through the order book as far as   permitted by available margin, will become a limit order. The difference between this type and &#x60;Market&#x60; only   affects the behavior in thin books. Upon reaching the deepest possible price, if there is quantity left over,   a &#x60;Market&#x60; order will cancel the remaining quantity. &#x60;MarketWithLeftOverAsLimit&#x60; will keep the remaining   quantity in the books as a &#x60;Limit&#x60;. * **Stop**: A Stop Market order. Specify an &#x60;orderQty&#x60; and &#x60;stopPx&#x60;. When the &#x60;stopPx&#x60; is reached, the order will be entered   into the book.   * On sell orders, the order will trigger if the triggering price is lower than the &#x60;stopPx&#x60;. On buys, higher.   * Note: Stop orders do not consume margin until triggered. Be sure that the required margin is available in your     account so that it may trigger fully.   * &#x60;Close&#x60; Stops don&#39;t require an &#x60;orderQty&#x60;. See Execution Instructions below. * **StopLimit**: Like a Stop Market, but enters a Limit order instead of a Market order. Specify an &#x60;orderQty&#x60;, &#x60;stopPx&#x60;,   and &#x60;price&#x60;. * **MarketIfTouched**: Similar to a Stop, but triggers are done in the opposite direction. Useful for Take Profit orders. * **LimitIfTouched**: As above; use for Take Profit Limit orders.  #### Execution Instructions  The following &#x60;execInst&#x60;s are supported. If using multiple, separate with a comma (e.g. &#x60;LastPrice,Close&#x60;).  * **ParticipateDoNotInitiate**: Also known as a Post-Only order. If this order would have executed on placement,   it will cancel instead. * **AllOrNone**: Valid only for hidden orders (&#x60;displayQty: 0&#x60;). Use to only execute if the entire order would fill. * **MarkPrice, LastPrice, IndexPrice**: Used by stop and if-touched orders to determine the triggering price.   Use only one. By default, &#x60;&#39;MarkPrice&#39;&#x60; is used. Also used for Pegged orders to define the value of &#x60;&#39;LastPeg&#39;&#x60;. * **ReduceOnly**: A &#x60;&#39;ReduceOnly&#39;&#x60; order can only reduce your position, not increase it. If you have a &#x60;&#39;ReduceOnly&#39;&#x60;   limit order that rests in the order book while the position is reduced by other orders, then its order quantity will   be amended down or canceled. If there are multiple &#x60;&#39;ReduceOnly&#39;&#x60; orders the least agresssive will be amended first. * **Close**: &#x60;&#39;Close&#39;&#x60; implies &#x60;&#39;ReduceOnly&#39;&#x60;. A &#x60;&#39;Close&#39;&#x60; order will cancel other active limit orders with the same side   and symbol if the open quantity exceeds the current position. This is useful for stops: by canceling these orders, a   &#x60;&#39;Close&#39;&#x60; Stop is ensured to have the margin required to execute, and can only execute up to the full size of your   position. If &#x60;orderQty&#x60; is not specified, a &#x60;&#39;Close&#39;&#x60; order has an &#x60;orderQty&#x60; equal to your current position&#39;s size.   * Note that a &#x60;Close&#x60; order without an &#x60;orderQty&#x60; requires a &#x60;side&#x60;, so that BitMEX knows if it should trigger   above or below the &#x60;stopPx&#x60;.  #### Linked Orders  Linked Orders are an advanced capability. It is very powerful, but its use requires careful coding and testing. Please follow this document carefully and use the [Testnet Exchange](https://testnet.bitmex.com) while developing.  BitMEX offers four advanced Linked Order types:  * **OCO**: *One Cancels the Other*. A very flexible version of the standard Stop / Take Profit technique.   Multiple orders may be linked together using a single &#x60;clOrdLinkID&#x60;. Send a &#x60;contingencyType&#x60; of   &#x60;OneCancelsTheOther&#x60; on the orders. The first order that fully or partially executes (or activates   for &#x60;Stop&#x60; orders) will cancel all other orders with the same &#x60;clOrdLinkID&#x60;. * **OTO**: *One Triggers the Other*. Send a &#x60;contingencyType&#x60; of &#x60;&#39;OneTriggersTheOther&#39;&#x60; on the primary order and   then subsequent orders with the same &#x60;clOrdLinkID&#x60; will be not be triggered until the primary order fully executes. * **OUOA**: *One Updates the Other Absolute*. Send a &#x60;contingencyType&#x60; of &#x60;&#39;OneUpdatesTheOtherAbsolute&#39;&#x60; on the orders. Then   as one order has a execution, other orders with the same &#x60;clOrdLinkID&#x60; will have their order quantity amended   down by the execution quantity. * **OUOP**: *One Updates the Other Proportional*. Send a &#x60;contingencyType&#x60; of &#x60;&#39;OneUpdatesTheOtherProportional&#39;&#x60; on the orders. Then   as one order has a execution, other orders with the same &#x60;clOrdLinkID&#x60; will have their order quantity reduced proportionally   by the fill percentage.  #### Trailing Stops  You may use &#x60;pegPriceType&#x60; of &#x60;&#39;TrailingStopPeg&#39;&#x60; to create Trailing Stops. The pegged &#x60;stopPx&#x60; will move as the market moves away from the peg, and freeze as the market moves toward it.  To use, combine with &#x60;pegOffsetValue&#x60; to set the &#x60;stopPx&#x60; of your order. The peg is set to the triggering price specified in the &#x60;execInst&#x60; (default &#x60;&#39;MarkPrice&#39;&#x60;). Use a negative offset for stop-sell and buy-if-touched orders.  Requires &#x60;ordType&#x60;: &#x60;&#39;Stop&#39;, &#39;StopLimit&#39;, &#39;MarketIfTouched&#39;, &#39;LimitIfTouched&#39;&#x60;.  #### Simple Quantities  Send a &#x60;simpleOrderQty&#x60; instead of an &#x60;orderQty&#x60; to create an order denominated in the underlying currency. This is useful for opening up a position with 1 XBT of exposure without having to calculate how many contracts it is.  #### Rate Limits  See the [Bulk Order Documentation](#!/Order/Order_newBulk) if you need to place multiple orders at the same time. Bulk orders require fewer risk checks in the trading engine and thus are ratelimited at **1/10** the normal rate.  You can also improve your reactivity to market movements while staying under your ratelimit by using the [Amend](#!/Order/Order_amend) and [Amend Bulk](#!/Order/Order_amendBulk) endpoints. This allows you to stay in the market and avoids the cancel/replace cycle.  #### Tracking Your Orders  If you want to keep track of order IDs yourself, set a unique &#x60;clOrdID&#x60; per order. This &#x60;clOrdID&#x60; will come back as a property on the order and any related executions (including on the WebSocket), and can be used to get or cancel the order. Max length is 36 characters.  You can also change the &#x60;clOrdID&#x60; by amending an order, supplying an &#x60;origClOrdID&#x60;, and your desired new ID as the &#x60;clOrdID&#x60; param, like so:  &#x60;&#x60;&#x60; # Amends an order&#39;s leavesQty, and updates its clOrdID to \&quot;def-456\&quot; PUT /api/v1/order {\&quot;origClOrdID\&quot;: \&quot;abc-123\&quot;, \&quot;clOrdID\&quot;: \&quot;def-456\&quot;, \&quot;leavesQty\&quot;: 1000} &#x60;&#x60;&#x60; 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderNewTest() throws ApiException {
        String symbol = null;
        String side = null;
        Double simpleOrderQty = null;
        BigDecimal orderQty = null;
        Double price = null;
        BigDecimal displayQty = null;
        Double stopPx = null;
        String clOrdID = null;
        String clOrdLinkID = null;
        Double pegOffsetValue = null;
        String pegPriceType = null;
        String ordType = null;
        String timeInForce = null;
        String execInst = null;
        String contingencyType = null;
        String text = null;
        Order response = api.orderNew(symbol, side, simpleOrderQty, orderQty, price, displayQty, stopPx, clOrdID, clOrdLinkID, pegOffsetValue, pegPriceType, ordType, timeInForce, execInst, contingencyType, text);

        // TODO: test validations
    }
    
    /**
     * Create multiple new orders for the same symbol.
     *
     * This endpoint is used for placing bulk orders. Valid order types are Market, Limit, Stop, StopLimit, MarketIfTouched, LimitIfTouched, MarketWithLeftOverAsLimit, and Pegged.  Each individual order object in the array should have the same properties as an individual POST /order call.  This endpoint is much faster for getting many orders into the book at once. Because it reduces load on BitMEX systems, this endpoint is ratelimited at &#x60;ceil(0.1 * orders)&#x60;. Submitting 10 orders via a bulk order call will only count as 1 request, 15 as 2, 32 as 4, and so on.  For now, only &#x60;application/json&#x60; is supported on this endpoint. 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void orderNewBulkTest() throws ApiException {
        String orders = null;
        List<Order> response = api.orderNewBulk(orders);

        // TODO: test validations
    }
    
}
