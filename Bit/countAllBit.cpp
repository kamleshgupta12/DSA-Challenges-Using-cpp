#include <iostream>
using namespace std;
int countSetBits(int num){
    int count=0;
while(num>0){
    int bit = num%2;
    if(bit==1)
    count ++;
    num=num/2;
}
return count;
}

int main()
{
   int num;
   cin>>num;
   int setBit = countSetBits(num);
   cout<<setBit;
}