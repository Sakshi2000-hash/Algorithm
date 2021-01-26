#include<bits/stdc++.h>
using namespace std;
#define int long long int

int fabonicci(int n){
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fabonicci(n-1) + fabonicci(n-2);
}
 signed main(){
 int t;
 cin>>t;
 while(t--){
 	int n;
 	cin>>n;
 	cout<<fabonicci(n)<<endl;
 }

}
