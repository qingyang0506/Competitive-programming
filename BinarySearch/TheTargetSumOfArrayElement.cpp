//find the target Sum of array element
// the input is :4 5 6
//              1 2 4 7
//              3 4 6 8 9
#include<bits/stdc++.h>

using namespace std;

const int N = 100005;

int a[N],b[N];
int n,m,k;

int main(){
    
    cin >> n >> m >> k;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    
    int l1=0;//the pointer for the first array
    int l2 = m-1;//the pointer for the second array
    
    while(l1<n && l2>=0){
        if(a[l1]+b[l2]==k){
            cout << l1 << " "<< l2<< endl;
            exit(0);
        }else if(a[l1]+b[l2]>k){
            l2--;
        }else{
            l1++;
        }
    }
   
    return 0;
}