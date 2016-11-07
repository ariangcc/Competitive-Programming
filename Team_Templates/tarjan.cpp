//Algoritmo de Tarjan: Componentes fuertemente conexas

stack<int> stk;
int id[N];
int low[N];
int curr_id=1;

void dfs(int u){
	stk.push(u);
	id[u]=curr_id++;
	low[u]=u;
	REP(i,0,adj[u].size()){
		int v = adj[u][i];
		if(id[v]==-1){
			dfs(v);
			low[u]=min(low[u],low[v]);
		}
		else low[u]=min(low[u],id[v]);
	}
	vi cmp;
	int a;
	do{
		v=stk.top(); stk.pop();
		cmp.pb(v);
	}while(v!=u);
}
