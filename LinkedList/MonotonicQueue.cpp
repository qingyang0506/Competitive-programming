#include<bits/stdc++.h>

using namespace std;

const int N = 1000005;
int q[N],hh,tt=-1;

int n,k;
int arr[N];

int main(){
    
    
    cin >> n >> k;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(hh<=tt && i-k+1>q[hh]){
            hh++;
        } 
        
        while(hh<=tt && arr[q[tt]]>=arr[i]){
            tt--;
        }
        
        q[++tt] = i;
        
        if(i>=k-1){
            cout << arr[q[hh]] << " ";
        }
        
    }
    cout << endl;
    
    memset(q,0,sizeof q);
    hh=0,tt=-1;
    
    for(int i=0;i<n;i++){
        if(hh<=tt && i-k+1>q[hh]){
            hh++;
        }
        
        while(hh<=tt && arr[q[tt]]<=arr[i]){
            tt--;
        }
        
        q[++tt] = i;
        
        if(i>=k-1){
          cout << arr[q[hh]] << " ";
        }
        

    }

    return 0;
}