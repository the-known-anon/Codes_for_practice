#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ma=0;
    for(int i=1;i<=n;i++){
     int c=i,count = 0;
    while(c%2 == 0){
      count++;
      c = c/2;
    }
    ma = max(ma,count);
    }
    cout<<pow(2,ma);
    
}
  
