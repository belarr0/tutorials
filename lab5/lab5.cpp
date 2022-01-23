#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

/*
int main()
{
	int a, b, c;
	a = 1000;

	while (a > 0)
	{
		cout << a << " - " << "7";
		a = a - 7;
			cout << " = " << a << endl;
	}
}


int main()		//3.5
{
	int m, n, NSD;

	cout << "Vvedit` m, n: " << endl;
	cin >> m >> n;
	 
	while (m != n)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	NSD = n;
	cout << "NSD = " << NSD << endl;
}


int main()		//Evklid
{
	int a, b;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	while (a != 0 && b != 0)	//подобрать цикл
	{
		if (a>b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}
	cout << a + b << endl;
}


int main()		//3.6
{
	int k, s = 0;

	do
	{
		cout << "Vvedit` k: ";
		cin >> k;

		if (k>0)
		{
			s = s + k;
		}
	} while (k!=0);
	cout << "Summa dodatnih S= " << s << endl;
}


int main()		//3.7
{
	int n, k = 0;

	cout << "Vvedit` cile dodatne chislo: ";
	cin >> n;

	int ost = n;

	do
	{
		ost = ost / 10;
		k++;
	} while (ost!=0);
	cout << k << " -cifrove" << endl;
}


int main()		//3.8
{
	int i, j, n, m;

	cout << "R`adkiv: ";
	cin >> n;
	cout << "Stovpciv: ";
	cin >> m;

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			cout << " Bohdan";
		}
		cout << endl;
	}
}


int main()		//1
{
	int s, n, a=0, k=1;

	cout << "S: ";
	cin >> s;
	cout << "n pasajura: ";
	cin >> n;
	cout << endl;

	a = n;

	while (s>a)
	{
		cout << "z " << k << " um pasajurom vaga lifta: " << a << endl;
		a = a + n;
		k++;
	}
	k = k - 1;
	cout << endl;
	cout << k << "uy pasajur byde ostannim" << endl;
}


int main()		//2
{
	int n, i, f;
	int q=0;

	cout << "Vvedit` chuslo: ";
	cin >> n;

	f = 1;

	for (i = 1; i <= n; i++) 
	{
		f = f * i;
	}
	while (q<100)
	{
		cout << "-";
		q++;
	}
	cout << endl;
	cout << "F: " << f << endl;
}


int main()		//3
{
	int q, w, e, r, t, y, i;

	cout << "Vvestu dekil`ka chusel" << endl;

	cin >> q;
	cin >> w;
	cin >> e;
	cin >> r;
	cin >> t;
	cin >> y;


}


int main()		//2.1
{
	int i = 0, h;

	cout << "Vusota yalunku: ";
	cin >> h;

	while (i <= h)
	{
		int a = 0;
		while (a < i)
		{
			cout << "*";
			a++;
		}
		cout << endl;
		i++;
	}
}


int main()		//2.2
{
	int A[11][11];
	int i, j;
	

	for ( i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			A[i][j] = i * j;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
*/

int main()		//2.3
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	cout << "Введіть три числа: " << endl;
	cin >> a >> b >> c;

	if (a!=0 && b != 0 && c != 0)
	{
		if (a + b > c && b + c > a && a + c > b)
		{
			cout << "Числа можуть утворити трикутник" << endl;
		}
		else
		{
			cout << "Числа не можуть утворити трикутник" << endl;
		}
	}
	else
	{
		cout << "Числа не можуть бути рівними нулю" << endl;
	}
}
