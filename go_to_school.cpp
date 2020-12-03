#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   int www[n];
   for(int i=0;i<n;i++){
    int c = a[i];
    www[c-1]=i+1;
   }
    for(int i=0;i<n;i++){
    cout<<www[i]<<" ";
   }
   
   
}
