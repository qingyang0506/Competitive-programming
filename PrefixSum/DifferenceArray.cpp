#include<bits/stdc++.h>

using namespace std;

const int N = 100005;

int a[N],b[N];

int n,q;

//一维数组的
//表示在数组索引l和r之间的所有树加上c
//b[]是a[]的差分数组，a就是b的前缀和数组
void insert(int l,int r,int c){
     b[l]+=c;
     b[r+1]-=c;
}

int main(){
    
    cin >> n >> q;
    
    for(int i=1;i<=n;i++){
       cin >> a[i];
       insert(i,i,a[i]);
    }
    
    for(int i=0;i<q;i++){
        int a,b,c;
        cin >> a >> b >> c;
        insert(a,b,c);
    }
    
    for(int i=1;i<=n;i++){
        a[i] = a[i-1]+b[i];
        cout << a[i] << " ";
    }
    return 0;
}