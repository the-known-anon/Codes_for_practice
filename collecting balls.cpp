#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<=abs(k-a[i])){
        	sum+= 2* a[i];
        
        }
        else{
            sum+= 2* abs(k-a[i]);	
          
        }
        
    }
    cout<<sum;
    
}
    
