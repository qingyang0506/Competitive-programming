#include<bits/stdc++.h>

using namespace std;

int n;
const int N = 200005;
int a[N];//原数组
int tr[N];//树状数组

int lowbit(int x){
    return x&-x;
}



//在数组x的位置加上c
void add(int x,int c){
    for(int i=x;i<=n;i+=lowbit(i)){
        tr[i]+=c;
    }
}

//查询从1到x的前缀和
int sum(int x){
    int res= 0;
    for(int i=x;i!=0;i-=lowbit(i)){
        res+=tr[i];
    }
    
    
    return res;
}


//使用树状数组还可以求出一个数组中每个数其前面比自己大和小的数的个数和其后面的比自己大和小的个数，
//且时间复杂度为O(nlogn)，而不是O(n^2)。
//根据这个我们还可以求出数组每个数数组中比其大的数量和比他小的数量
//需要注意的一点，树状数组的使用必须是从下表1开始的

int main(){
    
    int a[] = {0,1,4,5,3,2,5,7,8,5,6};

    int Greater[N],lower[N];

    n = 10;


    memset(Greater,0,sizeof Greater);
    memset(lower,0,sizeof lower);

    //正着来一遍
    for(int i=1;i<=n;i++){

        int y  = a[i];
        Greater[i] = sum(n)-sum(y);
        lower[i] = sum(y-1);
        add(y,1);
    }

     //clear tr array
     memset(tr,0,sizeof tr);

    //反着来一遍
    for(int i=n;i!=0;i--){
        int y = a[i];
        Greater[i] += sum(n)-sum(y);
        lower[i] += sum(y-1);
        add(y,1);
    }
    

    for(int i=1;i<=n;i++){
        printf("g:%d  l:%d\n",Greater[i],lower[i]);
    }


    return 0;
}