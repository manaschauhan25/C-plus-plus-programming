#include<iostream>
using namespace std;
bool check(int n){
int i;
    for( i=2;i*i<n;i++){

    if (n%i==0 || n%(i+2)==0){
    return true;
    }
    }
    return false;
}

int main(){
int a=35;
bool b=check(a);
if(b){
    cout<<"Not Prime";
}
else{
cout<<"prime";
}
return 0;
}
