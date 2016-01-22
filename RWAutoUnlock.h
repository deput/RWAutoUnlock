//
//  RWAutoUnlock.h
//  RWAutoUnlock
//
//  Created by deput on 1/21/16.
//  Copyright © 2016 deput. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AutoUnlockObject : NSObject {
    id<NSLocking> _lock;
}
@property (nonatomic,copy) dispatch_block_t block;
- (id) initWithLock:(id<NSLocking>)theLock;
@end

#define AUTOUNLOCK(lock) \
[[AutoUnlockObject alloc] initWithLock:lock].block = ^
