#include<bits/stdc++.h>
using namespace std;
#define int long long;

bool isSafe(int arr[][n],int n,int row,int col){
	for(int i = 0;i<row;i++){
		if(arr[row][col] == 1)
			return false;
	}

	int r = row;
	int c = col;
	while(r>=0 && c>= 0){
         if(arr[r][c] == 1)
         	return false;
         r--;c--;
	}
	while(r>=0 && c<n){
         if(arr[r][c] == 1)
         	return false;
         r--;c++;
	}
    return true;
}


bool nqueen(int arr[][n],int n,int row){

	if(row>=n){
		return true;
	}
	for(int i = 0;i<n;i++){
		if(isSafe(arr,n,row,i) == true){
			arr[row][i] = 1;
			if(nqueen(arr,n,row+1) == true)
				return true;
			arr[row][i] = 0;
		}
	}
	return false;
}
//C:\Users\SAKSHAM ASATI\Desktop\Sakshi\c++\Algorithm\Recursion\nqueen.cpp

signed main(){
   
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; ++i){
       for(int j = 0;j<n;j++){
       	  arr[i][j] = 0;
       }
    }
    if(nqueen(arr,n,0)){
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<n;j++){
           cout<<arr[i][j]<<" ";
    	}
    	cout<<endl;
    }
}
   
}