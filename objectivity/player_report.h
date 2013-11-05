#import <Foundation/Foundation.h>
#import "game_state.h"
#import "player.h"

@interface PlayerReport : NSObject
{
}

+ (void) about: (GameState *)level;
@end
