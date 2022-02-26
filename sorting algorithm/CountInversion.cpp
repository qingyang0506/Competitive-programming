#include<bits/stdc++.h>

using namespace std;

int merge(int* a,int left,int mid,int right){
     int cnt=0;
     int t[right-left+1];
     int temp=0;

     int l = left;
     int r = mid+1;
     
     while(l<=mid && r<=right){
         if(a[l]<=a[r]){
             t[temp++] = a[l++];
         }else{
             t[temp++] = a[r++];
             cnt+=(mid+1-l);
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
     

     return cnt;
}

//this method will count how many inversions in the target array
int mergeSort(int* a,int left,int right){
    int count=0;
    
    if(left>=right){
        return count;
    }

    int mid = (left+right)>>1;
    count+= mergeSort(a,left,mid);
    count+= mergeSort(a,mid+1,right);
    count+= merge(a,left,mid,right);
    return count;
}

int main(){

    int a[8]={5,2,9,1,6,7,0,4};

    printf("%d\n",mergeSort(a,0,7));

    return 0;
}