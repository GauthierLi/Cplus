#include <bits/stdc++.h> 
using namespace std;

int x,n; //x周几，n天数 

int main() {
	cin >> x >> n;
	int re_d = 0, temp = 0;
	n = n + x - 1;
	temp = n % 7;
	n = n - temp;
	if(temp > 5){
		temp = 5;
	}
	if(x == 6 || x == 7){
		re_d = 5 * (n / 7) - 5  + temp;
	}else{
		re_d = (5 * (n / 7)) - x + 1 + temp;
	}
	cout << re_d * 250;
	return 0;
}
