#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	//bool isRain = true;
	bool isRain = false;

	/*
	if (isRain)
	{
		cout << "Идёт дождь, возьми зонт" << endl;
	}
	*/
	if (isRain)
	{
		cout << "Идёт дождь, возьми зонт" << endl;
	}
	else
	{
		cout << "Дождя нету, можешь не брать зонт" << endl;
	}
}