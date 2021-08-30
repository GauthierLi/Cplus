#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1001;
int result[MAXN];
char org_[MAXN];

int main() {
	char *cur = org_;
	char *top = org_;
	char temp;
	while(true){
		cin >> temp;
		*top = temp;
		top++;
		if(temp == '@') break;
	}
	int *top_int = result;
	int *cur_int = result;
	for(;cur != top;cur++){
		if(*cur == '@'){
			break;
		}
		if(*cur != '.' && *(cur+1) == '.'){
			*top_int = *cur - '0';
			top_int++;
		}else{
			int temp1, temp2;
			switch(*cur){
				case '+':
					temp1 = *(--top_int);
					temp2 = *(--top_int);
					*top_int = temp2 + temp1;
					top_int++;
					break;
				case '-':
					temp1 = *(--top_int);
					temp2 = *(--top_int);
					*top_int = temp2 - temp1;
					top_int++;
					break;
				case '*':
					temp1 = *(--top_int);
					temp2 = *(--top_int);
					*top_int = temp2 * temp1;
					top_int++;
					break;
			}
		}
	}
	cout << *(top_int-1);
	return 0;
}
