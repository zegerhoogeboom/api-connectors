//
// InstrumentInterval.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation



public struct InstrumentInterval: Codable {

    public var intervals: [String]
    public var symbols: [String]

    public init(intervals: [String], symbols: [String]) {
        self.intervals = intervals
        self.symbols = symbols
    }


}

