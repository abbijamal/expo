/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class ABI27_0_0RCTErrorInfo;

/**
 * Provides an interface to customize ReactABI27_0_0 Native error messages and stack
 * traces from exceptions.
 */
@protocol ABI27_0_0RCTErrorCustomizer <NSObject>

/**
 * Customizes the given error, returning the passed info argument if no
 * customization is required.
 */
- (nonnull ABI27_0_0RCTErrorInfo *)customizeErrorInfo:(nonnull ABI27_0_0RCTErrorInfo *)info;
@end