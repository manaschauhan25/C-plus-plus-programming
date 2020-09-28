#include<iostream>
#include<math.h>

using namespace std;

void divisors1(int n){
int i;
if(n<0)
        return;
        int x;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<",";

        }
    }
    for(;i>=1;i--){
 if(n%i==0 && i!=n/i){
            cout<<n/i<<",";
    }

}
}
void divisors(int n){
    if(n<0)
        return;
        int x;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<",";
            if(i!=n/i)
            cout<<n/i<<",";
        }
    }

}

int main(){
divisors1(25);
return 0;
}
