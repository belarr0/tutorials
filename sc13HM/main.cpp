#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	char mathop;

	cout << "������� ������ �����: ";
	cin >> a;

	cout << "+ -- ��������\n" << "- -- ���������\n" << "* -- ���������\n" << "/ -- �������" << endl;
	cout << "������� ��������: " << endl;
	cin >> mathop;

	cout << "������� ������ �����: ";
	cin >> b;

	switch (mathop)
	{
	case  '+': cout << "�����: " << a + b << endl;
		break;
	case  '-': cout << "�����: " << a - b << endl;
		break;
	case  '*': cout << "�����: " << a * b << endl;
		break;
	case  '/': cout << "�����: " << a / b << endl;
		break;
	default:
		cout << "������ ������� �� ���������" << endl;
		break;
	}
}