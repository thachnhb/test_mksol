#include "MyBigNumber.h"

string MyBigNumber::reverseStn(string& stn) {
	string temp = "";
	for (int i = stn.length() - 1; i >= 0; i--) {
		temp += stn[i];
	}
	return temp;
}
string MyBigNumber::sum(string stn1, string stn2) {
	string res = "";
	int carry = 0;
	int len1 = stn1.length();
	int len2 = stn2.length();
	int maxLen = (len1 > len2) ? len1 : len2;
	stn1 = reverseStn(stn1);
	stn2 = reverseStn(stn2);

	// Fill zero after reverse
	for (int i = maxLen; i > stn1.length(); i--) stn1 += '0';
	for (int i = maxLen; i > stn1.length(); i--) stn2 += '0';

	// Calculate
	for (int i = 0; i < maxLen; i++) {
		int digit1 = (i < len1) ? (stn1[i] - '0') : 0;
		int digit2 = (i < len2) ? (stn2[i] - '0') : 0;

		int sum = digit1 + digit2 + carry;
		res += (sum % 10) + '0'; // int to character
		carry = sum / 10;

		cout << "Step " << i + 1 << ": " << stn1[i] << " + " << stn2[i] << " = " << sum << endl;
	}
	if (carry > 0) {
		res += carry + '0';
	}

	return reverseStn(res);
}