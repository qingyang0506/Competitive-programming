#include<bits/stdc++.h>

using namespace std;

//the input is a very big integer which present in a string and a small interger

string s1;
int b;
vector<int> v1;
int mod;


//high precision division
vector<int> div(vector<int>& v1,int b){
     mod = 0;
     vector<int> c;
    
    for(int i=v1.size()-1;i>=0;i--){
        mod = mod*10+v1[i];
        c.push_back(mod/b);
        mod %= b;
    }
    
    reverse(c.begin(),c.end());
    
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
    
    auto c = div(v1,b);
    
    for(int i=c.size()-1;i>=0;i--){
        cout << c[i];
    }
    cout << endl << mod;
    
    
    
    return 0;
}