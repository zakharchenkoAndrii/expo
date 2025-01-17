/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ABI46_0_0React/ABI46_0_0RCTBridgeModule.h>
#import <ABI46_0_0React/ABI46_0_0RCTInvalidating.h>

typedef NS_ENUM(NSInteger, ABI46_0_0RCTAlertViewStyle) {
  ABI46_0_0RCTAlertViewStyleDefault = 0,
  ABI46_0_0RCTAlertViewStyleSecureTextInput,
  ABI46_0_0RCTAlertViewStylePlainTextInput,
  ABI46_0_0RCTAlertViewStyleLoginAndPasswordInput
};

@interface ABI46_0_0RCTAlertManager : NSObject <ABI46_0_0RCTBridgeModule, ABI46_0_0RCTInvalidating>

@end
