#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> Read(string s);

int main(){
	cin >> N;
	getchar();
	set<vector<int> > data;
	for(int i = 0; i < N; i++){
		string str;
		cin >> str;
		data.insert(Read(str));
	}
	cout << data.size();
	return 0;
}

vector<int> Read(string s){
	vector<int> temp;
	for(int i = 0; i < 26; i++){
		temp.push_back(0);
	}
	int len = s.length();
	for(int i = 0; i < len; i++){
		int t = s[i] - 'A';
		temp[t] = temp[t] + 1;
	}
	return temp;
}
