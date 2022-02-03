#include<bits/stdc++.h>

using namespace std;

void insertionSort(int *a,int len){
      
      for(int i=1;i<len;i++){
          int cur = a[i];
          int index = i-1;
          
          while(index>=0 && cur<a[index]){
              int t = a[index];
              a[index+1] = t;
              index--;
          }

          a[index+1] = cur;
          
      }


}

int main(){
    
    int a[6]= {4,3,1,2,5,9};
    
    insertionSort(a,6);

    for(int i=0;i<6;i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}