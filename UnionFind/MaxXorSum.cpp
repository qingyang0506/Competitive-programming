//求最大异或和，使用的是trie树的数据结构进行处理的
#include<bits/stdc++.h>

using namespace std;

#define ll long long 

const int N = 10000005;

int son[N][2],idx;
ll a[N];

int n;

void insert(int x){
     int p = 0;
     for(int i=30;i>=0;i--){
         int t = (x>>i) & 1;
         int &m = son[p][t];
         if(m==0){
             m = ++idx;
         }
         p = m;
     }
}

ll get(int x){
    
    int p =0;
    
    ll res =0;
    
    for(int i=30;i>=0;i--){
        int m = (x>>i) &1;
        int t = son[p][!m];
        if(t!=0){
            res+= (1<<i);
            p = t;
        }else{
            p = son[p][m];
        }
    }
    
    return res;
}

int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        insert(a[i]);
    }
    
    ll res = 0;
    for(int i=0;i<n;i++){
        res = max(res,get(a[i]));
    }
    
    cout << res << endl;
    
    
    
    return 0;
}