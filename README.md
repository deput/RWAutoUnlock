# RWAutoUnlock

## Description
A marco to lock and unlock automatically


## Usage
This macro is used like `@synchronized`:

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
## Implementation
In this macro, ARC is used to help complishing lock and unlock.
A temporary instance will be release at once if no reference.
When this `dealloc` is called, we invoke the block passed by the macro. 

Please reference to source code for details.
