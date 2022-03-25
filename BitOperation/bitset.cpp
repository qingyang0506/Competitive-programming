#include<bits/stdc++.h>

using namespace std;

vector<int> v1 {1,2,3,4,5};
    vector<int> v2 {4,5,6,7,8};

     bitset<15> A;//v1;
     bitset<15> B;//v2;

   //将v1，v2分别放入A，B中
    for(int i=0;i<v1.size();i++){
        A[v1[i]]=1;//A: 000000000111110
    }

    for(int i=0;i<v2.size();i++){
        B[v2[i]]=1;//B: 000000111110000
    }

    //取交集
     bitset<15> C;
     
    C = A & B; // C中只有4，5index值为1, 000000000110000

    for(int i=0;i<15;i++){
        if(C[i]==1){
            cout << i << " ";//4 5
        }
    }
    cout << endl;

     //取并集
    bitset<15> D;
    
    D = A | B;//D中1-8的index值均为1, 000000111111110

     for(int i=0;i<15;i++){
        if(D[i]==1){
            cout << i << " ";// 1 2 3 4 5 6 7 8
        }
    }
    cout << endl;


    //取差集
    bitset<15> E;
    
    E = A ^ (A & B) ;// A/B = A-(A交B), 000000000001110

     for(int i=0;i<15;i++){
        if(E[i]==1){
            cout << i << " ";// 1 2 3
        }
    }
    cout << endl;

    cout << E << endl;


     //取对称差
    bitset<15> F;
    
    F = A ^ B ;// A并B-A交B  000000111001110

     for(int i=0;i<15;i++){
        if(F[i]==1){
            cout << i << " ";// 1 2 3 6 7 8
        }
    }
    cout << endl;
    