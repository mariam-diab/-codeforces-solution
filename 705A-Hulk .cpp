#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    FAST_IO;
    int x; string result = "I hate "; cin>>x;
    for (int i=2; i<=x; i++){
        if (i%2) result += "that I hate ";
        else result += "that I love ";
    }
    cout<<result+" it";

}