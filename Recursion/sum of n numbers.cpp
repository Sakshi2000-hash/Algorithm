#include<bits/stdc++.h>
using namespace std;
#define int long long int

int sum(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + sum(n-1);
	}
}


signed main(){
	int n,t;
	cin>>t;
	while(t--){
	cin>>n;
	cout<<sum(n)<<endl;
}
}
