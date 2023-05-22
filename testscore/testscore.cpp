// testscore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int SIZE = 4; //ARRAY SIZE, an int constant that is used as an array size declarator
	double testScores[SIZE],//a double array to hold the test scores
		total,//a double variable that will hold the test score totals.
		lowestScore,//will hold the lowest test score
		average;// hold the average of the test scores

	cout << fixed << showpoint << setprecision(1); //set up numeric output formatting
	
	getTestScores(testScores, SIZE);// get the test score from the user and stores them in the array, testScore & size as an arguments

	total = getTotal(testScores, SIZE); //get the total of the test scores

	lowestScore = getLowest(testScores, SIZE);//get the lowest test score

	total -= lowestScore; //subtract the lowest score from the total

	average = total / (SIZE - 1);//calculate the average, divide by 3 because lowest score was dropped

	cout << "The average with the lowest score dropped is" << average << ".\n";
	return 0;
}
void getTestScores(double scores[], int size)
{
	int index; //loop counter

	for (index = 0; index <= size - 1; index++)//it will loop the below statement until the before last value since index starts from 0
	{
		cout << "Enter test score number"
			<< (index + 1) << ": ";
		cin >> scores[index];
	}
}
double getTotal(const double numbers[], int size)
{
	double total = 0; //accumulator

	for (int count = 0; count < size; count++) //do the below while its less that the size entered
		total += numbers[count]; //sum up on total

	return total; //return the total
}
double getLowest(const double numbers[], int size)
{
	double lowest; //to hold the lowest value

	lowest = numbers[0];//get the first array's first element

	for (int count = 1; count < size; count++)
	{
		if (numbers[count] < lowest)
			lowest = numbers[count];//step through the rest of the array. When a value less than lowest is found, assing it to the lowest.
	}
	return lowest; //return the lowest value
}

