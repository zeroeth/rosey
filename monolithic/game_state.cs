using System.Collections.Generic;

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

