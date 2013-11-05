var PlayerReport = function() {}

PlayerReport.about = function (gameState) {
  console.log(gameState.players.length + " Players");
  console.log("---------");

  gameState.players.forEach (function (player) {
    console.log(player.name);
  });
}

module.exports = PlayerReport;
