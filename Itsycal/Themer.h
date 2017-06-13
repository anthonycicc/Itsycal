//
//  Created by Sanjay Madan on 6/12/17.
//  Copyright © 2017 mowglii.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// NSUserDefaults key
extern NSString * const kThemeIndex;

// Notification names
extern NSString * const kThemeDidChangeNotification;

// Convenience macro for notification observer for themable components
#define REGISTER_FOR_THEME_CHANGE [[NSNotificationCenter defaultCenter] \
                                    addObserver:self selector:@selector(themeChanged:) \
                                    name:kThemeDidChangeNotification object:nil]

typedef enum : NSUInteger {
    ThemeLight = 0,
    ThemeDark  = 1
} ThemeIndex;

@interface Themer : NSObject

@property (nonatomic) ThemeIndex themeIndex;

+ (instancetype)shared;

- (NSColor *)mainBackgroundColor;
- (NSColor *)windowBorderColor;
- (NSColor *)monthTextColor;
- (NSColor *)DOWTextColor;
- (NSColor *)highlightedDOWTextColor;
- (NSColor *)currentMonthOutlineColor;
- (NSColor *)currentMonthFillColor;
- (NSColor *)currentMonthTextColor;
- (NSColor *)noncurrentMonthTextColor;
- (NSColor *)weekTextColor;
- (NSColor *)todayCellColor;
- (NSColor *)hoveredCellColor;
- (NSColor *)selectedCellColor;
- (NSColor *)resizeHandleForegroundColor;
- (NSColor *)resizeHandleBackgroundColor;
- (NSColor *)agendaDividerColor;
- (NSColor *)agendaHoverColor;
- (NSColor *)agendaDateTextColor;
- (NSColor *)agendaEventTextColor;
- (NSColor *)agendaEventDateTextColor;
- (NSColor *)tooltipBackgroundColor;

@end
