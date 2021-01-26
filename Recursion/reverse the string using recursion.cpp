#include<bits/stdc++.h>
using namespace std;

void reversea(string s){
    if(s.length() ==0){
        return;
    }
   reversea(s.substr(1));
   cout<<s[0];
}


int main(){
	string s;
	cin>>s;
	reversea(s);
}
