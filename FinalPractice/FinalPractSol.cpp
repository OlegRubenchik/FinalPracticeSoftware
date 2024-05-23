/** \file FinalPractSol.cpp
* \brief Preparation for final exam SofDev
* \author Oleg Rubenchik
* \version 0.1
* \date 05.2024
*/
#include <iostream>
#include <cassert>
using namespace std;
const int SIZE = 5;


//FUNCTION PROTOTYPES
double sumOfRange(const double arr[],const int startIndex,const int endIndex,const int maxSize);
double productOfRange(const double arr[],const int startIndex,const int endIndex,const int maxSize);
bool allPositive(const double arr[],const int maxSize);



/**
* Function <code>main</code> A menu and main functionality of the program.
* <BR>
* @return Returns 0.
*/
int main() {
	double arr[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
	int reply;
	do {
		
		cout << "\n1)Sum of range\n";
		cout << "2)Product of range\n";
		cout << "3)Is it all positive?\n";
		cout << "0)EXIT\n";
		cin >> reply;
		switch(reply) {
		case 1: {
			int start, end;
			cout << "Enter start index: ";
			cin >> start;
			assert(isdigit(start) == 0);
			assert(start >= 0);
			cout << "Enter end index: ";
			cin >> end;
			assert(isdigit(end) == 0);
			assert(end >= 0);
			cout << sumOfRange(arr, start, end, SIZE);
			break;
		}
		case 2: {
			int start, end;
			cout << "Enter start index: ";
			cin >> start;
			assert(isdigit(start) == 0);
			assert(start >= 0);
			cout << "Enter end index: ";
			cin >> end;
			assert(isdigit(end) == 0);
			assert(end >= 0);
			cout << productOfRange(arr, start, end, SIZE);
			break;
		}
		case 3:
			if (allPositive(arr, SIZE)) cout << "All positive\n";
			else cout << "Not all positive\n";
			break;
		case 0:
			cout << "Have a good day!\n";
			break;

		}

	} while (reply != 0);
	return 0;
}
/**
* Function <code>sumOfRange</code> Get the sum of elements of the certain range from a certain array.
* <BR>
* @param Arr The array which elements this function needs.
* @param startIndex The start index.
* @param endIndex The end index.
* @param maxSize The size of the array.
* @return Returns <code>sum</code> the actual sum.
*/
double sumOfRange(const double arr[],const int startIndex, const int endIndex,const int maxSize) {
	double sum = 0;
	assert(startIndex < endIndex);
	assert(endIndex <= maxSize);
	for (int i = startIndex;i < endIndex;i++) {
		sum += arr[i];
	}
	return sum;
}
/**
* Function <code>productOfRange</code> Get the product of elements of the certain range from a certain array.
* <BR>
* @param Arr The array which elements this function needs.
* @param startIndex The start index.
* @param endIndex The end index.
* @param maxSize The size of the array.
* @return Returns <code>product</code> the actual product.
*/
double productOfRange(const double arr[],const int startIndex,const int endIndex,const int maxSize) {
	double product = 1;
	assert(startIndex < endIndex);
	assert(endIndex <= maxSize);
	for (int i = startIndex;i < endIndex;i++) {
		product *= arr[i];
	}
	return product;
}
/**
* Function <code>allPositive</code> Answers on the "Is it all positive?".
* <BR>
* @param arr The array containing all the elements.
* @param maxSize The size array.
* @return Returns <code>true</code> if they all positive,
* <code>false</code> otherwise.
*/
bool allPositive(const double arr[],const int maxSize) {
	bool flag = true;
	for (int i = 0;i < maxSize;i++) {
		if (arr[i] < 0) flag = false;
	}
	return flag;
}