//Selena Ouyang
//Lab 5
//10-11-2024

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int walkingSlowlyMET = 2; //MET value for walking slowly
	int walkingQuicklyMET = 3; //MET value for walking quickly
	float joggingMET = 8.8; //MET value for jogging
	int duration; //minutes user spent on activity
	int weight; //User weight
	int burnCalories; //Amount of calories that the user wants to burn
  char activity; //Letter corresponding to type of activity


	cout << "Enter weight in kilograms. \n" ; //Direction for user to input weight in kg
	cin >> weight;
	cout << "Type of activity. Enter 'A' for walking slowly, 'B' for walking quickly and 'C' for jogging." << endl; //Direction for user to enter letter associated with activity 
	cin >> activity;
	
	//switch to output calories burned based on activity
	switch (activity) {
	//If the input is 'A', then user inputs duration and the calories burned will be output
	case 'A':
	    cout << "Enter duration of activity in minutes:" << endl;
	    cin >> duration;
	    cout << "Total calories burned: " << fixed << setprecision (0) << (duration*(walkingSlowlyMET*3.5*weight)/200) << endl; //Calculation of total calories burned
    	    break;
    
	//If the input is 'A', then user inputs duration and the calories burned will be output
   	case 'B':
            cout << "Walking Quickly" << endl; //Tells user to input mins they spent walking quickly
	    cin >> duration;
	    cout << "Total calories burned: " << (duration*(walkingQuicklyMET*3.5*weight)/200) << endl; //Calculation of total calories burned
	    break;
	    
	//If the input is 'A', then user inputs duration and the calories burned will be output    
	case 'C':
	    cout << "Jogging" << endl; //Tells user to input mins they spent jogging
	    cin >> duration;
	    cout << "Total calories burned: " << (duration*(walkingSlowlyMET*3.5*weight)/200) << endl; //Calculation of total calories burned
	    break;
	    
	//If input does not match the cases, then this would be outputted 
	default:
	    cout << "Invalid activity." << endl;
	    break;
	}
	
	
	//Extra Credit: User enter calorie goal and chooses desired acitivitf. With this info, the program outputs the duration required.
      cout << "Enter amount of calories you want to burn. \n" ; // Asking user for calories they want to burn
	    cin >> burnCalories;
	    cout << "Type of activity. Enter 'A' for walking slowly, 'B' for walking quickly and 'C' for jogging." << endl; //Tell user to enter the time they spent doing the activites
	    cin >> activity;
	
	//switch to output duration needed to reach calorie goal
	switch (activity) {	    
	//If input is 'A', then duration required in minutes is output 
	case 'A':
	    cout << ".____________________________________________________." << endl;
	    cout << "Duration needed: " << burnCalories/((walkingSlowlyMET*3.5*weight)/200) << " minutes" << endl; //Calculation of total calories burned
	    cout << ".____________________________________________________." << endl;
	    break;
    
    //If input is 'B', then duration required in minutes is output 
    	case 'B':
            cout << ".____________________________________________________." << endl;
            cout << "Duration needed: " << burnCalories/((walkingQuicklyMET*3.5*weight)/200) << " minutes" << endl; //Calculation of total calories burned
            cout << ".____________________________________________________." << endl;
	    break;
	    
	//If input is 'C', then duration required in minutes is output    
	case 'C':
	    cout << ".____________________________________________________." << endl;
	    cout << "Duration needed: " << burnCalories/((walkingQuicklyMET*3.5*weight)/200) << " minutes" << endl; //Calculation of total calories burned
	    cout << ".____________________________________________________." << endl;
	    break;
	    
	//If input does not match the cases, then this would be outputted    
	default:
	    cout << "Invalid activity.";
	    break;
	}

	return 0;
}

/*
Enter weight in kilograms. 
40
Type of activity. Enter 'A' for walking slowly, 'B' for walking quickly and 'C' for jogging.
A
Enter duration of activity in minutes:
30
Total calories burned: 42
Enter amount of calories you want to burn. 
200
Type of activity. Enter 'A' for walking slowly, 'B' for walking quickly and 'C' for jogging.
B
.____________________________________________________.
Duration needed: 95 minutes
.____________________________________________________.
*/
