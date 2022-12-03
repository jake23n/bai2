//bài 2: tìm cột chứa nhiều số chẵn nhất. Trên ma trận số nguyên.
#include <iostream>
#include <ctime>
#include <random>
using namespace std;

void nhapmang(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;
}
void xuatmang(int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "b[" << i << "] = " << b[i] << endl;
	}
	cout << endl;
}
void xuatmang(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = " << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void songaunhien(int a[][100], int n, int m)
{
	random_device rd;
	mt19937 rng(rd());


	uniform_int_distribution<int> uni(1, 10);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			a[i][j] = uni(rng);
	}
}
void sochannhieunhat(int a[][100], int m, int n)
{
	int count[100] = {0}, max = -1, d = 0;
	for(int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] % 2 == 0)
			{
				count[j]++;
			}
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (count[j] > max)
		{
			max = count[j];
		}
	}
	cout << max << endl;
	xuatmang(count, n);
	for (int j = 0; j < n; j++)
	{
		if (count[j]==max)
			cout << j << " ";
	}
	
}
int main()
{
	int a[100][100], m = 0, n = 0;
	cin >> m >> n;

	songaunhien(a, m, n);
	xuatmang(a, m, n);

	sochannhieunhat(a, m, n);
}