#include<iostream>
#include<string>
#include "MyBigNumber.h"
using namespace std;

int main() {
	MyBigNumber myBigNumber;
	string stn1 = "387";
	string stn2 = "134";
	string result = myBigNumber.sum(stn1, stn2);

	// Print the result
	cout << "Sum of " << stn1 << " and " << stn2 << " is: " << result << endl;

	return 0;
}
