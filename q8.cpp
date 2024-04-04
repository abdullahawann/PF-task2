#include <iostream>
using namespace std;
int main()
{
	int straighttime=40,excesshours,hoursworked,hourlyrate,salary;
	cout << "Enter hours worked :";
    cin >> hoursworked;
	cout << "Enter the hourly rate of the employee :";
    cin >> hourlyrate; 

	if (hoursworked<=40)
    {
	   salary = hoursworked*hourlyrate;
	   cout << "salary = "<< salary << endl ; 
	}
	else 
	{
	    if (hoursworked>40)
	    excesshours = hoursworked - straighttime;
	    salary = straighttime * hourlyrate + (excesshours * hourlyrate)*1.5;
        cout << "salary = " << salary << endl ;
	}
    system("pause");
	return 0;
}