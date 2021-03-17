#include <iostream>
#include <vector>
using namespace std;
bool vis[10001];
vector<int> a[10001];


bool iscycle(int node, int par){
	vis[node]=1;
	for(int child : a[node]){
		if(vis[child]!=1){
			if(iscycle(child,node)==true){
				return true;
			}
		}
		else{
			if(child!=par){
				return true;
			}
		}
	}
	return false;
	
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
	cout<<iscycle(1,-1)<<endl;
	return 0;
}
