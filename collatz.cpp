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
    set <int> s;
    int i=1;
    int flag=0;
    s.insert(n);
   for(int i=0;i<1000000;i++){
    	if(n%2==0){
    		n=n/2;
    	}
    	else{
    		n = 3*n+1;
    	}
    	
     if(s.count(n)==1){
     	 flag = i+2;
     	break;
     }
     s.insert(n);
    }
    cout<<flag;
    
}
