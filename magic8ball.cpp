//This program replicates the Magic 8-Ball toy from the 50s.

#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

  char question;
  std::cout << "Please ask a yes or no question: "; std::cin >> question;

  std::string answer[20] = {"It is certain.", "It is decidedly so.", "Without a doubt.", "Yes - definitely.", "You may rely on it.", "As I see it, yes.", "Most likely.", "Outlook good.", "Yes.", "Signs point to yes.", "Reply hazy, try again.", "Ask again later.", "Better not tell you now.", "Cannot predict now.", "Concentrate and ask again.", "Don't count on it.", "My reply is no.", "My sources say no.", "Outlook not so good.", "Very doubtful."};

  //Initialize random seed.
  srand(time(NULL));
  
  
  int selectString = std::rand() % 19;
  std::cout << "MAGIC 8-BALL: " << answer[selectString];
  

}