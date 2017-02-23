#include <iostream>
#include <vector>
#include <math.h>

using std::cin;
using std::cout;
using std::vector;

int main()
{
	int val = 0;
	cout << "Ingrese cantidad de valores a ordenar\n";
	cin >> val;                                                   
	vector<int> vector(val);
	for (int i = 0; i < val; i++)                                          
	{
		cout << "Ingrese un valor\n";
		cin >> vector.at(i);
	}
	int p = 0, 
		aux = 0;
	for (int i = 0; i < val; i++)   
	{
		for (int j = 0; j < val - 1; j++)
		{
			if (vector.at(j) > vector.at(i))
			{
				aux = vector.at(j);
				vector.at(j) = vector.at(i);
				vector.at(i) = aux;
				p++;
			}
		}
		p++;
	}
	cout << "Conjunto ordenado:\n";
	for (int i = 0; i < val; i++)
	{
		cout << vector.at(i) << "  ";
	}
	cout << "\nPasos realizados para ordenar: " << p;
	return 0;
}
