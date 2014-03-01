
var Player       = require ('./player');
var GameState    = require ('./game_state');
var PlayerReport = require ('./player_report');



var App = function () {

  this.run = function() {
    var level = new GameState ();

    level.addPlayer (new Player ("zeroeth"));
    level.addPlayer (new Player ("haiiro" ));
    level.addPlayer (new Player ("takeshi"));

    PlayerReport.about (level);
  }
}

new App().run();
