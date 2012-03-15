//
//  CMTabBar.h
//
//  Created by Constantine Mureev on 13.03.12.
//  Copyright (c) 2012 Team Force LLC. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum {
    CMTabBarStyleDefault,
    CMTabBarStyleTranslucent,
} CMTabBarStyle;


@protocol CMTabBarDelegate <NSObject>

- (void)tabBar:(id)tabBar willSelectItemAtIndex:(NSUInteger)index;
- (void)tabBar:(id)tabBar didSelectItemAtIndex:(NSUInteger)index;
- (void)tabBar:(id)tabBar willChangeTabBarStyle:(CMTabBarStyle)tabBarStyle;
- (void)tabBar:(id)tabBar didChangeTabBarStyle:(CMTabBarStyle)tabBarStyle;

@end


@interface CMTabBar : UIView

@property (nonatomic, assign) id<CMTabBarDelegate>  delegate;
@property (nonatomic, assign) NSUInteger            selectedIndex;

- (void)setItems:(NSArray*)tabBarItems animated:(BOOL)animated;

@property (nonatomic, assign) CMTabBarStyle         tabBarStyle;
@property (nonatomic, retain) UIColor*              tintColor;
@property (nonatomic, retain) UIImage*              backgroundImage;
@property (nonatomic, retain) UIImage*              selectionIndicatorImage; 

@end
