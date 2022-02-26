#include<bits/stdc++.h>

using namespace std;

void down(int* a,int root,int n){
     int largest=root;

     if(2*root+1<n && a[2*root+1]>a[largest]){
         largest = 2*root+1;
     }

     if(2*root+2<n && a[2*root+2]>a[largest]){
         largest = 2*root+2;
     }

     if(largest!=root){
         swap(a[root],a[largest]);
         down(a,largest,n);
     }
}

int main(){

   int a[8]= {5,2,9,1,6,7,0,4};

   for(int i=4;i>=0;i--){
       down(a,i,8);
   }

   int size = 8;
   while(size){
       swap(a[size-1],a[0]);
       size--;
       down(a,0,size);
   }

   for(int i=0;i<8;i++){
       printf("%d ",a[i]);
   }

   printf("\n");

    return 0;
}