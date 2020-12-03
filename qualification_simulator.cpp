#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() 
{ 
    int n,A,B;
    cin>>n>>A>>B;
    string a;
    cin>>a;
    int c=0;
    int d=0;
    for(int i =0;i<n;i++){
    	if (a[i]=='a'){
    		if(d<A+B){
    			cout<<"Yes"<<endl;
    			d++;
    		}
    		else{
    			cout<<"No"<<endl;
    		}
    	}
    	else if (a[i]=='b'){
    		c++;
    		if(d<A+B && c <=B){
    			cout<<"Yes"<<endl;
    				d++;
    		}
    		else{
    			cout<<"No"<<endl;
    		}
    	}
    	else{
    		cout<<"No"<<endl;
    	}
    }
    
} 
