#import <Foundation/Foundation.h>
#import "player.h"

@interface GameState : NSObject
{
  NSMutableArray *players;
}

@property (retain) NSMutableArray *players;

- (void) addPlayer: (Player *)aPlayer;
@end
