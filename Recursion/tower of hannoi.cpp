#include<bits/stdc++.h>
using namespace std;

void tower_of_hannoi(int n,char source,char destination ,char help){
	if(n == 1){
         cout<<"from "<<source<<"to "<<destination<<endl;
         return;

	}
	cout<<1<<endl;
	tower_of_hannoi(n-1,source,help,destination);
	cout<<"from "<<source<<"to "<<destination<<endl;
	cout<<2<<endl;
    tower_of_hannoi(n-1,help,destination,source);
    cout<<3<<endl;
}



signed main(){
	int n = 4;
	tower_of_hannoi(n,'s','d','h');
}
