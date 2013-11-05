class PlayerReport
  def self.about level
    puts "#{level.players.count} Players:"
    puts "----------"

    level.players.each do |player|
      puts player.name
    end
  end
end
