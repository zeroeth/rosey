using System;

public class PlayerReport
{
  public static void about (GameState level)
  {
    Console.WriteLine (level.players.Count+" Players:");
    Console.WriteLine ("----------");

    foreach (Player player in level.players)
    {
      Console.WriteLine (player.Name);
    }
  }
}
