#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    for(int a=1;a<=n;a++){
        if(a%2==0){
            sum1=sum1+a;
        }else{
            sum2=sum2+a;
        }
    }
    cout<<sum1<<endl<<sum2;
    return 0;
}