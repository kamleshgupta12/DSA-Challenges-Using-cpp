#include<iostream>
using namespace std;
int main(){
    int number=7;
    int bit;
    while (number>0)
    {
         bit = number&1;
        bit = bit>>1;
    }
    
cout<<bit;

    }