#include <bits/stdc++.h>
using namespace std; 

int toh(int N,int from, int to,int aux){
    static int steps = 0;
    if(N>0){
        toh(N-1,from,to,aux);
        steps++;
        toh(N-1,aux,from,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    }
    return steps;
    
}



int main(){
    // int steps= 0;
    cout<<toh(2,1,2,3)<<endl;
    // toh(2,1,2,3,steps);
    // cout<<steps;

    
}