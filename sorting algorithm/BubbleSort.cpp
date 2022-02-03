#include<bits/stdc++.h>

using namespace std;


void BubbleSort(int *a,int len){
     
     for(int i = 0;i<len-1;i++){
         for(int j=0;j<len-1;j++){
             if(a[j]>a[j+1]){
                 swap(a[j],a[j+1]);
             }
         }
     }
}

int main(){

    int a[6] = {4,6,2,1,5,9};
    
    BubbleSort(a,6);
    
    for(int i=0;i<6;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}