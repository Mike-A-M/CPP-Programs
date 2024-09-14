#include <iostream>
#include <stdlib.h>

int main () {
// Game of probablilities
//
// Rock, Paper, Sizzors, Lizard, Spock 

// Rules and Conventions
// From TV Series Big Bang 
//
//
//Rules 

//Scissors cuts Paper.
//Paper covers Rock.
//Rock crushes Lizard.
//Lizard poisons Spock.
//Spock smashes Scissors.
//Scissors decapitate Lizard.
//Lizard eats Paper.
//Paper disproves Spock.
//Spock vaporizes Rock.
// Rock crushes Scissors. //

// seed random number generator
srand (time(NULL));

// computer picks 1 to 4
int computer = rand() % 5 + 1;

int user = 0;


std::cout << "\n \n \n \n \n \n";
std::cout << "++++++++++++++++++++++++ \n";
std::cout << "Rock, Paper, Scissors, Lizard, Spock \n\n";
std::cout << "Simple 5 step Proabability\n";
std::cout << "++++++++++++++++++++++++++ \n";
std::cout << "\n\n";
std::cout << "1) Rock?\n\n";
std::cout << "2) Paper?\n\n";
std::cout << "3) Sissors\n\n";
std::cout << "4) Lizard \n\n";
std::cout << "5) Spock \n\n";

std::cout << "\n\n";
std::cout << "Shoot! \n";
std::cin >> user;
std::cout << "\n \n \n";

// Logic for a tie
if (user == computer) {
  std::cout << user;
  std::cout << "\n versus \n";
  std::cout << computer;
  std::cout << "/n";
  std::cout << "Draw!!! \n \n \n";
}
// Game Logic

// Scissors cuts Paper
else if ((user == 3 && computer == 2) || (user == 2) && (computer == 3))  {
    if  (user > computer) {
      std::cout << "Scissors cuts Paper \n";
      std::cout << "You Won! \n";
    }
    else {
      std::cout << "Paper is cut by Scissors \n";
      std::cout << "You Lost! \n";
    }
  }

  // Rock and Paper
  else if ((user == 2 && computer == 1) || (user == 1) && (computer == 2))  {
    if  (user > computer) {
      std::cout << "Paper covers Rock \n";
      std::cout << "You Won! \n";
    }
    else {
      std::cout << "Roxk is covered by Paper \n";
      std::cout << "You Lost! \n";
    }
  }

  // Rock and Lizard
  else if ((user == 4 && computer == 1) || (user == 1) && (computer == 4))  {
    if  (user > computer) {
      std::cout << "Lizard is crushed by the Rock \n";
      std::cout << "You Lost! \n";
    }
    else {
      std::cout << "Rock crushes Lizard \n";
      std::cout << "You Won! \n";
    }
  }

  // Spock and Lizard
  else if ((user == 5 && computer == 4) || (user == 4) && (computer == 5))  {
    if  (user > computer) {
      std::cout << "Spock is poised by the Lizard \n";
      std::cout << "You Lost \n";
    }
    else {
      std::cout << "Lizard kills Spock \n";
      std::cout << "You Won! \n";
    }
  }

  // Spock and Scissors
  else if ((user == 3 && computer == 5) || (user == 5) && (computer == 3))  {
    if  (user > computer) {
      std::cout << "Spock smashes scissors \n";
      std::cout << "You Won \n";
    }
    else {
      std::cout << "Scissors are smashed by Spock \n";
      std::cout << "You Lost! \n";
    }
  }

  // scissors and Lizard
 else if ((user == 3 && computer == 4) || (user == 4) && (computer == 3))  {
    if  (user > computer) {
      std::cout << "Lizard is decapitated by Scissors \n";
      std::cout << "You Lost \n";
    }
    else {
      std::cout << "Scissors decapitate Lizard \n";
      std::cout << "You Won! \n";
    }
  }

 // Lizard Eats Paper
 else if ((user == 4 && computer == 2) || (user == 2) && (computer == 4))  {
    if  (user > computer) {
      std::cout << "Lizard eats Paper\n";
      std::cout << "You Won \n";
    }
    else {
      std::cout << "Paper is eaten by Lizard \n";
      std::cout << "You Lost! \n";
    }
  }

// Paper disproves Spock
 else if ((user == 2 && computer ==5) || (user == 5) && (computer == 2))  {
    if  (user > computer) {
      std::cout << "Spock is disproved by Paper\n";
      std::cout << "You Lost \n";
    }
    else {
      std::cout << "Paper disproves Spock \n";
      std::cout << "You Won! \n";
    }
  }


// Spock vaporizes Rock
 else if ((user == 5 && computer == 1) || (user == 1) && (computer == 5))  {
    if  (user > computer) {
      std::cout << "Spock vaporizes Rock\n";
      std::cout << "You won \n";
    }
    else {
      std::cout << "Rock is vaproized by Spock \n";
      std::cout << "You Lost! \n";
    }
  }

// Scissors and Rock
 else if ((user == 3 && computer == 1) || (user == 1) && (computer == 3))  {
    if  (user > computer) {
      std::cout << "Scissors are cushed by Rock\n";
      std::cout << "You Lost \n";
    }
    else {
      std::cout << "Rock cruhes scissors \n";
      std::cout << "You Won! \n";
    }
  }




else {
  std::cout << "Hmmmmm.... Someone picked poorly";
}




}

