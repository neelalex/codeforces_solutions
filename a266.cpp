#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,count=0;
	string a; 
	cin>>n;
	cin>>a;
	for( i=0;i<a.size()-1;i++){
		if(a[i]==a[i+1])
			count++;
	}
	cout<<count;
}	