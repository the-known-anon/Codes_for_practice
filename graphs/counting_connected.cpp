#include <iostream>
#include <vector>
using namespace std;
vector<int> a[100001];
int vis[100001];
void dfs(int v){
	vis[v]=1;
	for(int i=0;i<a[v].size();i++){
		int temp = a[v][i];
		if(vis[temp]==0){
			dfs(temp);
		}
	}
	
}


int main() {
	int n,e;
	cin>>n>>e;
	for(int i = 0;i<e;i++ ){
		int ab,cd;
		cin>>ab>>cd;
		a[ab].push_back(cd);
		a[cd].push_back(ab);
	}
	int c = 0;
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			dfs(i);
			c++;
		}
	}
	cout<<c<<endl;
	
	return 0;
}
