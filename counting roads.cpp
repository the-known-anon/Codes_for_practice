#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m; 
	cin >>n>>m;
	vector <int> v1(2*m);
    
    for(int i=0;i<2*m;i++) {
    cin >> v1[i];
    }
    int c=2*m;
    for(int i=1;i<=n;i++) {
    	
     int sum= count(v1.begin(),v1.end(),i);
     cout<<sum<<endl;
    }
   
}
