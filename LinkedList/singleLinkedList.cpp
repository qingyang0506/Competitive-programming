#include<bits/stdc++.h>

using namespace std;

//使用邻接表来表示链表

const int N = 100005;
int head=-1,e[N],ne[N],idx;

void add_to_head(int x){
     e[idx] = x;
     ne[idx]= head;
     head = idx++;
}

//删除第k个节点，这个k是idx==k的节点
void remove(int k){
    ne[k] = ne[ne[k]];
}

//在idx=k的节点后面，加上一个节点
void add(int x,int k){
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

