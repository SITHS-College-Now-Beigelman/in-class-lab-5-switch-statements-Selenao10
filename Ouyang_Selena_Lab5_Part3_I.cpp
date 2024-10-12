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
    
  int numMoves; //set number of moves to 0
  int direction; //integer corresponding to direction
  int positionNS = 0; //starting value of position in North or South
  int positionEW = 0; //starting value of position in East or West
  
  //while number of moves is not equal to 25, the code runs
  srand(time(0)); //
  while (numMoves != 25) 
  {
    
      
    numMoves ++; //increases the number of moves by one
    
  
    direction = rand() % 4 + 1; //the variable direction is randomly chosen from 1-4
    
    //switch to increase or decrease value of position
    switch (direction) {
    
    
    case 1:
        
      positionNS++;
      break;
      
    case 2:
      positionNS--;
      break;
      
    case 3:
      positionEW++;
      break;
      
    case 4:
      positionEW--;
      break;
    }
    
  if (positionNS > 0) 
    cout << "The robot is " << positionNS << " block(s) North and ";
  else
    cout << "The robot is " << -positionNS << " block(s) South and ";

  if (positionEW > 0)
    cout << positionEW << " block(s) East." << endl;
  else 
    cout << -positionEW << " block(s) West." << endl;
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
