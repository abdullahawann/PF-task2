#include <iostream>
using namespace std;
int main()
{
	int N1,N2,N3;
	cout << "Enter N1 :";
	cin >> N1;
	cout << "Enter N2 :";
	cin >> N2;
	cout << "Enter N3 :";
	cin >> N3;
	if (N1<N2) 
	{
	   if (N1<N3)
			cout << N1 <<" Is the smallest number ";
	   else
		    cout << N3 << " Is the smallest number ";	
	}
	else
	{
		if (N2<N3)
		   cout << N2 << " Is the smallest number ";
	    else 
		   cout << N3 << " Is the smallest number ";
	}
    system("pause");
	return 0;
}