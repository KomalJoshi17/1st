#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int rows,columns,i,j;
    cin>>rows>>columns;
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            if(i%2==0){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}