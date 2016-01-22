# RWAutoUnlock

## Description
A marco to lock and unlock automatically



## Usage

```objc
NSLock* lock = [NSLock new];
AUTOUNLOCK(lock){
  NSLog(@"hi");
  //do some things 
};
//....
AUTOUNLOCK(lock){
  NSLog(@"say hi again");
  //do some things 
};
```
