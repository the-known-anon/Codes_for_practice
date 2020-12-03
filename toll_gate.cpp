#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int n,m,x;
    cin>>n>>m>>x;
    int be=0;
    int ab =0;
    int a[m];
    for(int i=0;i<m;i++){
    	cin>>a[i];
    }
    for(int i=0;i<m;i++){
    	if(a[i]<x){
    		be++;
    	}
    	else if(a[i]>x){
    		ab++;
    	}
    }
    int MIN = min(ab,be);
    cout<<MIN;
    
    
}
   
