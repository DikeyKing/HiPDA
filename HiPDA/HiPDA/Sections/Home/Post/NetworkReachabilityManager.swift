//
//  NetworkReachabilityManager.swift
//  HiPDA
//
//  Created by leizh007 on 2017/5/24.
//  Copyright © 2017年 HiPDA. All rights reserved.
//

import Foundation
import Alamofire

class NetworkReachabilityManager {
    static let shared = NetworkReachabilityManager()
    fileprivate init () { }
    
    // https://github.com/Alamofire/Alamofire/issues/1782
    let manager = Alamofire.NetworkReachabilityManager(host: "www.baidu.com")
    
    var isReachable: Bool {
        return manager?.isReachable ?? false
    }
    
    var isReachableOnWWAN: Bool {
        return manager?.isReachableOnCellular ?? false
    }
    
    var isReachableOnEthernetOrWiFi: Bool {
        return manager?.isReachableOnEthernetOrWiFi ?? false
    }
    
    public func startListening() {
        manager?.startListening(onUpdatePerforming: { _  in
        })
    }
    
    func stopListening() {
        manager?.stopListening()
    }
}
