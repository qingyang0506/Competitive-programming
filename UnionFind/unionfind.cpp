#include<bits/stdc++.h>

using namespace std;

const int N = 100005;
int n,m;

int fa[N];

//initialize
void init(){
    for(int i=1;i<=n;i++){
        fa[i] = i;
    }
}

//find the head node of this set
int find(int x){
     if(x==fa[x]){
         return x;
     }
     
     fa[x] = find(fa[x]);
     
     return fa[x];
}

//merge the x set and y set
bool merge(int x,int y){
    int a = find(x), b = find(y);
    
    if(a==b) return false;
    
    fa[a] = b;
    return true;
}

int main(){
    
    cin >>  n >> m;
    
    init();
    
   while(m--){
       char op[2];int a,b;
       
       scanf("%s%d%d",op,&a,&b);
       
       if(*op=='Q'){
           
           if(find(a)==find(b)){
               cout << "Yes" << endl;
           }else{
               cout << "No" << endl;
           }
           
       }else{
           
           merge(a,b);
           
       }
   }
    
}