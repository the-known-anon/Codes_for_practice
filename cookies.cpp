#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int a,b,c;
 cin >>a>>b>>c;
 int count=0;
 if(a==b && b==c){
   if(a%2==0){ 	cout<<-1;
             }
   else{
     cout<<0;
   }
 }
else{
	
while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
 	int A,B,C;
 	A= (b)/2+ (c)/2;
 	B=(c)/2+(a/2);
 	C= (b/2)+(a/2);
 	a=A;
 	b=B;
 	c=C;
 	count++;
 
 }
 cout<<count;
 
}
}
