

var Player = function(name) {
  this.name = name;
}



var GameState = function () {
  this.players = [];
}

GameState.prototype.addPlayer = function(name) {
  this.players.push (name);
}



var PlayerReport = function() {}

PlayerReport.about = function (gameState) {
  console.log("Players");

  for (var i = 0; i < gameState.players.length; i++) {
    console.log(gameState.players[i].name);
  }
}



// runner class to put main in

var level = new GameState ();

level.addPlayer (new Player ("zeroeth"));
level.addPlayer (new Player ("haiiro"));
level.addPlayer (new Player ("takeshi"));

PlayerReport.about (level);

// trigger runner here
