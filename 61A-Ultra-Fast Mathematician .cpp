#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    FAST_IO;
    string x, y, result = ""; cin>>x>>y;
    for(int i=0; i<x.size(); i++){
        if(x[i]!=y[i]) result+='1';
        else result+='0';
    }
    cout<<result;

}