#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
    int n,d,x;
    cin>>n>>d>>x;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int nora = 0;
    for(int i=0;i<n;i++){
    	nora += (d-1)/a[i]+1;
    }
    cout<<nora+x;
    
    
}
 
