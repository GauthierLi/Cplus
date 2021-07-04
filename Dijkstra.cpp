#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)

const int maxv = 1000; //最大顶点数
const int inf = 1000000000;

struct node{
	int v, dis; //v为 目标顶点，dis为边权 
};

vector<node> adj[maxv]; //adj(u)从顶点u可到达的顶点
int n, m,s; //n顶点数, m是边数，s是起点数 
int d[maxv]; //起点到达各个顶点的最短路 
bool vis[maxv] = {false}; //标记顶点是否访问 

void Dijkstra(int s){// s是起点
	fill(d,d + maxv, inf);
	d[s] = 0;//起点到达自身的距离是0
	rep(i,0,n){
		int u = -1, MIN = inf; //u,是使d[u]最小，min存放最短路 
		rep(j,0,n){
			if(vis[j] == false && d[j] < MIN){
				u = j;
				MIN = d[j];
			}
		}
		//找不到小于inf的说明剩下的顶点和其不连通
		if(u == -1) return;
		vis[u] = true; //标记u已访问
		rep(j,0,adj[u].size()){
			int v = adj[u][j].v; //通过领接表获得可到达的顶点
			if(vis[v] == false && d[u] + adj[u][j].dis < d[v]){
				d[v] = d[u] + adj[u][j].dis;
			} 
		} 
	}
} 

int main(){
	cin >> n >>m >>s;
	rep(i, 0, m){
		int a,b,c;
		cin >> a >> b>> c;
		node temp;
		temp.v = b;
		temp.dis = c;
		adj[a].push_back(temp);
	}
	Dijkstra(s);
	rep(i, 0, n){
		cout << d[i];
	}
	return 0;
}
