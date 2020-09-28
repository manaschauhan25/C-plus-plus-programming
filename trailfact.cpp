#include<iostream>
#include<math.h>

using namespace std;

int fact(int n){

int f=1;
for(int i=2;i<=n;i++){
    f*=i;
}
return f;
}
int count_zeroes(int n){
int res=0;
for(int i=5;i<=n;i=i*5){
    res+=n/i;
}
return res;
}

int main(){
    int a=5;
    int temp=fact(a);
    cout<<"Number of zeros are:"<<count_zeroes(temp);
return 0;
}
