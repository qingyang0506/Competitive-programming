//1.longest continuous non-repeating subsequence
// input is a array 5 6 4 2 5 1 2 4 3 1
#include<bits/stdc++.h>

using namespace std;

const int N = 100005;

int arr[N];
int s[N];
int n;

int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    
    int ans = 0;
    
    int l = 0;
    
    for(int i=0;i<n;i++){
        while(s[arr[i]]){
            s[arr[l++]]--;
        }
        
        s[arr[i]]++;
        
        ans= max(ans,i-l+1);
    }
    
    cout << ans << endl;
    
    return 0;
}

