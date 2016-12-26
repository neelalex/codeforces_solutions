#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i,count=0;
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	for(i=0;i<s.size();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
			continue;
		}
		cout<<'.'<<s[i];


	}
cout<<'\n';
}
