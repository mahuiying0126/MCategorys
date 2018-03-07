//
//  NSMutableArray+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import "NSMutableArray+MAdd.h"

@implementation NSMutableArray (MAdd)

- (void)m_safeAddObject:(id)object{
    if (object) {
        [self addObject:object];
    }
}

- (void)m_safeInserObject:(id)object index:(NSInteger)index{
    if (object) {
        if (index > self.count) {
            [self insertObject:object atIndex:self.count];
        }else{
            [self insertObject:object atIndex:index];
        }
    }
}

- (void)m_safeRemoveObjectAtIndex:(NSInteger)index{
    if (index < self.count) {
        [self removeObjectAtIndex:index];
    }
}

- (void)m_safeRemoveObjectAtRange:(NSRange)range{
    NSUInteger location = range.location;
    NSUInteger length   = range.length;
    if (location + length > self.count) {
    
    } else {
        [self removeObjectsInRange:range];
    }
}

- (void)m_safeRemoveFirstObject{
    if (self.count) {
        [self removeObjectAtIndex:0];
    }
}

- (void)m_safeRemoveLastObject{
    if (self.count) {
        [self removeObjectAtIndex:self.count - 1];
    }
}

- (void)m_safeAddArray:(NSArray *)array{
    if (array) {
        [self addObjectsFromArray:array];
    }
}

- (void)m_prependObject:(id)object{
    [self m_safeInserObject:object index:0];
}

- (void)m_prependObjectWithArray:(NSArray *)array{
    [self m_insterObjectWithArray:array index:0];
}

- (void)m_insterObjectWithArray:(NSArray *)array index:(NSInteger) index{
    if (array) {
        NSInteger indexs = index;
        for (id object in array) {
            [self m_safeInserObject:object index:indexs++];
        }
    }
}

- (void)reverse{
    NSUInteger count = self.count;
    int mid = floor(count / 2.0);
    for (NSUInteger i = 0; i < mid; i++) {
        [self exchangeObjectAtIndex:i withObjectAtIndex:(count - (i + 1))];
    }
}

@end
