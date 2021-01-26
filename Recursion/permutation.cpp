#include<bits/stdc++.h>
using namespace std;
#define int long long
void permutation(string s,string res){
	if(s.length() == 0){
		cout<<res<<endl;
		return;
	}
	char ch;
	string resultant;
	for(int i = 0;i<s.length();i++){
		ch = s[i];
       resultant = s.substr(0,i) + s.substr(i+1);
       permutation(resultant,res+s[i]);
	}
}

signed main(){
	string s;
	cin>>s;
	permutation(s," ");
}
