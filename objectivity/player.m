#import "player.h"

@implementation Player
@synthesize name;

- (id) initWithName: (NSString *)aName
{
  self = [super init];

  [self setName:aName];

  return self;
}
@end
