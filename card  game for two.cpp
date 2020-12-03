#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long Alice=0,Bob=0;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(count%2==0){
            Alice+=a[i];
        }
        else Bob+=a[i];
        count++;
    }
    
    cout<<Alice-Bob<<endl;
    
}
