#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "¬ведите число" << endl;
	cin >> a;

	if (a>5)
	{
		cout << "¬аше число больше 5-ти" << endl;
	}
	else if(a==5)
	{
		cout << "¬аше число равно 5-ти" << endl;
	}
	else
	{
		cout << "¬аше число меньше 5-ти" << endl;
	}
}