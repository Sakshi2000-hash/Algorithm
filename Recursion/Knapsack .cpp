#define <bits/stdc++.h>
using namespace std;
#define int long long;
int kanpsack(int w[],int v[],int n,int weight){
	if(n == 0|| weight = 0){
		return 0;
	}
	if(w[n-1]>weight)
		return kanpsack(w,v,n-1,weight);
	return max(kanpsack(w,v,n-1,weight-w[i])+value[n-1],kanpsack(w,v,n-1,weight));
}
signed main(){
	int n;
	cin>>n;
	int weight;
	cin>>weight;
	int w[n],v[n];
	for(int i = 0;i<n;i++){
		cin>>w[i]>>v[i];
	}
	cout<<kanpsack(w,v,n,weight);
}