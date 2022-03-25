#include<bits/stdc++.h>

using namespace std;

//input 5
//      3 4 2 7 5
//output -1 3 -1 2 2

//输出每个数左边最近的比他小的数，如果没有的话输出-1
const int N = 100005;

int st[N],tt;
int arr[N];
int n;

int main(){
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        while(st[tt]>=arr[i]){
            tt--;
        }
        
        if(tt){
            cout << st[tt] << " ";
        }else{
            cout <<  -1 <<" ";
        }
        
        st[++tt] = arr[i];
    }    
    return 0;
}