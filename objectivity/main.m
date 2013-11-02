// pure objective c version, and then gnustep version
#include <Foundation/Foundation.h>

@interface Player : NSObject{
    int health;
    //char *name;
}

@end


@implementation Player

@end


@interface GameState {
    // array of players
}
@end

int main( int argc, const char *argv[] )
{
  // create Game object
  Player *player1 = [[Player alloc] init];

  // create/add Players to Game

  // reporter prints player info

  NSLog (@"Game Started\n");
  return 0;
}
