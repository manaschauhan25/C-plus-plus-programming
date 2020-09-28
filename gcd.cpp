#include<iostream>
#include<math.h>

using namespace std;

int gcd(int a,int b){
if(b==0)
return a;

else
    return gcd(b,a%b);

}

int main(){
int a=5,b=9;
cout<<gcd(a,b);
return 0;
}
