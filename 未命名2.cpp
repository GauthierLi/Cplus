#include <bits/stdc++.h>
using namespace std;

#define MAX 100002
int way[MAX][MAX],v1[MAX];
int fun(int di[MAX][MAX], int n,int k1);

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			way[i][j] = 0;
		}
	}
	for(int i = 0; i < m; i++)
	{
		int u,v,w;
		cin >> u >> v >> w;
		way[u - 1][v - 1] = w;
	}
	cout<<fun(way,n,k);
	return 0;
}
int fun(int di[MAX][MAX], int n,int k1)
{
	int sum = 0,temp;
	for(int i = 0;i < n;i++)
	{
		v1[i] = 0;
	}
	v1[0] = 1;
	for(int k = 0;k < k1+1;k++)
	{
		int maxima = 0;
		for(int i = 0;i < n;i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(v1[j] == 0 && maxima < di[i][j])
				{
					maxima = di[i][j];
					temp = j;
				}
			}
		}
		sum += maxima;
		v1[temp] = 1;
	}
	return sum;
}

