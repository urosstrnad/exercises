#include <iostream>
#include <cstdlib>
#include <ctime>

void printTime() {

  time_t curr_time;
  curr_time = time(NULL);

  char *tm = ctime(&curr_time);
  std::cout << "Today is : " << tm << std::endl;

}


int main (){

  //setting up srand function, to being controlled with time.
  srand(time(NULL));
  //1 = rock, 2 = paper, 3 = scissors, 4 = lizard, 5 = spock;
  int choice[5] = {1, 2, 3, 4, 5};
  std::string words[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  char repeat;

 

  do {
      int myChoice;
      int computerChoice = choice[rand() % 4];

      printTime();

      std::cout << "This is a Rock, Paper, Scissors, Lizard, Spock game!\n" << std::endl;
      std::cout << "Please select your choice:\n";
      std::cout << "1) Rock" << std::endl;
      std::cout << "2) Paper" << std::endl;
      std::cout << "3) Scissors" << std::endl;
      std::cout << "4) Lizard" << std::endl;
      std::cout << "5) Spock" << std::endl;
      std::cout << "Type in the number: "; std::cin >> myChoice;

      int yourChoice = choice[myChoice - 1];

      if (yourChoice == computerChoice) {

          std::cout << "You chose: " << words[yourChoice - 1] << std::endl;
          std::cout << "Computer chose: " << words[computerChoice - 1] << std::endl;
          std::cout << "\nIt's a draw!";

      } else {

          switch (yourChoice) {

            case 1:
            std::cout << "You chose rock." << std::endl;
            switch (computerChoice) {

              case 2 :              
              std::cout << "Computer chose paper. " << std::endl;
              std::cout << "\nComputer wins! Paper covers Rock.";
              break;

              case 3 :              
              std::cout << "Computer chose scissors. " << std::endl;
              std::cout << "\nYou win! Rock crushes Scissors.";
              break;

              case 4 :              
              std::cout << "Computer chose lizard. " << std::endl;
              std::cout << "\nYou win! Rock crushes Lizard.";
              break;

              case 5 :              
              std::cout << "Computer chose Spock." << std::endl;
              std::cout << "\nComputer wins! Spock vaporizes Rock.";
              break;

              default :
              std::cout << "Error in Rock case.";
            }
            break;

            case 2:
            std::cout << "You chose paper.";
            switch (computerChoice) {

              case 1 :              
              std::cout << "Computer chose rock. " << std::endl;
              std::cout << "\nYou win! Paper covers Rock.";
              break;

              case 3 :              
              std::cout << "Computer chose scissors. " << std::endl;
              std::cout << "\nComputer wins! Scissors cuts Paper.";
              break;

              case 4 :              
              std::cout << "Computer chose lizard. " << std::endl;
              std::cout << "\nComputer wins! Lizard eats Paper.";
              break;

              case 5 :              
              std::cout << "Computer chose Spock." << std::endl;
              std::cout << "\nYou win! Paper disproves Spock.";
              break;

              default :
              std::cout << "Error in Paper case.";
            }
            break;

            case 3:
            std::cout << "You chose scissors.";
            switch (computerChoice) {

              case 1 :              
              std::cout << "Computer chose rock. " << std::endl;
              std::cout << "\nComputer wins! Rock crushes Scissors.";
              break;

              case 2 :              
              std::cout << "Computer chose paper. " << std::endl;
              std::cout << "\nYou win! Scissors cuts Paper.";
              break;

              case 4 :              
              std::cout << "Computer chose lizard. " << std::endl;
              std::cout << "\nYou win! Scissors decapitates Lizard.";
              break;

              case 5 :              
              std::cout << "Computer chose Spock." << std::endl;
              std::cout << "\nComputer wins! Lizard poisons Spock.";
              break;

              default :
              std::cout << "Error in Paper case.";
            }
            break;

            case 4:
            std::cout << "You chose lizard.";
            switch (computerChoice) {

              case 1 :              
              std::cout << "Computer chose rock. " << std::endl;
              std::cout << "\nComputer wins! Rock crushes Lizard.";
              break;

              case 2 :              
              std::cout << "Computer chose paper. " <<  std::endl;
              std::cout << "\nYou win! Lizard eats Paper.";
              break;

              case 3 :              
              std::cout << "Computer chose scissors. " << std::endl;
              std::cout << "\nComputer wins! Scissors decapitates Lizard.";
              break;

              case 5 :              
              std::cout << "Computer chose Spock." << std::endl;
              std::cout << "\nYou win! Lizard poisons Spock.";
              break;

              default :
              std::cout << "Error in Lizard case.";
            }
            break;

            case 5:
            std::cout << "You chose spock.";
            switch (computerChoice) {

              case 1 :              
              std::cout << "Computer chose rock. " << std::endl;
              std::cout << "\nYou win! Spock vaporizes Rock.";
              break;

              case 2 :              
              std::cout << "Computer chose paper. " <<  std::endl;
              std::cout << "\nComputer wins! Paper disproves Spock.";
              break;

              case 3 :              
              std::cout << "Computer chose scissors. " << std::endl;
              std::cout << "\nYou win! Spock crushes Scissors.";
              break;

              case 4 :              
              std::cout << "Computer chose lizard." << std::endl;
              std::cout << "\nComputer wins! Lizard poisons Spock.";
              break;

              default :
              std::cout << "Error in Spock case.";
            }
            break;
              
            default :
              std::cout << "Error in first switch...";
        }
            
      }
    
    std::cout << "\nPlay again? y/n "; std::cin >> repeat;
    
  } while (repeat == 'y' || repeat == 'Y');


}
