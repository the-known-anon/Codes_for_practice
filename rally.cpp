#include <bits/stdc++.h> 
#include <vector>
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int x[n];
 for(int i=0;i<n;i++){
 	cin >> x[i];
 }
 sort(x,x+n);
 int min=1000000;
 int max = x[n-1];
 int sum[max];
 for(int i=1;i<=max;i++){
 	int sum1=0;
 	for(int j=0;j<n;j++){
 		sum1+=((i-x[j])*(i-x[j]));
 	}
 	if(min>sum1){
 		min=sum1;
 	}
 }
 cout<<min<<endl;
 
 return 0;
}
