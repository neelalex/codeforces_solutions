#include<bits/stdc++.h>
using namespace std;
int main(){
	int flag=0;
	string a;
	cin>>a;
	for(auto it : a){
		if(it=='H'||it=='Q'||it=='9'){
				flag=1;
		}
	}
	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";
}