//
//  CalculatorBrain.h
//  Example Calculator
//
//  Created by Igor Amorim on 14/07/12.
//  Copyright (c) 2012 IFPB. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;
@end
