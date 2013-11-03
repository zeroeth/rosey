var GameState = function () {
  this.players = [];
}

GameState.prototype.addPlayer = function(name) {
  this.players.push (name);
}

module.exports = GameState;
