#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<string> v(n); 
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
	int c=	count(v.begin(),v.end(),v[i]);
	if(c==1){
		continue;
	}
	else{
		cout<<"No";
		exit(0);
	}
	}
	
    for(int i=0;i<n;i++){
    	if(i<n-1){
    	int d = v[i].size();
    	char c=v[i][d-1];
    	char e = v[i+1][0];
    	
    	
    	if(c==e){
    		continue;
    	}
    	else{
    		cout<<"No";
    		exit(0);
    	}
    	
    	}
    	cout<<"Yes";
    }
    
    
   
}
