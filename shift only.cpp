#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int flag =0;
    for(int i=0;i<100000;i++){
        for(int i=0;i<n;i++){
    	if(a[i]%2==0){
    		a[i]=a[i]/2;
    	}
    	else{
    		flag = 1;
    	}
    }
    if(!flag){
    	count++;
    }
    
    }
    cout<<count;
    
    
    
}
