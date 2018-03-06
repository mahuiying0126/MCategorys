//
//  NSArray+MAdd.m
//  PodCatesDemo
//
//  Created by magic on 2018/3/3.
//  Copyright © 2018年 magic. All rights reserved.
//

#import "NSArray+MAdd.h"

@implementation NSArray (MAdd)

- (id)m_safeObjectAtIndex:(NSInteger)index{
    if (index > self.count) {
        return nil;
    }
    return [self objectAtIndex:index];
}

- (id)m_randomObject{
    if (self.count) {
        return self[arc4random_uniform((u_int32_t)self.count)];
    }
    return nil;
}

- (NSUInteger)m_safeIndexOfObject:(id)object{
    if (object == nil) {
        
        return NSNotFound;
    }
    return [self indexOfObject:object];
}

- (NSString *)m_jsonStringEncoded{
    if ([NSJSONSerialization isValidJSONObject:self]) {
        NSError *error = nil;
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self options:0 error:&error];
        NSString *json = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        if (!error) return json;
    }
    return nil;
}

+ (NSArray *)m_getArrayFromPlistName:(NSString *)name{
    NSString *path = [[NSBundle mainBundle] pathForResource:name ofType:@"plist"];
    if (path) {
        return [NSArray arrayWithContentsOfFile:path];
    }
    return [NSArray new];
    
}

@end
