#include <iostream>

int main (){

  int gryffindor, hufflepuff, ravenclaw, slytherin = 0;

  int answer1, answer2, answer3, answer4;
  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n" << std::endl;
  std::cout << "  1) The Good" << std::endl;
  std::cout << "  2) The Great" << std::endl;
  std::cout << "  3) The Wise" << std::endl;
  std::cout << "  4) The Bold" << std::endl;
  std::cout << "  Your answer: "; std::cin >> answer1;
  std::cout << std::endl;

  switch (answer1) {

    case 1 :
      hufflepuff += 1;
      break;

    case 2 :
      slytherin += 1;
      break;

    case 3 :
      ravenclaw += 1;
      break;

    case 4 :
      gryffindor += 1;
      break;

    default :
      std::cout << "Invalid input!\n";

  }

  std::cout << "\nQ2) Dawn or Dusk?\n" << std::endl;
  std::cout << "  1) Dawn" << std::endl;
  std::cout << "  2) Dusk" << std::endl;
  std::cout << "  Your answer: "; std::cin >> answer2;


  switch (answer2) {

    case 1 :
      gryffindor += 1;
      ravenclaw += 1;
      break;

    case 2 :
      hufflepuff += 1;
      slytherin += 1;
      break;

    default :
      std::cout << "Invalid input.\n";
  }

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n" << std::endl;
  std::cout << "  1) The violin" << std::endl;
  std::cout << "  2) The trumpet" << std::endl;
  std::cout << "  3) The piano" << std::endl;
  std::cout << "  4) The drum" << std::endl;
  std::cout << "  Your answer: "; std::cin >> answer3;
  std::cout << std::endl;

  switch (answer3) {

    case 1 :
      slytherin += 1;
      break;

    case 2 :
      hufflepuff += 1;
      break;

    case 3 :
      ravenclaw += 1;
      break;

    case 4 :
      gryffindor += 1;
      break;

    default :
      std::cout << "Invalid input!\n";

  }

  std::cout << "\nQ4) Which road tempts you most?\n" << std::endl;
  std::cout << "  1) The wide, sunny grassy lane" << std::endl;
  std::cout << "  2) The narrow, dark, lantern-lit alleyet" << std::endl;
  std::cout << "  3) The twisting, leaf-strewn path through woods" << std::endl;
  std::cout << "  4) The cobbled street lined (ancient buildings)" << std::endl;
  std::cout << "  Your answer: "; std::cin >> answer4;
  std::cout << std::endl;

  switch (answer4) {

    case 1 :
      hufflepuff += 1;
      break;

    case 2 :
      slytherin += 1;
      break;

    case 3 :
      gryffindor += 1;
      break;

    case 4 :
      ravenclaw += 1;
      break;

    default :
      std::cout << "Invalid input!\n";

  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << "\nYour house is " << house <<". Please start the move-in process.\n";

}