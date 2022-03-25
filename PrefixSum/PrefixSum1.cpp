#include<bits/stdc++.h>

using namespace std;

const int N = 100005;
int a[N],sum[N];
int n,q;

//一维数组的前缀和
int main(){
    
    cin >> n >> q;
    
    //做前缀和和差分的题最好从index1的位置开始
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum[i]=sum[i-1]+a[i];//如果是从0开始算的话，应该是a[i-1]
    }
    
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        cout << sum[b]-sum[a-1]<< endl;
    }
    return 0;
}