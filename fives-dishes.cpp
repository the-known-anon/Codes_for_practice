#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
# include <vector>
using namespace std;
int main() {
  int a[5];
  int b[5];
  int sum1=0;
  for(int i=0;i<5;i++){
  	cin>>a[i];
  	sum1+=a[i];
  }
  for(int i=0;i<5;i++){
  	if(a[i]%10!=0){
  	b[i]= 10- (a[i]%10);
  
  	}
  	else{
  		b[i]=0;
  		
  	}
  }
  sort(b,b+5);
  int sum = b[0]+b[1]+b[2]+b[3];
  cout<<sum+sum1;
   
}
    
