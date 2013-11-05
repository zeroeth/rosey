#import "player_report.h"

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
