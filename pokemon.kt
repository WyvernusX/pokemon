class Pokemon(val name: String, var health: Int, var canEvolve: Boolean, var stagesLeft: Int, var level: Int, var xp: Int, var threshold: Int, var fainted: Boolean, var type1: String, var type2: String, var move1: String, var pp1: Int, var move2: String, var pp2: Int, var move3: String, var pp3: Int, var move4: String, var pp4: Int, var type: String) {
  fun faint() {
    if (health <= 0) {
      health = 0
      fainted = true
    }
  }

  fun damage(amt: Int, oppType: String) {

  }

  fun heal() {

  }

  fun attack(target: Pokemon) {

  }

  fun evolve() {

  }

  fun levelUp() {

  } 

  fun caught() {

  }
}

var pokemon = mutableListOf<Pokemon>()
var pokemonAmt = 0

var opposite = mapOf<String, String>(
  "charmander" to "squirtle",
  "squirtle" to "bulbasaur",
  "bulbasaur" to "charmander",
)



fun main() {
  //placeholder here
}
