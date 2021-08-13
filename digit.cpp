#include <bits/stdc++.h>
using namespace std;

 int digit(int n){ // 7846 //14
 int count = 0;
    while(n--){
        n = n/10;
        ++count;
    }
     return count;
}





int main(){
    int n;
   cin >>n;
   cout<<digit(n);

    return 0;
}