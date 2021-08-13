#include <bits/stdc++.h>
using namespace std;

 int factorial(int n){
    if(n == 1){
        return n;
    }
    int fact1 = factorial(n-1);
    int fact2 = n*fact1;
    return fact2;
}





int main(){
    int n;
   cin >>n;
   cout<<factorial(n);

    return 0;
}