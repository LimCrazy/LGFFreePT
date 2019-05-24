//
//  LGFFreePTLine.h
//  OptimalLive
//
//  Created by apple on 2019/4/23.
//  Copyright © 2019年 QT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LGFFreePTStyle.h"

NS_ASSUME_NONNULL_BEGIN
@protocol LGFFreePTLineDelegate <NSObject>
@optional
#pragma mark - 加载 line 网络图片代理，具体加载框架我的 Demo 不做约束，请自己选择图片加载框架
/**
 @param imageView 要加载网络图片的 imageView
 @param imageUrl 网络图片的 Url
 */
- (void)lgf_GetLineNetImage:(UIImageView *)imageView imageUrl:(NSURL *)imageUrl;
@end
@interface LGFFreePTLine : UIImageView
@property (strong, nonatomic) LGFFreePTStyle *lgf_Style;// 配置用模型
@property (weak, nonatomic) id<LGFFreePTLineDelegate>lgf_FreePTLineDelegate;

#pragma mark - 初始化
+ (instancetype)lgf;

#pragma mark - 标底部滚动条配置
- (void)lgf_AllocLine:(LGFFreePTStyle *)style delegate:(id<LGFFreePTLineDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
