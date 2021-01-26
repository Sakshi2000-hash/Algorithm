#include<bits/stdc++.h>
using namespace std;
#define int long long int

int calculate_power(int num,int pow){
	if(pow <=0){
		return 1;
	}
	else{
		return num*(calculate_power(num,pow-1));
	}
}

signed main(){
	int t;
	cin>>t


	;
	while(t--){
		int num,pow;
		cin>>num>>pow;
		cout<<calculate_power(num,pow);
	}
}
