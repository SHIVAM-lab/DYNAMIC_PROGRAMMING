#include<iostream.h>
#include<bits?stdc++.h>
using namespace std;
 int findMin(int T,int N,int S[]){
     sort(S,S+N);
     int a=INT_MAX;
     for(int i=0;i< N-1;i++){
      if (S[i+1]-S[i]<a)
       a = S[i+1]-S[i]<a;
     }
 return a;    
 }

int main(){
    int T,N;
    cin >> T;
    cin >>N;
    int S[N];
     cin >>S;
    cout << findMin(T,N,S[])<<\n;

}
