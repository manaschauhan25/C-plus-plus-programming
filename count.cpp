#include<iostream>
#include<math.h>

using namespace std;

int Count(int n){
return log10(n)+1;
}

int main(){
int a=12412;
cout<<"Number of digits in the number is:"<<Count(a);
return 0;
}
