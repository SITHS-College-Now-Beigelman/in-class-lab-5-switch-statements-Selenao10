//Selena Ouyang
//Lab 5 Part 2
//10-11-2024

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

	float NumGigabytes; // # of gigabytes that the user has
	float gblowquality = 43.2/1000; // converts MB into GB used per hour for low
	float gbnormalquality = 72.0/1000; // converts MB into GB used per hour for normal
	float gbhighquality = 115.2/1000; // converts MB into GB used per hour for high
	int quality; //Creates integers corresponding to each quality

	cout << "Enter number of gigabytes in your monthly hotpsot plan." << endl; //Ask the user to input the number of gigabytes in their monthly hotspot plan
	cin >> NumGigabytes;
	cout << "Enter the desired quality. '1' for low-quality, '2' for normal-quality, '3' for high-quality."  << endl; //Directions for user to enter corresponding quality number
    	cin >> quality;	
	cout << fixed << setprecision(0); //set precision for floating points to 0
	
	//switches case to output hours available for streaming
	switch (quality) {
	//if user inputs 1, then number of hours available outputs
	case 1:
		cout << "You can strean low-quality music for " << NumGigabytes/gblowquality << " hours each month." << endl; //Prints hours available for low quality streaming each month
        break;
    	//if user inputs 1, then number of hours available outputs    
	case 2:
		cout << "You can stream normal-quality music for " << NumGigabytes/gbnormalquality << " hours each month." << endl;  //Prints hours available for normal quality streaming each month
        break;
    	//if user inputs 1, then number of hours available outputs    
    	case 3:
		cout << "You can stream high-quality music for " << NumGigabytes/gbhighquality << " hours each month." << endl; //Prints hours available for high quality streaming each month
        break;
    	//if user input does not match any of the cases then this outputs
   	 default:
        cout << "Invalid quality.";
        break;
	}

	return 0;
}

/*

Enter number of gigabytes in your monthly hotpsot plan.
5
Enter the desired quality. '1' for low-quality, '2' for normal-quality, '3' for high-quality.
2
You can stream normal-quality music for 69 hours each month.

*/
