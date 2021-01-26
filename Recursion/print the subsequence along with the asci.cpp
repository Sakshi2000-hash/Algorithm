#include<bits/stdc++.h>
#include<string.h>
#include <sstream>
using namespace std;
void subsequence(string s,string ans){

	if(s.length() == 0){
		cout<<ans<<endl;
		return;
	}
	char ch = s[0];
	int asci = ch;
    ostringstream str;       //make object of ostringstream
	 str<<asci;            //<<uske ander value aane k liye

	 string result = str.str();     //usko int ko string mein dalne k liye .str() use krna
	subsequence(s.substr(1),ans);
	subsequence(s.substr(1),ans+ch);
	subsequence(s.substr(1),ans+result);
}

int main(){
     string s;
     cin>>s;
     subsequence(s,"");
}
