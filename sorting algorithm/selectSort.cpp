#include<bits/stdc++.h>

using namespace std;


void selectSort(int *a,int len){
     
     for(int i=0;i<len-1;i++){
          int index = i;
          for(int j = i;j<len;j++){
              if(a[j]<a[index]){
                  index=j;
              }
          }
          swap(a[index],a[i]);
     }
}

int main(){

    int a[6] = {4,6,2,1,5,9};
    
    selectSort(a,6);
    
    for(int i=0;i<6;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}