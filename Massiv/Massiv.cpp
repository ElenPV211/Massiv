#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(0));

	const int n = 5, m = 4;
	int X[n][m];
	int tmp = 0, k = 0;
	cout << "Вывод элементов массива X\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			X[i][j] = rand() % 10;

			cout << X[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)


			for (int i = n - 1; i >= 0; i--)

			{
				if (X[i - 1][m - 1] > X[i][m - 1])
				{
					//здесь сортируются элементы последнего столбца по убыванию
					tmp = X[i - 1][m - 1];

					X[i - 1][m - 1] = X[i][m - 1];

					X[i][m - 1] = tmp;

					for (j = m - 2; j >= 0; j--)
					{
						//перестановка строк вслед за перестановкой элементов последнего столбца
						k = X[i - 1][j];
						X[i - 1][j] = X[i][j];
						X[i][j] = k;
					}
				}

			}
		for (int j = 0; j < m; j++)

		{
			cout << X[i][j] << "  ";
		}

		cout << endl;
	}
}
