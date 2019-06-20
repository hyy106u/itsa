#include<iostream>    
#include<vector>    
using namespace std;
int main()
{
	int num;
	cin >> num;
	while (num--){
		int max = 0;
		int buf[100][100] = { 0 };
		int m, n, k;
		cin >> m >> n >> k;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> buf[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				int test = 0;
				for (int x = i; x < i + k; x++){
					for (int y = j; y < j + k; y++){
						test += buf[x][y];
					}
				}
				if (max < test) max = test;
			}
		}
		cout << max << endl;
	}
	return 0;
}
