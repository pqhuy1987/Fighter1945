//
//  Fighter.h
//  Fighter1945
//
//  Created by kim cheonjin on 08/09/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "CollidableSprite.h"

@interface Fighter : CollidableSprite

- (void)move;
+ (id)fighter;

@property float direction, speed;

@end
