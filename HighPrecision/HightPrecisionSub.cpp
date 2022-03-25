#include<bits/stdc++.h>

using namespace std;

//the input is string1 = "114213892827429847294" str2 ="149421979234798137815"

string s1,s2;
vector<int> v1,v2;

//compare which parameter is bigger,if return true the first is bigger
bool cmp(vector<int>& v1,vector<int>& v2){
    if(v1.size()>v2.size()){
        return true;
    }else if(v1.size()<v2.size()){
        return false;
    }else{
        for(int i=v1.size()-1;i>=0;i--){
            if(v1[i]!=v2[i]){
                return v1[i]>v2[i];
            }
        }
        
        return true;
    }
}

//已经确保了v1大于v2
vector<int> sub(vector<int>& v1,vector<int>& v2){
     int carry=0;
     
     vector<int> c;
     
     for(int i=0;i<v1.size();i++){
         carry = v1[i]-carry;
         if(i<v2.size()) carry-=v2[i];
         c.push_back((carry+10)%10);
         if(carry<0){
             carry = 1;
         }else{
             carry = 0;
         }
     }
     //清除前导0
     while(c.size()>1 && c.back()==0 ) c.pop_back();
     
     return c;
     
     
}

int main(){
    
    cin >> s1 >> s2;
    
    for(int i=s1.length()-1;i>=0;i--){
        v1.push_back(s1[i]-'0');
    }
    
    for(int i=s2.length()-1;i>=0;i--){
        v2.push_back(s2[i]-'0');
    }
    
    vector<int> c;
    if(cmp(v1,v2)){
        c = sub(v1,v2);
    }else{
        cout << '-';
        c = sub(v2,v1);
    }
    
    for(int i=c.size()-1;i>=0;i--){
        cout << c[i];
    }
    
    
    
    return 0;
}