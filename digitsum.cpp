#include <iostream>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int digitsum=0;
    for (int num=n;num>0;num=num/10){
        digitsum+=num%10;
    }
    cout<<digitsum;
    return 0;
}