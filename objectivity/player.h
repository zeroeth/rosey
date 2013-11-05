#import <Foundation/Foundation.h>

@interface Player : NSObject
{
  NSString *name;
}


@property (retain) NSString *name;

- (id) initWithName: (NSString *)inName;
@end
