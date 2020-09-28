#include<iostream>
#include<math.h>

using namespace std;

int gcd(int a,int b){
if(b==0)
return a;

else
    return gcd(b,a%b);

}
int lcm(int a,int b){
   int c=gcd(a,b);
    return (a*b)/c;
}

int main(){
int a=5,b=9;
cout<<"LCM of two numbers"<<lcm(a,b);
return 0;
}
