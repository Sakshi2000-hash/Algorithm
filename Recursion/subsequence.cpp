#include<bits/stdc++.h>
using namespace std;

void subsequence(string s,string ans){
	if(s.length() == 0){
		cout<<ans<<endl;
		return;
	}
	char ch = s[0];
	//cout<<ch<<" ch ";
	string res = s.substr(1);
	//cout<<1<<endl;
	subsequence(res,ans);
	//cout<<2<<endl;
	subsequence(res,ans+ch);
}
signed main(){
	string s;

	cin>>s;

	subsequence(s,"");
}
