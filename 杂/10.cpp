#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1001;
stack<char> result;
char org_[MAXN];
char op(char s, char a, char b){
	int r = 0;
	switch(s){
		case '+':
			return (a-'0') + (b - '0') + '0';
		case '-':
			return (a-'0') - (b - '0') + '0';
		case  '*':
			return (a-'0') * (b - '0') + '0';
		case '/':
			return (a-'0') / (b - '0') + '0';
	}
}

int main(){
	char temp;
	int i = 0;
	while(true){
		temp = getchar();
		org_[i++] = temp;
		if(temp == '@') break;
	} 
	int j = 0;
	while(j <i){
		if(org_[j] == '@') break;
		if(org_[j+1] == '.'){
			result.push(org_[j]);
		}else if(org_[j] == '.'){
			j++;
			continue;
		}else{
			int temp1 = result.top();
			result.pop();
			int temp2 = result.top();
			result.pop();
			int temp3 = op(org_[j], temp1, temp2);
			result.push(temp3);
		}
		j++;
	}
	cout << result.top();
	return 0;
}
