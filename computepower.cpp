#include<iostream>
using namespace std;

int power(int a, int b){

int res=1;
if (b==0) return 1;



    for(int i=b;i>0;i=i/2){
        if(i%2!=0)
            res=res*a;

        a=a*a;


    }
    return res;

}//O(sqrt(n))

/*int power(int a,int b){

if(b==0) return 1;

int temp=power(a,b/2);
temp=temp*temp;

if(b%2==0){
    return temp;
}
else
    return temp*a;

}*/


int main(){
    cout<<power(2,5);


return 0;
}
