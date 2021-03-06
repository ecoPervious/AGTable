//
//  AGBinding.h
//  AGTable
//
//  Created by Amy Worrall on 04/12/2012.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AGBinding : NSObject

@property (nonatomic, weak) id modelObject;
@property (nonatomic, weak) UITableViewCell *cell;

@property (nonatomic, copy) NSString *modelKeypath;

@property (nonatomic, assign) NSInteger viewTag;
@property (nonatomic, copy) NSString *viewKeypath;

@property (nonatomic, strong) NSDictionary* options;
@property (nonatomic, assign) BOOL isBindingPrototype;

- (AGBinding*)copyWithModelObject:(id)modelObject;

// this is used to apply the binding to a cell that isn't actually going to be bound
- (void)applyDataToCell:(UITableViewCell*)cell forObject:(id)anObject;

- (id)currentModelValue;

@end
