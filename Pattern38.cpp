/*
		1
	   1 2
	  1 2 3
	 1 2 3 4
	1 2 3 4 5
	 1 2 3 4
	  1 2 3
	   1 2
		1
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=5;i++){
		for(j=1;j<=i+1;j++){
			cout<<" ";
		}
		for(j=1;j<=5-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}