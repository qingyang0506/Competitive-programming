#include<bits/stdc++.h>

using namespace std;
const int N = 100005;
int n;
int arr[N];

//method 1, get how many 1's in the x;
int get(int x){
    int num = 0;
    while(x){
        x = x&(x-1);
        num++;
    }
    return num;
}

//method 2 using lowbit method to get how many 1's in x
int lowbit(int x){
    return x&-x;
}



int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
        cout << get(arr[i]) << " ";
    }
    
    return 0;
}