#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int MAX=0;
     int count=0;
   
    for(int i=0;i<s.size();i++){
    	if(s[i]=='A' ||s[i]=='C' ||s[i]=='G' ||s[i]=='T' ){
    		count++;
    	}
    	else{
    	  count = 0;
    	}
    	MAX = max(MAX,count);
    }
    cout<<MAX;
}
    
