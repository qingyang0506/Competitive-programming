#include<bits/stdc++.h>

using namespace std;

void merge(int* a,int left,int mid,int right){
     int t[right-left+1];
     int temp =0;

     int l = left;
     int r = mid+1;

     while(l<=mid && r<=right){
         if(a[l]<=a[r]){
             t[temp++] = a[l++];
         }else{
             t[temp++] = a[r++];
         }
     }

     while(l<=mid){
         t[temp++] = a[l++];
     }

     while(r<=right){
         t[temp++] = a[r++];
     }

     for(int i=left,j=0;j<right-left+1;i++,j++){
           a[i] = t[j];
     }
}

void mergesort(int* a,int left,int right){
     if(left>=right){
         return;
     }

     int mid = (left+right) >> 1;

     mergesort(a,left,mid);
     mergesort(a,mid+1,right);
     merge(a,left,mid,right);
}

int main(){


    int a[8] = {5,2,9,1,6,7,0,4};

     mergesort(a,0,7);
    
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}