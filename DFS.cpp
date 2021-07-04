#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)

const int N = 9999999;
vector<int> G[N];
// �������
bool vis[N] = {false};
//˫���
void addedge(int u, int v){
	G[u].push_back(v);
	G[v].push_back(u);
}

//������ȱ���
void DFS(int u){
	if(vis[u]) return;
	vis[u] = true;
	rep(i, 0, (int) G[u].size()){
		DFS(G[u][i]);
	}
} 
 
int main(){
	int n,m,u,v;
	cin >> n >> m;
	rep(i, 0, m){
		cin >> u >>v;
		addedge(u,v);
	}
	int cnt = 0;
	rep(i,1,n+1){
		if(!vis[i]){
			++cnt;
			DFS(i);
		}
	}
	cout << cnt;
}
