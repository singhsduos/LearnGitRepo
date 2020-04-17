#include <iostream>
#include <iomanip>
using namespace std;

void calcSumAndDiff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = n1 - n2;
} 

int main()
{
	//declare variables
	int num1 = 0;
	int num2 = 0;
	int numSum = 0;
	int numDiff = 0;

	//get input items

	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;

	//Adding and subtracting the numbers
	calcSumAndDiff(num1, num2, numSum, numDiff);
	
	//display the sum and difference
	cout << "Sum: " << numSum << endl;
	cout << "Difference: " << numDiff << endl;

	system("pause");
	return 0;
} 





