class GameState
  attr_accessor :players

  def initialize
    self.players = Array.new
  end

  def add_player player
    self.players.push player
  end
end
