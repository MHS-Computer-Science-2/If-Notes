/* C++ IF NOTES
*
*   Learning Goals
*    - I can use If, Else, and ElseIf statements to solve problems
*    - I can write If statements using && and ||
*/


#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between -100 and 100: ";
	int num;
	cin >> num;

	// IF
	if (num == 0) {
		cout << "Your number is zero!" << endl;
	}

	// IF with optional ELSE-IF and ELSE
	if (num > 0) {
		cout << "Your number is positive!" << endl;
	}
	else if (num < 0) {
		cout << "Your number is negative!" << endl;
	}
	else {
		cout << "Your number is zero" << endl;
	}

	// && means And
	// Use it to check if 2 or more things are ALL TRUE
	if (num >= -100 && num <= 100) {
		cout << "You followed instructions!" << endl;
	}

	// || means Or (typed with Shift + key above Enter on keyboard)
	// Use it to check if ANY are TRUE
	if (num < -100 || num > 100) {
		cout << "You did not follow instructions" << endl;
	}

	system("pause");
}