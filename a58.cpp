#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int c=0;
	char ch[5]={'h','e','l','l','o'};
	cin>>s;
	for(auto it :s){
		if(it==ch[c])
			c++;
	}
	if(c==5)
		cout<<"YES";
	else
		cout<<"NO";

}
