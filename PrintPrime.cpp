#include<iostream>
using namespace std;

void printprime(int n){

    cout<<"1,2,";

for(int i=1;i<=n;i++){
    int a=6*i-1;
    int b=6*i+1;
    if(a<=n) cout<<a<<",";

    if(b<=n) cout<<b<<",";
    else break;

}
}

int main(){
    printprime(50);
return 0;

}
