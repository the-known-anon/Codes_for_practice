#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
	int a,b,c,x;
	int count = 0;
	cin>>a>>b>>c>>x;
	for(int i=0;i<=a;i++){
	for(int j=0;j<=b;j++){
	for(int k=0;k<=c;k++){
		if(i*500+j*100+k*50==x){
			count++;
		}
	}
    	
	}
    	
	}
	cout<<count;
    
    
}
    
