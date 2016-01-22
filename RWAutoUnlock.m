//
//  RWAutoUnlock.m
//  RWAutoUnlock
//
//  Created by deput on 1/21/16.
//  Copyright © 2016 deput. All rights reserved.
//

#import "RWAutoUnlock.h"

@implementation AutoUnlockObject
- (id) initWithLock:(id<NSLocking>)theLock{
    self = [super init];
    _lock = theLock;
    [_lock lock];
    return self;
}

- (void) dealloc{
    if (self.block) self.block();
    [_lock unlock];
}
@end
