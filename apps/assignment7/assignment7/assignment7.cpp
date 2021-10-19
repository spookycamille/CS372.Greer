#include<iostream>
#include<bits.h>
using namespace std;

int anyEqual(int n, int A[][1]) 
{
	int i, j, k, m;
	for (i = 1; i < n; i++) {
		for (j = 1; j <= n; j++) {
			for (k = 1; k <= n; k++) {
				for (m = 1; m <= n; m++) {
					if (A[i][j] == A[k][m] && !(i == k && j == m)) {
						std::cout << "i=" << i << " j=" << j << " k=" << k << " m=" << m << "\n";
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
 
int main()
{
	int n = 0;
	cout << "Enter size of array" << endl;
	cin >> n;
	int A[n][n];
	cout << "Enter array elemnt one by one" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	if (anyEqual(n, A))
	{
		cout << "Array's two elements are the same" << endl;
	}
	else
	{
		cout << "No two elements are the same" << endl;
	}
	return 0;
}