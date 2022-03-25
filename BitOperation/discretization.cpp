#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>

using namespace std;

const int N = 300005;
vector<ll> alls;
vector<pll> adds;
vector<pll> query;
ll arr[N],sum[N];
int n,m;

int get(int x){
    return lower_bound(alls.begin(),alls.end(),x)-alls.begin()+1;
}

int main(){
    
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        alls.push_back(a);
        adds.push_back({a,b});
    }
    
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        alls.push_back(a);
        alls.push_back(b);
        query.push_back({a,b});
    }
    
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());
    
    for(int i=0;i<adds.size();i++){
        pll p= adds[i];
        int a = p.first;
        int b = p.second;
        arr[get(a)] += b;
    }
    
    for(int i=1;i<=alls.size();i++){
        sum[i] = sum[i-1]+arr[i];
    }
    
    
    for(int i=0;i<query.size();i++){
         pll p = query[i];
         int a = p.first;
         int b = p.second;
         int l = get(a);
         int r = get(b);
         cout << sum[r]-sum[l-1] << endl;
    }
    
    return 0;
}