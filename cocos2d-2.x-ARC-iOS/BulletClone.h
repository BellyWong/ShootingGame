//
//  BulletClone.h
//  ShootingGame
//
//  Created by KazukiKubo on 2013/02/28.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "BulletPrototype.h"

@interface BulletClone : CCSprite<BulletPrototype> {
    int _life;
}

@end
