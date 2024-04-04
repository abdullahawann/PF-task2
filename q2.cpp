#include <iostream>
using namespace std;
int main()
{
	int score;

	cout << "Enter score of the student :";
	cin >>score;
	if (score>=90)
		cout << "A+";
	else if (score>=80 && score<=89)
		cout<< "A";
	else if (score>=70 && score<=79)
		cout << "B";
	else if (score>=60 && score<=69)
		cout<< "C";
	else if (score>=50 && score<=59)
		cout<< "D";
	else if (score<50)
		cout<< "F";

    system ("pause");
	return 0;
}

