#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  int count=0;
  for(int i=a;i<=b;i++){
  	int k = i % 10;
  	int l = (i /10000) % 10;
    int  m = (i / 10 )% 10 ;
    int n = (i / 1000) % 10;
    if ( k == l && m == n){ 
    	count++;
    }
    
  }
  cout<<count;
   
}
    
