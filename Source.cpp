//my comment
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int n = 0, listMass[25] = { 6, 34, 12, 70, -1,-7, 97, 80, 99, -99,1, 6, -3, 2, -8,3, 33, -1, 0, -78, -3, -5, -8, -56, -23 };
	int arr[5][5];
	const int ROW = 5;
	const int COL = 5;

	int sum = 0;


	int i;
	int j;


	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = listMass[n];
			n++;
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
	
	void insertion_Sort(int arr[5][5]);
	int k, l;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			k = arr[i][j];
			l = i - 1;
			while (l >= 0 && arr[l][j] > k)
			{
				arr[l+1][j] = arr[l][j];
				arr[l][j] = k;
				
					l--;
			}
		}
		cout << endl;
	}

			for (i = 0; i < ROW; i++)
			{

				for (j = 0; j < COL; j++)
				{
					
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
		
	
	
	for (i = 1; i < ROW; i++)
	{
		int dob=1;
		for (j = 0; j < COL; j++)
		{
			if (i > j)
			{
				dob *= arr[i][j];
			}
		}
		cout << "dob=" << dob << "\t" << endl;
		sum += dob;
    }
		cout << "sum=" << sum << "\t" << endl;
	
		system("pause");

		return(0);
}