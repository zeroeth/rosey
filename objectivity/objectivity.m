// pure objective c version, and then gnustep version
#include <Foundation/Foundation.h>

@interface Player : NSObject
{
  NSString *name;
}


@property (retain) NSString *name;

- (id) initWithName: (NSString *)inName;
@end


@implementation Player
@synthesize name;

- (id) initWithName: (NSString *)aName
{
  self = [super init];

  [self setName:aName];

  return self;
}
@end



@interface GameState : NSObject
{
  NSMutableArray *players;
}

@property (retain) NSMutableArray *players;

- (void) addPlayer: (Player *)aPlayer;
@end


@implementation GameState
@synthesize players;

- (id) init
{
  self = [super init];

  [self setPlayers: [[NSMutableArray alloc] init]];
  return self;
}


- (void) addPlayer: (Player *)aPlayer
{
  [self.players addObject:aPlayer];
}
@end



@interface PlayerReport : NSObject
{
}

+ (void) about: (GameState *)level;
@end


@implementation PlayerReport

+ (void) about: (GameState *)level
{
  NSLog(@"%u Players", (unsigned int)[[level players] count]);
  NSLog (@"----------");

  for (Player *player in [level players])
  {
    NSLog (@"%@", [player name]);
  }
}
@end



int main( int argc, const char *argv[] )
{
  NSAutoreleasePool *pool = [NSAutoreleasePool new];

  GameState *level = [[GameState alloc] init];

  [level addPlayer: [[Player alloc] initWithName: @"zeroeth"]];
  [level addPlayer: [[Player alloc] initWithName: @"takeshi"]];
  [level addPlayer: [[Player alloc] initWithName: @"haiiro" ]];

  [PlayerReport about:level];

  [pool drain];

  return 0;
}
