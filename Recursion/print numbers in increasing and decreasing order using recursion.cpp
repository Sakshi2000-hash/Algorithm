#include<bits/stdc++.h>
using namespace std;
#define int long long int
int decreasing(int n){
	if(n == 1){
            cout<<"1"<<endl;
           return 0 ;
	}

        cout<<n<<" ";
        decreasing(n-1);

}
int increasing(int n){


	if(n == 1){
        cout<<1<<" ";
        return 0;
	}


		increasing(n-1);
		cout<<n<<" "<<endl;


}

signed main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;

		decreasing(n-1);
		increasing(n-1);
		return 0;
	}
}
