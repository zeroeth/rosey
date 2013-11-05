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
