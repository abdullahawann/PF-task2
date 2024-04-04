#include <iostream>
using namespace std;
int main()
{
	int sales,salary;
	cout << "Enter sales in rupees :";
	cin >> sales;
	if (sales>=0)
		cout << "Salary =" <<  sales*9/100 + 2000 << endl;
	else
		cout << "Sorry, Salary cannot be computed " << endl;
	

	system("pause");
	return 0;
}
