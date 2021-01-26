#include<bits/stdc++.h>
using namespace std;
# define int long long int
int factorial(int n){
      if(n <=1)
        return 1;
      else
        return n*factorial(n-1);
}
signed main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        cout<<factorial(n)<<endl;
    }
}
