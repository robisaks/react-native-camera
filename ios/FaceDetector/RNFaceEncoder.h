//
//  RNFaceEncoder.h
//  RCTCamera
//
//  Created by Joao Guilherme Daros Fidelis on 21/01/18.
//

#import <UIKit/UIKit.h>
#import <GoogleMobileVision/GoogleMobileVision.h>

@interface RNFaceEncoder : NSObject

- (instancetype)initWithTransform:(CGAffineTransform)transform;

- (NSDictionary *)encode:(GMVFaceFeature *)face;

@end
