#include<bits/stdc++.h>
using namespace std;

string remove_x(string s){
	if(s.length() == 0){
		//cout<<remain<<endl;
		return "";
	}

	char ch = s[0];
	string remain = remove_x(s.substr(1));
	if(ch == 'x'){
		return(remain+ch);
	}
	return ch+remain;
}
int main(){
	string s;
	cin>>s;
	cout<<remove_x(s);
}
