#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)

const int maxv = 1000; //��󶥵���
const int inf = 1000000000;

struct node{
	int v, dis; //vΪ Ŀ�궥�㣬disΪ��Ȩ 
};

vector<node> adj[maxv]; //adj(u)�Ӷ���u�ɵ���Ķ���
int n, m,s; //n������, m�Ǳ�����s������� 
int d[maxv]; //��㵽�������������· 
bool vis[maxv] = {false}; //��Ƕ����Ƿ���� 

void Dijkstra(int s){// s�����
	fill(d,d + maxv, inf);
	d[s] = 0;//��㵽������ľ�����0
	rep(i,0,n){
		int u = -1, MIN = inf; //u,��ʹd[u]��С��min������· 
		rep(j,0,n){
			if(vis[j] == false && d[j] < MIN){
				u = j;
				MIN = d[j];
			}
		}
		//�Ҳ���С��inf��˵��ʣ�µĶ�����䲻��ͨ
		if(u == -1) return;
		vis[u] = true; //���u�ѷ���
		rep(j,0,adj[u].size()){
			int v = adj[u][j].v; //ͨ����ӱ��ÿɵ���Ķ���
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
