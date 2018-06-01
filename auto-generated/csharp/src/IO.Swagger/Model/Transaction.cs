/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Transaction
    /// </summary>
    [DataContract]
    public partial class Transaction :  IEquatable<Transaction>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Transaction" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected Transaction() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="Transaction" /> class.
        /// </summary>
        /// <param name="transactID">transactID (required).</param>
        /// <param name="account">account.</param>
        /// <param name="currency">currency.</param>
        /// <param name="transactType">transactType.</param>
        /// <param name="amount">amount.</param>
        /// <param name="fee">fee.</param>
        /// <param name="transactStatus">transactStatus.</param>
        /// <param name="address">address.</param>
        /// <param name="tx">tx.</param>
        /// <param name="text">text.</param>
        /// <param name="transactTime">transactTime.</param>
        /// <param name="timestamp">timestamp.</param>
        public Transaction(string transactID = default(string), decimal? account = default(decimal?), string currency = default(string), string transactType = default(string), decimal? amount = default(decimal?), decimal? fee = default(decimal?), string transactStatus = default(string), string address = default(string), string tx = default(string), string text = default(string), DateTime? transactTime = default(DateTime?), DateTime? timestamp = default(DateTime?))
        {
            // to ensure "transactID" is required (not null)
            if (transactID == null)
            {
                throw new InvalidDataException("transactID is a required property for Transaction and cannot be null");
            }
            else
            {
                this.TransactID = transactID;
            }
            this.Account = account;
            this.Currency = currency;
            this.TransactType = transactType;
            this.Amount = amount;
            this.Fee = fee;
            this.TransactStatus = transactStatus;
            this.Address = address;
            this.Tx = tx;
            this.Text = text;
            this.TransactTime = transactTime;
            this.Timestamp = timestamp;
        }
        
        /// <summary>
        /// Gets or Sets TransactID
        /// </summary>
        [DataMember(Name="transactID", EmitDefaultValue=false)]
        public string TransactID { get; set; }

        /// <summary>
        /// Gets or Sets Account
        /// </summary>
        [DataMember(Name="account", EmitDefaultValue=false)]
        public decimal? Account { get; set; }

        /// <summary>
        /// Gets or Sets Currency
        /// </summary>
        [DataMember(Name="currency", EmitDefaultValue=false)]
        public string Currency { get; set; }

        /// <summary>
        /// Gets or Sets TransactType
        /// </summary>
        [DataMember(Name="transactType", EmitDefaultValue=false)]
        public string TransactType { get; set; }

        /// <summary>
        /// Gets or Sets Amount
        /// </summary>
        [DataMember(Name="amount", EmitDefaultValue=false)]
        public decimal? Amount { get; set; }

        /// <summary>
        /// Gets or Sets Fee
        /// </summary>
        [DataMember(Name="fee", EmitDefaultValue=false)]
        public decimal? Fee { get; set; }

        /// <summary>
        /// Gets or Sets TransactStatus
        /// </summary>
        [DataMember(Name="transactStatus", EmitDefaultValue=false)]
        public string TransactStatus { get; set; }

        /// <summary>
        /// Gets or Sets Address
        /// </summary>
        [DataMember(Name="address", EmitDefaultValue=false)]
        public string Address { get; set; }

        /// <summary>
        /// Gets or Sets Tx
        /// </summary>
        [DataMember(Name="tx", EmitDefaultValue=false)]
        public string Tx { get; set; }

        /// <summary>
        /// Gets or Sets Text
        /// </summary>
        [DataMember(Name="text", EmitDefaultValue=false)]
        public string Text { get; set; }

        /// <summary>
        /// Gets or Sets TransactTime
        /// </summary>
        [DataMember(Name="transactTime", EmitDefaultValue=false)]
        public DateTime? TransactTime { get; set; }

        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public DateTime? Timestamp { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Transaction {\n");
            sb.Append("  TransactID: ").Append(TransactID).Append("\n");
            sb.Append("  Account: ").Append(Account).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  TransactType: ").Append(TransactType).Append("\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  Fee: ").Append(Fee).Append("\n");
            sb.Append("  TransactStatus: ").Append(TransactStatus).Append("\n");
            sb.Append("  Address: ").Append(Address).Append("\n");
            sb.Append("  Tx: ").Append(Tx).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  TransactTime: ").Append(TransactTime).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as Transaction);
        }

        /// <summary>
        /// Returns true if Transaction instances are equal
        /// </summary>
        /// <param name="input">Instance of Transaction to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Transaction input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.TransactID == input.TransactID ||
                    (this.TransactID != null &&
                    this.TransactID.Equals(input.TransactID))
                ) && 
                (
                    this.Account == input.Account ||
                    (this.Account != null &&
                    this.Account.Equals(input.Account))
                ) && 
                (
                    this.Currency == input.Currency ||
                    (this.Currency != null &&
                    this.Currency.Equals(input.Currency))
                ) && 
                (
                    this.TransactType == input.TransactType ||
                    (this.TransactType != null &&
                    this.TransactType.Equals(input.TransactType))
                ) && 
                (
                    this.Amount == input.Amount ||
                    (this.Amount != null &&
                    this.Amount.Equals(input.Amount))
                ) && 
                (
                    this.Fee == input.Fee ||
                    (this.Fee != null &&
                    this.Fee.Equals(input.Fee))
                ) && 
                (
                    this.TransactStatus == input.TransactStatus ||
                    (this.TransactStatus != null &&
                    this.TransactStatus.Equals(input.TransactStatus))
                ) && 
                (
                    this.Address == input.Address ||
                    (this.Address != null &&
                    this.Address.Equals(input.Address))
                ) && 
                (
                    this.Tx == input.Tx ||
                    (this.Tx != null &&
                    this.Tx.Equals(input.Tx))
                ) && 
                (
                    this.Text == input.Text ||
                    (this.Text != null &&
                    this.Text.Equals(input.Text))
                ) && 
                (
                    this.TransactTime == input.TransactTime ||
                    (this.TransactTime != null &&
                    this.TransactTime.Equals(input.TransactTime))
                ) && 
                (
                    this.Timestamp == input.Timestamp ||
                    (this.Timestamp != null &&
                    this.Timestamp.Equals(input.Timestamp))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.TransactID != null)
                    hashCode = hashCode * 59 + this.TransactID.GetHashCode();
                if (this.Account != null)
                    hashCode = hashCode * 59 + this.Account.GetHashCode();
                if (this.Currency != null)
                    hashCode = hashCode * 59 + this.Currency.GetHashCode();
                if (this.TransactType != null)
                    hashCode = hashCode * 59 + this.TransactType.GetHashCode();
                if (this.Amount != null)
                    hashCode = hashCode * 59 + this.Amount.GetHashCode();
                if (this.Fee != null)
                    hashCode = hashCode * 59 + this.Fee.GetHashCode();
                if (this.TransactStatus != null)
                    hashCode = hashCode * 59 + this.TransactStatus.GetHashCode();
                if (this.Address != null)
                    hashCode = hashCode * 59 + this.Address.GetHashCode();
                if (this.Tx != null)
                    hashCode = hashCode * 59 + this.Tx.GetHashCode();
                if (this.Text != null)
                    hashCode = hashCode * 59 + this.Text.GetHashCode();
                if (this.TransactTime != null)
                    hashCode = hashCode * 59 + this.TransactTime.GetHashCode();
                if (this.Timestamp != null)
                    hashCode = hashCode * 59 + this.Timestamp.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
