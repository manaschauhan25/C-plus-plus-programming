#include<iostream>
using namespace std;
bool check(int a){

    if(a==2 || a==3)
        return true;
if((a-1)%6==0)
    return true;
else if((a+1)%6==0)
    return true;

else if(a==1)
    return false;
return false;
}

int main(){
int a=1031;
bool b=check(a);
cout<<b;
return 0;
}
