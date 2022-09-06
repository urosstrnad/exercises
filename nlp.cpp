#include <iostream>
#include <string> 
#include "nlp_functions.hpp"

int main() {

  std::string codeword = "nezemljan";
  std::string answer; // = "__________";
  answer.resize(codeword.size(), '_');
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  greet();
  
  while (answer != codeword && misses < 8) {

    

    display_misses(misses);
    display_status(incorrect, answer, codeword, misses);

    std::cout << "Ugani in vpiši črko: "; std::cin >> letter;

    for (int i = 0; i < codeword.size(); i++) {

      if (letter == codeword[i]) {

        answer[i] = codeword[i];
        guess = true;

      }

    }

    if (guess == true) std::cout << "Pravilno!\n"; else {

      std::cout << "Nepravilno! Žarek iz ladije povleče človeka še bližje proti plovilu.\n";
      incorrect.push_back(letter);
      misses++;
      guess = false;

    }

    guess = false;

  }

  end_game(answer, codeword);
  

}
