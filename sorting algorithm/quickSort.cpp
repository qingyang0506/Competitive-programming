#include<bits/stdc++.h>

using namespace std;

void quickSort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quickSort(q, l, j), quickSort(q, j + 1, r);
}

int main(){


    int q[6] = {4,3,1,5,9,6};
    
    quickSort(q,0,6);

    for(int i=0;i<6;i++){
        cout << q[i] << " ";
    }
    cout << endl;

    return 0;
}