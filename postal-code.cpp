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
    string s;
    cin>>s;
    int flag=1;
    for(int i = 0; i < a; ++i){
        if((s[i]=='-')){
            flag =0;
            cout<<"No";
            exit(0);
        } 
        
    }
    if(s[a]!= '-'){
       cout<<"No";
       exit(0);
    }
    for(int i = a + 1; i <= a + b; ++i){
        if((s[i]=='-')) {
           cout<<"No";
           exit(0);
        }  
    }
    cout<<"Yes";
    
    
}
    
