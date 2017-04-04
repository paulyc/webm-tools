// Copyright (c) 2015 The WebM project authors. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS.  All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.
#import <Foundation/Foundation.h>

#import "IxoDataSource.h"

///
/// Downloader class that supports synchronous or asynchronous operation.
/// Stores downloaded data in IxoDownloadRecord.
///
@interface IxoDownloadOperation : NSOperation

/// Convenience property for diagnosing errors. All HTTP request and response
/// headers will be NSLog()'d when this flag is true.
@property(nonatomic) bool logAllHeaders;

/// Prepares the download operation.
- (instancetype)initWithDownloadRecord:(IxoDownloadRecord*)record
    NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
@end