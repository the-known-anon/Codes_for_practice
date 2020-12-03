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
  long long a[100];
  a[0]=2;
  a[1]=1;
  
  for(int i=2;i<=n;i++){
  	a[i]=a[i-1]+a[i-2];
  	
    
  }
  cout<<a[n];
   
}
    
