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
	if (N1>N2 && N1>N3 && N2>N3)
		cout << N3 << " " << N2 << " " << N1 << endl;
	else
		if (N1>N2 && N1>N3 && N3>N2)
			cout << N2 << " " << N3 << " " << N1 << endl;
    else
		if (N2>N1 && N2>N3 && N1>N3)
			cout << N3 << " " << N1 << " " << N2 << endl;
	else
		if (N2>N1 && N2>N3 && N3>N1)
			cout << N1 << " " << N3 << " " << N2 << endl;
	else
		if (N3>N1 && N3>N2 && N1>N2)
			cout << N2 << " " << N1 << " " << N3 << endl;
	else
		if (N3>N1 && N3>N2 && N2>N1)
			cout << N1 << " " << N2 << " " << N3 << endl;

	system("pause");
	return 0;
}