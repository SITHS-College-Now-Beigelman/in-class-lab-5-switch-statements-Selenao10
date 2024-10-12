//Selena Ouyang
//Lab 5 Part 3 II
//10-12-2024

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
	srand(time(0)); //makes sure different random numbers are generated each time

	while (positionEW != 2 || positionNS != 3) //while the position is not 2 blocks east and 3 blocks north, code runs
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


	}

	//displays number of moves it took to reach 2 blocks east and 3 blocks north
	cout << "Number of Moves: " << numMoves;
	return 0;
}

/*
Extra Credit: Run code ten times to find the average number of moves robot takes to reach destination

1. Number of Moves: 88307
2. Number of Moves: 2637129
3. Number of Moves: 640563
4. Number of Moves: 73975
5. Number of Moves: 73733
6. Number of Moves: 4147
7. Number of Moves: 241
8. Number of Moves: 75905
9. Number of Moves: 55
10. Number of Moves: 153
Average = 359420.8
Average Number of Moves:  = 359421
*/
