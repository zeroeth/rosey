// pure objective c version, and then gnustep version
#import <Foundation/Foundation.h>
#import "player.h"
#import "game_state.h"
#import "player_report.h"



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
