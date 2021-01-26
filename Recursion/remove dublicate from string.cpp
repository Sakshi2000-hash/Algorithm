#include<bits/stdc++.h>
using namespace std;

string remove_duplicte(string s){
	if(s.length() == 0){
		return "";
	}
    char s1 = s[0];
    string temp;
    temp = remove_duplicte(s.substr(1));
	if(s1 == temp[0]){
		return temp;
	}
	else{
		return(s1+temp);
	}
}

int main(){
	string s;
	cin>>s;
	cout<<remove_duplicte(s);
}
