#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[9][9], c[9];
	int w = 0;
	cout << "Enter the Sudoku Values One-by-One: ";
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
		INPUT:
			char t;
			cin >> t;
			int temp = t - 48;
			if (temp > 0 && temp < 10)
			{
				a[i][j] = temp;
				switch (temp)
				{
				case 1:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 2:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 3:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 4:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 5:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 6:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 7:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 8:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				case 9:
					c[temp - 1] = c[temp - 1] + 1;
					break;
				}
			}
			else
			{
				cout << "Enter Number Between 1-10 ";
				goto INPUT;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (c[i] != 9)
		{
			cout << "Sudoku is Incorrect. ";
			w = 1;
			break;
		}
	}

	if (w == 0)
	{
		for (int i = 0; i < 9; i++)
		{
			int sh = 0, sv = 0;
			for (int j = 0; j < 9; j++)
			{
				sh = sh + a[i][j];
				sv = sv + a[j][i];
			}
			if (sh != 45 || sv != 45)
			{
				cout << "Sudoku is Incorrect .";
				w = 1;
				break;
			}
		}
	}
	if (w == 0)
	{
		for (int vc = 0; vc < 3; vc++)
		{
			for (int hc = 0; hc < 3; hc++)
			{
				int ssm = 0;
				for (int i = 0; i < 3; i++)
				{
					for(int j=0;j<3;j++)
					{
						ssm = ssm + a[(i + (vc * 3))][(j + (hc * 3))];
					}
				}
				if (ssm != 45)
				{ 
					cout << "Sudoku is Incorrect .";
					w = 1;
					break;
				}
			}
		}
	}
	if (w == 0)
	{
		cout << "Sudoku is Correct .";
	}
	return 0;
}