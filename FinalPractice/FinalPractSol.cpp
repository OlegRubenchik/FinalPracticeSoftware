

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
bool allPositive(double arr[], int maxSize) {
	bool flag = true;
	for (int i = 0;i < maxSize;i++) {
		if (arr[i] < 0) flag = false;
	}
	return flag;
}