#include<bits/stdc++.h>

using namespace std;


//the input is a very big number present in a string and a relative small interger.

string s1;
int b;
vector<int> v1;

// high precision multiple
vector<int> mul(vector<int>& v1,int b){
    
    int carry = 0;
    
    vector<int> c;
    
    for(int i=0;i<v1.size();i++){
        int t = v1[i]*b+carry;
        c.push_back(t%10);
        carry = t/10;
    }
    
    c.push_back(carry);
    
    //delete the leading 0
    while(c.size()>1 && c.back()==0){
        c.pop_back();
    }
    
    return c;
}

int main(){
    cin >> s1 >> b;
    
    for(int i=s1.length()-1;i>=0;i--){
        v1.push_back(s1[i]-'0');
    }
    
    auto c = mul(v1,b);
    
    for(int i=c.size()-1;i>=0;i--){
        cout << c[i];
    }
    
}