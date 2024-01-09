#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    char ch;
    cin>>ch;
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<"ALPHABET";
    }else if((ch>='0' && ch<='9')){
        cout<<"DIGIT";
    }else{
        cout<<"SPEICAL";
    }
    return 0;
}