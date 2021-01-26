#include<bits/stdc++.h>
using namespace std;

#define int long long int
bool check_sorted(int arr[],int n){
	if(n == 1)
		return true;
	else
	{
		return (arr[0]<arr[1] && check_sorted(arr+1,n-1));
		/* code */
	}
}

signed main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		if(check_sorted(arr,n))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

	}
}
