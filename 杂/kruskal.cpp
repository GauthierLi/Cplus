#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+100;

/*�鲢��*/
struct unionFind{
	int nn; //Ԫ�ظ���
	int par[N];
	void init(){//��ʼ��
		for(int i = 0; i < nn; i++) par[i] = i; //ÿ���ڵ����˾���Լ��������� 
	} 
	int find(int x){
		return x==par[x]?x:par[x]=find(par[x]);
	} 
	void unite(int x, int y){//�ϲ����� 
		x = find(x);
		y = find(y);
		if(x == y) return;
		par[x] = y;
	}
	bool same(int x, int y){
		return find(x) == find(y);
	} 
};

struct edge{// ��
	int u,v,w; 
};

bool cmp(edge a, edge b)
{
	return a.w < b.w;
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<edge> e(m);
	unionFind UF;
	UF.nn = n;
	UF.init();//��ʼ�����鼯
	for(int i = 0; i < m; i++) 
	{
		cin >> e[i].u >> e[i].v >> e[i].w;
	}
	sort(e.begin(), e.end(), cmp); //����
	int MST = 0;
	int cnt = 0; // ���������Ƿ����ȡ��n-1����
	for(int i = 0; i < m; i++){
		if(!UF.same(e[i].u, e[i].v)){
			MST += e[i].w;
			cnt++;
			UF.unite(e[i].u, e[i].v);
		}
		if(cnt == n-1) break;
	}
	if(cnt < n-1){
		cout << "no solution"<< endl;
		return 0;
	}
	cout << MST <<endl;
	return 0;
}
