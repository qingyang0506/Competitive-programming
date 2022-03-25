#include<bits/stdc++.h>

using namespace std;

const int N = 100005;

int q[N],hh,tt = -1;

int n;


//数组模拟队列
int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s=="push"){
           int x;
           cin >> x;
           q[++tt] =x;
        }else if(s=="pop"){
            hh++;
        }else if(s=="query"){
            cout << q[hh] << endl;
        }else{
            if(hh<=tt){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}