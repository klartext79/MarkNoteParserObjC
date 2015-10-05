//
//  LinkTag.h
//  MarkNoteParserOC
//
//  Created by marknote on 5/10/15.
//  Copyright © 2015 marknote. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "URLTag.h"

@interface LinkTag : NSObject

@property (nonatomic,strong) URLTag* url;
@property (nonatomic,strong) NSString* text;

- (NSString*) toHtml ;
@end
