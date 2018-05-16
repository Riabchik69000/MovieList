//
//  PresentDataProtocol.h
//  MovieList
//
//  Created by Артем Рябцев on 15.05.2018.
//  Copyright © 2018 Артем Рябцев. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PresentDataProtocol <NSObject>

-(NSMutableArray*)moviesList:(NSData*)data;
-(id)movieByID:(NSData*)data;
@end
