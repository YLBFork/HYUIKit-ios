#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HYUIKit.h"
#import "UIColor+HYCategory.h"
#import "UITabBar+HYCategory.h"

FOUNDATION_EXPORT double HYUIKit_iosVersionNumber;
FOUNDATION_EXPORT const unsigned char HYUIKit_iosVersionString[];

