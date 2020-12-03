#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int a[3][3];
  for(int i=0;i<3;i++){
  	for(int j=0;j<3;j++){
  		cin>>a[i][j];
  	}
  }
  int n;
  cin>>n;
  int b[n];
  for(int i=0;i<n;i++){
  	cin>>b[i];
  }
  for(int i=0;i<n;i++){
  	int item = b[i];
  	for(int k=0;k<3;k++){
  	for(int j=0;j<3;j++){
  		if(a[k][j]==item){
  			a[k][j]=0;
  		}
  	}
  }
  }
  int count=0;
  	for(int i=0;i<3;i++){
  	if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0 ){
  		count++;
  	}
  	}
  	for(int i=0;i<3;i++){
  	if(a[0][i]==0 && a[1][i]==0 && a[2][i]==0){
  		count++;
  	}
  	}
   if(a[0][0]==0 && a[1][1]==0 && a[2][2]==0){
  		count++;
  	}
  	else if(a[0][2]==0 && a[1][1]==0 && a[2][0]==0){
  		count++;
  	}
  	if(count>=1){
  		cout<<"Yes";
  	}
  	else{
  		cout<<"No";
  	}
  
}
