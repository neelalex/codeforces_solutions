#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int flag=0;
	for(int i=0,j=s2.size()-1;i<s1.size() ;i++,j--){
		if(s1[i]!=s2[j])
			flag=1;
	}
	if(flag==1)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}