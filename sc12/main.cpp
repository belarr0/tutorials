#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "������� �����" << endl;
	cin >> a;

	if (a>5)
	{
		cout << "���� ����� ������ 5-��" << endl;
	}
	else if(a==5)
	{
		cout << "���� ����� ����� 5-��" << endl;
	}
	else
	{
		cout << "���� ����� ������ 5-��" << endl;
	}
}