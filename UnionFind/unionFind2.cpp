#include<bits/stdc++.h>

using namespace std;

const int N = 500005;

int n,m;

//食物链，带权并查集，维护和更新带权的并查集
int fa[N],val[N];

void init(){
    for(int i=1;i<=n;i++){
        fa[i] = i;
        val[i] = 0;
    }
}

int find (int x){
    
    if(x==fa[x]){
        return x;
    }
    
   int t= fa[x];
   fa[x] = find(fa[x]);
   val[x] += val[t];
   val[x] %=3;
   return fa[x];
}

bool merge(int i,int j,int c){
    int x = find(i), y = find(j);
    
    if(x==y){
        return false;
    }
    
    fa[x] = y;
    val[x] = ((3-val[i])+c+val[j]+(c?1:0))%3;
    return true;
}

int main(){
    
    cin >> n >> m;
    init();
    
    int ans = 0;
    while(m--){
        // cout << ans << endl;
        int x,a,b;
        cin >> x >> a >> b;
        
        if(a>n || b>n){
            ans++;
            continue;
        }
        if(x==1){
          
          if(find(a)!=find(b)){
              merge(a,b,0);
          }else{
              if(val[a]!=val[b]){
                  ans++;
              }
          }
          
        }else{
            
           if(a==b){
               ans++;
               continue;
           }
           
           if(find(a)!=find(b)){
               merge(a,b,1);
           }else{
               if((val[a]+1)%3!=val[b]){
                   ans++;
               }
           }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}






