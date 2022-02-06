#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	char mathop;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "+ -- сложение\n" << "- -- вычитание\n" << "* -- умножение\n" << "/ -- деление" << endl;
	cout << "Введите операцию: " << endl;
	cin >> mathop;

	cout << "Введите второе число: ";
	cin >> b;

	switch (mathop)
	{
	case  '+': cout << "Ответ: " << a + b << endl;
		break;
	case  '-': cout << "Ответ: " << a - b << endl;
		break;
	case  '*': cout << "Ответ: " << a * b << endl;
		break;
	case  '/': cout << "Ответ: " << a / b << endl;
		break;
	default:
		cout << "Данные введены не правильно" << endl;
		break;
	}
}