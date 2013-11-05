
class Player
  attr_accessor :name

  def initialize name
    self.name = name
  end
end



class GameState
  attr_accessor :players

  def initialize
    self.players = Array.new
  end

  def add_player player
    self.players.push player
  end
end



class PlayerReport
  def self.about level
    puts "#{level.players.count} Players:"
    puts "----------"

    level.players.each do |player|
      puts player.name
    end
  end
end



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
