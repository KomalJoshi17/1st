#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
     // input 123 output 321
int main(){
    int n;
    cin>>n;
    int num1=0;
    int revnum=0;
    while(n!=0){
        num1=n%10;
        revnum=revnum*10+num1;
        n/=10;
    }
    cout<<revnum;
    return 0;
}