#include <iostream>
using namespace std;

int main()
{
	int a, b, c=2;

	cout << "Vvedite chislo: " << endl;
	cin >> a;

	b = a % c;

	if (b==1)
	{
		cout << "Ne chetnoe" << endl;
	}
	else
	{
		cout << "Chetnoe" << endl;
	}
	cout << b << endl;
}