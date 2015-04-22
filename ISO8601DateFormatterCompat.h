//
//  ISO8601DateFormatterCompat.h
//  ISO8601ForCocoa
//
//  Created by nsmatsui on 2015/04/22.
//  Copyright (c) 2015年 Peter Hosey. All rights reserved.
//

#ifndef ISO8601ForCocoa_ISO8601DateFormatterCompat_h
#define ISO8601ForCocoa_ISO8601DateFormatterCompat_h

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>

/*
 NSGregorianCalendar
 NSYearCalendarUnit
 NSMonthCalendarUnit
 NSDayCalendarUnit
 NSWeekdayCalendarUnit
 
 see use/include/Availability.h, use/include/AvailabilityInternal.h,
 */
#if (__MAC_OS_X_VERSION_MIN_REQUIRED >= __MAC_10_10) || (__IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_8_0)
    // ios8 and later. yosemite and later.
    #define ISO8601GregorianCalendar    NSCalendarIdentifierGregorian
    #define ISO8601YearCalendarUnit     NSCalendarUnitYear
    #define ISO8601MonthCalendarUnit    NSCalendarUnitMonth
    #define ISO8601DayCalendarUnit      NSCalendarUnitDay
    #define ISO8601WeekdayCalendarUnit  NSCalendarUnitWeekday

#else
    // ios7 and earler. marverick and earler.
    #define ISO8601GregorianCalendar    NSGregorianCalendar
    #define ISO8601YearCalendarUnit     NSYearCalendarUnit
    #define ISO8601MonthCalendarUnit    NSMonthCalendarUnit
    #define ISO8601DayCalendarUnit      NSDayCalendarUnit
    #define ISO8601WeekdayCalendarUnit  NSWeekdayCalendarUnit

#endif // NS_CALENDAR_ENUM_DEPRECATED


#endif // ISO8601ForCocoa_ISO8601DateFormatterCompat_h
