#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << 1 << endl;
		break;
	case 2:
		cout << 2 << endl;
		break;
	default:
		cout << "Ты по моему перепутал" << endl;
		break;
	}
}