//使用trie树进行字符串统计
#include<bits/stdc++.h>

using namespace std;

const int N = 20005;
int son[N][26],cnt[N],idx;//using array to present the trie tree

int n;


void insert(string str){
    int p = 0;
    for(int i=0;i<str.length();i++){
        int &t = son[p][str[i]-'a'];
        if(t==0){
            t = ++idx;
        }
        p = t;
    }
    
    cnt[p]++;
}

int count(string str){
    int p = 0;
    for(int i=0;i<str.length();i++){
       int t = son[p][str[i]-'a'];
       if(t==0){
           return 0;
       }
       p =t;
    }
    
    return cnt[p];
}

int main(){
    
   cin >> n;
   
   for(int i=0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        if(s1=="I"){
            insert(s2);
        }else{
            cout << count(s2) << endl;
        }
   }
   
    
    
    
    
    
    return 0;
}