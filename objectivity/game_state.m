#import "game_state.h"

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
