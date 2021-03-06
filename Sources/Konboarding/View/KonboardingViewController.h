//
//  KonboardingViewController.h
//  
//
//  Created by Kellyane Nogueira on 29/07/21.
//

#import <UIKit/UIKit.h>
#import "PageViewController.h"
#import "../Model/KonboardingViewControllerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface KonboardingViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, KonboardingViewControllerDelegate>

@property UIPageViewController *onboarding;
@property (nonatomic, strong) NSArray<PageViewController*> *viewControllers;
@property (nonatomic, strong) UIPageControl *pageControl;
@property (nonatomic, strong) PageViewController *currentPage;
@property (nonatomic) UIColor *pageIndicatorColor;
@property (nonatomic) UIColor *currentPageIndicatorColor;

-(instancetype)initWithContent: (NSArray<PageViewController*>*)viewControllers;
-(void) moveNextPage;
@end

NS_ASSUME_NONNULL_END
