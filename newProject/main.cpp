#include <iostream>

using namespace std;

int main()
{
	int Array[1000], valor = 0, liCount = 0, prueba;

	cout << "Digitar el valor a buscar sus factores primos: " << endl;
	cin >> valor;

	prueba = valor;

	for (int x = 2; x < prueba; x++)
	{
		if (valor % x == 0)
		{
			Array[liCount] = x;
			liCount++;
			valor = valor / x;
			x = 1;
		}
	}

	cout << "Los factores primos del numero ingresado son: " << endl;

	for (int x = 0; x < liCount; x++)
	{
		if(Array[x-1] != Array[x])
			cout << Array[x] << endl;
	}

	system("pause");
	return 0;
}