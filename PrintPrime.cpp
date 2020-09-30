#include<iostream>
using namespace std;

void sieveof(int n){

if(n<=1) return;
bool ar[n+1];
fill(ar,ar+n+1,true);

for(int i=2;i*i<=n;i++){
    if(ar[i]){
        for(int j=i*2;j<=n;j=j+i){
            ar[j]=false;
        }
    }
}
for(int i=2;i<=n;i++){
    if(ar[i]){
        cout<<i<<" ";
    }
}

}

int main(){
    sieveof(50);
return 0;

}
