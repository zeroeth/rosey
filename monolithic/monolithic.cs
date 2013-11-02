using System;
using System.Collections.Generic;

public class Player
{
  public string Name { get; set; }

  public Player (string name)
  {
    Name = name;
  }
}


public class GameState
{
  public List<Player> players { get; set;}

  public GameState()
  {
    players = new List<Player>();
  }

  public void AddPlayer (Player player)
  {
    players.Add (player);
  }
}


public class PlayerReport
{
  public static void about (GameState level)
  {
    Console.WriteLine ("Players:"    );
    Console.WriteLine ("------------");

    foreach (Player player in level.players)
    {
      Console.WriteLine (player.Name);
    }
  }
}


public class Monolithic
{
  static public void Main ()
  {
    GameState level1 = new GameState ();

    level1.AddPlayer (new Player ("zeroeth"));
    level1.AddPlayer (new Player ("haiiro" ));
    level1.AddPlayer (new Player ("takeshi"));

    PlayerReport.about (level1);
  }
}
