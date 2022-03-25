#include<bits/stdc++.h>

using namespace std;

//this is method to solve the number is too big,if they add directly it will exceed the 
//int or long long  scale
//v1 ={1,2,3,4,4,3,6,2,7,8,9,4,3,4,6,7} v2 = {3,5,6,3,5,6,8,9,2,3,4,2,3,4,6,7,4,1,6,7};
// result  =  v1+v2 = 1234436278943467+35635689234234674167;
vector<int> add(vector<int>& v1,vector<int>& v2){
    
    int carry=0;
    vector<int> c;
    
    for(int i=0;i<v1.size()||i<v2.size();i++){
        if(i<v1.size()) carry += v1[i];
        if(i<v2.size()) carry += v2[i];
        c.push_back(carry%10);
        carry /=10;
    }
    
    if(carry){
        c.push_back(1);
    }
    
    return c;
}