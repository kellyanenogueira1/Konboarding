//
//  KonboardingViewControllerDelegate.h
//  
//
//  Created by Kellyane Nogueira on 29/07/21.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KonboardingViewControllerDelegate <NSObject>

@required
- (void)setNextPage:(UIViewController *)nextPage;
- (void)setCurrentPage:(UIViewController *)currentPage;
- (void)setPreviewPage:(UIViewController *)previewPage;
- (void)close;

@end

NS_ASSUME_NONNULL_END
