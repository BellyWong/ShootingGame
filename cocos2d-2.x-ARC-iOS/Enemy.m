//
//  Enemy.m
//  ShootingGame
//
//  Created by KazukiKubo on 2013/02/25.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import "Enemy.h"


@implementation Enemy

-(id)init {
    if (self = [super init]) {
        self = [CCSprite spriteWithFile:@"Target.png"];
    }
    return self;
}

@end
