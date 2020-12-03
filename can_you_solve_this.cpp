#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() 
{ 
    int n,m,c;
    cin>>n>>m>>c;
    int b[m],a[n][m];
    for(int i =0;i<m;i++){
    	cin>>b[i];
    }
    for(int i =0;i<n;i++){
    	for(int j =0;j<m;j++){
    	cin>>a[i][j];
    }
    }
    int count=0;
     for(int i =0;i<n;i++){
     	int sum = 0;
    	for(int j =0;j<m;j++){
    	sum+=a[i][j]*b[j];
    }
    if(sum+c>0){
    	count++;
    }
    }
 cout<<count;   
    
} 
