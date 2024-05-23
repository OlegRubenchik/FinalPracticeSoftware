

#include <iostream>
#include <cassert>
using namespace std;
const int SIZE = 5;


//FUNCTION PROTOTYPES
double sumOfRange(double arr[], int startIndex, int endIndex, int maxSize);
double productOfRange(double arr[], int startIndex, int endIndex, int maxSize);
bool allPositive(double arr[], int maxSize);




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
		case 1: 
			cout << sumOfRange(arr, 0, SIZE, SIZE);
			break;
		case 0:
			cout << "Have a good day!";
			break;

		}

	} while (reply != 0);
}
double sumOfRange(double arr[], int startIndex, int endIndex, int maxSize) {
	double sum = 0;
	assert(startIndex < endIndex);
	assert(endIndex <= maxSize);
	for (int i = startIndex;i < endIndex;i++) {
		sum += arr[i];
	}
	return sum;
}
double productOfRange(double arr[], int startIndex, int endIndex, int maxSize) {
	double product = 1;
	assert(startIndex < endIndex);
	assert(endIndex <= maxSize);
	for (int i = startIndex;i < endIndex;i++) {
		product *= arr[i];
	}
	return product;
}