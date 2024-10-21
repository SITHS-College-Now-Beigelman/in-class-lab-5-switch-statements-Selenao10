//Selena Ouyang
//Lab 5 Part 3 I
//10-11-2024

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{

  int numMoves = 0; //set number of moves to 0
  int direction; //integer corresponding to direction
  int positionNS = 0; //starting value of position in North or South
  int positionEW = 0; //starting value of position in East or West

  //while number of moves is not equal to 25, the code runs
  srand(time(0)); //makes sure different random numbers are generated each time
  while (numMoves != 25) //while the number of moves is less than 25 run code
  {
    numMoves ++; //increases the number of moves by one

    direction = rand() % 4 + 1; //the variable direction is randomly chosen from 1-4

    //switch to increase or decrease value of position
    switch (direction) {
    //if the random input direction is 1,
    case 1:      
      positionNS++; //add one to value corresponding to position north or south
      break;
    //if the random input direction is 2,
    case 2:
      positionNS--; //subtracts one from value corresponding to position north or south
      break;
    //if the random input direction is 3,
    case 3:
      positionEW++; //adds one to the value corresponging to poisition East or West
      break;
    //if the random input direction is 3  
    case 4:
      positionEW--; //subtracts one to value corresponding to position East or West
      break;
    }

  //if the value corresponding to position north or south is greater than 0, code runs  
  if (positionNS > 0) 
    cout << "The robot is " << positionNS << " block(s) North and "; //Displays position north
  //else
  else
    cout << "The robot is " << -positionNS << " block(s) South and "; //Displays postion South

  //if the value corresponding to position East or west is greater than 0, code runs
  if (positionEW > 0)
    cout << positionEW << " block(s) East." << endl; //displays position east
  else 
    cout << -positionEW << " block(s) West." << endl;//displays position west
  }

  return 0;
}

/*
The robot is 0 block(s) South and 1 block(s) East.
The robot is 1 block(s) South and 1 block(s) East.
The robot is 0 block(s) South and 1 block(s) East.
The robot is 0 block(s) South and 2 block(s) East.
The robot is 0 block(s) South and 3 block(s) East.
The robot is 0 block(s) South and 2 block(s) East.
The robot is 1 block(s) North and 2 block(s) East.
The robot is 1 block(s) North and 3 block(s) East.
The robot is 2 block(s) North and 3 block(s) East.
The robot is 2 block(s) North and 2 block(s) East.
The robot is 2 block(s) North and 3 block(s) East.
The robot is 1 block(s) North and 3 block(s) East.
The robot is 0 block(s) South and 3 block(s) East.
The robot is 0 block(s) South and 2 block(s) East.
The robot is 1 block(s) North and 2 block(s) East.
The robot is 1 block(s) North and 1 block(s) East.
The robot is 2 block(s) North and 1 block(s) East.
The robot is 1 block(s) North and 1 block(s) East.
The robot is 1 block(s) North and 0 block(s) West.
The robot is 2 block(s) North and 0 block(s) West.
The robot is 2 block(s) North and 1 block(s) West.
The robot is 2 block(s) North and 0 block(s) West.
The robot is 3 block(s) North and 0 block(s) West.
The robot is 2 block(s) North and 0 block(s) West.
The robot is 2 block(s) North and 1 block(s) East.
*/ 
