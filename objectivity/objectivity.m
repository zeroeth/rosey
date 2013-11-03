// pure objective c version, and then gnustep version
#include <Foundation/Foundation.h>

@interface Player : NSObject {
  NSString *name;
}

@property (retain) NSString *name;

- (id) initWithName: (NSString *)inName;
@end


@implementation Player
@synthesize name;


- (id) initWithName: (NSString *)inName {

  return self;
}
@end



@interface GameState : NSObject {
  NSArray *players;
}

@property (retain) NSArray *players;
@end


@implementation GameState
@synthesize players;
@end



@interface PlayerReport : NSObject {
}

+ (void) about: (GameState *)level;
@end


@implementation PlayerReport

+ (void) about: (GameState *)level {
  NSLog (@"Players");
}
@end



int main( int argc, const char *argv[] )
{
  GameState *level = [[GameState alloc] init];

  Player *player1 = [[Player alloc] initWithName: @"zeroeth"];
  Player *player2 = [[Player alloc] initWithName: @"takeshi"];
  Player *player3 = [[Player alloc] initWithName: @"haiiro" ];

  [PlayerReport about:level];

  return 0;
}
