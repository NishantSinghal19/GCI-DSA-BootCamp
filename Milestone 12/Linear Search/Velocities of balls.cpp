#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    //t = no. of testcases
    while (t--)
    {
        int n;cin>>n;
        //n= no. of balls
        int *postion= new int[n];
        int *velocity= new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>*(postion+i);
        }
        for (int j = 0; j < n; j++)
        {
            cin>>*(velocity+j);
        }
        
    }
    
    return 0;
}