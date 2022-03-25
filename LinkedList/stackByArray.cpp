#include<bits/stdc++.h>

using namespace std;

const int N = 100005;

int st[N],tt;

int n;

//使用数组模拟栈
int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s=="push"){
            int x;
            cin >> x;
            st[++tt] =x;
        }else if(s=="pop"){
            tt--;
        }else if(s=="query"){
            cout << st[tt] << endl;
        }else{
            if(tt){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}