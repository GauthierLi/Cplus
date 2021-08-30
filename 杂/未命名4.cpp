#include<bits/stdc++.h> 

using namespace std;

bool cmp(string a, string b)
{
	return a+b > b+a;
}

int main()
{
	int n; 
	cin >> n;
	vector<string> vstr(n);
	for(int i = 0; i < n;i++)
	{
		cin>>vstr[i];
	}
	sort(vstr.begin(), vstr.end(),cmp);
	for(int i = 0; i < n;i++)
	{
		cout << vstr[i];
	}
	return 0;
}
