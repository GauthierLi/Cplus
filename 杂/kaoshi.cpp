#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int howmany(int n,int x);

int main()
{
	int n,x;
	cin >> n >>x;
	int a_[MAX];
	a_[0] = 0;
	for(int i = 1; i <= n;i++)
	{
		//定义一个howmany(n)判断有多少个1
		a_[i] =  a_[i - 1] + howmany(i,x);
	}
	cout << a_[n];
    return 0;
}

int howmany(int n,int x)
{
	int temp = -1, i = 10, count = 0;
	while(n != 0)
	{
		temp = n % i;
		if(temp == x)
			count++;
		n = n/i;
	}
	return count;
}
