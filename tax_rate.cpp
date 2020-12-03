#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int c=0;
   for(int i=0;i<n+1;i++){
   	int d =(i*1.08);
   	if(d==n){
   		c=i;
   		break;
   	}
   }
   if(c!=0){
   	cout<<c;
   }
   else{
   	cout << ":(";
   }
}
