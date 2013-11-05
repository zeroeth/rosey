require './player'
require './game_state'
require './player_report'



class App
  def run
    level = GameState.new

    level.add_player Player.new "zeroeth"
    level.add_player Player.new "takeshi"
    level.add_player Player.new "haiiro"

    PlayerReport.about level
  end
end

App.new.run
