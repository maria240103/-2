#include <iostream>
#include <iomanip>

using namespace std;

int* makeArray(int**, int, int);

int main()
{
	int m, n;

	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;

	int** arr = new int* [m];
	int* newArr;

	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf_s("[%d][%d] = ", i + 1, j + 1);
			cin >> arr[i][j];
		}
	}
	cout << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	newArr = makeArray(arr, n, m);

	for (int i = 0; i < m; i++)
	{
		cout << newArr[i] << " ";
	}

	system("pause");
	return 0;
}

int* makeArray(int** arr, int n, int m)
{
	int* newArr = new int[m];
	int* k;

	for (int i = 0; i < m; i++)
	{
		k = new int(0);
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < 0 && arr[i][j] % 3 == 0)
			{
				(*k)++;
			}
		}
		newArr[i] = *k;
	}

	return newArr;

}
