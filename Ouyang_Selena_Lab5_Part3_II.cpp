//Selena Ouyang
//Lab 5 part 3 II
//10-12-2024

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
//variables
  int direction; 
  int trials;
  int averageMoves;	
	
  int totalMoves = 0; //startinf value of total moves
	
  srand(time(0)); //random number generator
  
  for (trials = 0; trials < 10; trials++) { //runs 10 trials
	
    int positionNorth = 0; //starting value of position north
    int positionEast = 0; //starting value of position east
    int numMoves = 0; //starting value of number of moves

    while (positionEast != 2 || positionNorth != 3) //while position is not 2 blocks east and 3 blocks north
    {
      numMoves++; //increments by one
	    
      direction = rand() % 4 + 1; //random number from 1-4

      if (direction == 1) //if random number is 1
        positionNorth++; //increment position north by 1

      if (direction == 2) //if random number is 2
        positionNorth--; //decrement position north by 1 

      if (direction == 3) //if random number is 3
        positionEast++; //increment position East by 1

      if (direction == 4)//if random number is 4
        positionEast--; //decrement position East by 1
    }

    cout << "Number of Moves: " << numMoves << endl; //display number of moves for each trial
     int totalMoves = 0; 
	totalMoves += numMoves; //adds the num of moves for this trial to the total moves
  }

  averageMoves = totalMoves / 10; //calculation for average moves
  cout << "Average number of moves: " << averageMoves;

  return 0;
	
}

/*
Number of Moves: 262633
Number of Moves: 35675
Number of Moves: 265
Number of Moves: 34975
Number of Moves: 1479
Number of Moves: 2139
Number of Moves: 1019
Number of Moves: 2277
Number of Moves: 1865
Number of Moves: 773
Average Number of Moves: 34310
*/
