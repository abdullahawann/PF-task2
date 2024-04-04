#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char opt;
	cout << "Enter num1 :";
	cin >> num1;
	cout << "Enter num2 :";
	cin >> num2;
	cout << "Enter operator :";
	cin >> opt;
	if (opt=='+')
		cout << "sum =" << num1 + num2;
	else if (opt=='-')
		cout << "diff =" << num1 - num2;
	else if (opt=='*')
		cout << "product =" << num1 * num2;
	else if (opt=='/')
		cout << "quotient =" << num1 / num2;
	else
		cout << "Wrong operator";
	
    system("pause");
	return 0;
}