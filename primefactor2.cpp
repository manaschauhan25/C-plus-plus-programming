#include<iostream>
using namespace std;

void twin(int n){
cout<<"(1,2)\n";

for(int i=1;i*i<=n;i++){
    cout<<"("<<6*i-1<<","<<6*i+1<<")\n";
}

}

void primefactor(int n){
    if(n<=1) return;

    while(n%2==0){
        cout<<"2,";
        n=n/2;
    }
    while(n%3==0){
        cout<<"3,";
        n=n/3;
    }

for(int i=1;i*i<=n;i++){
    int a=(6*i)-1;
     int b=(6*i)+1;
    while(n%a==0){
        cout<<a<<",";
        n=n/a;
    }
    while(n%b==0){
        cout<<b<<",";
        n=n/b;
    }
}
if(n>3){
    cout<<n;
}
}
int main(){
primefactor(11);
twin(10);
return 0;
}
