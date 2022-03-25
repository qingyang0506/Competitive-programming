#include<bits/stdc++.h>

using namespace std;

//使用邻接表实现双链表
int e[N],l[N],r[N],idx;

void init(){
    l[1] = 0;
    r[0] = 1;
    idx = 2;
}

void add(int k,int x){
    e[idx]=x; r[idx] = r[k]; l[idx] = k; r[k] = idx; l[r[idx]] = idx ; idx++; 
}

void remove(int k){
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}