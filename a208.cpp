#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	int count=1,init=1;
	//s.append("  ");
	for(int i=0;i<s.size();){
		if(!(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')){
			if(count==0 && !init)
				cout<<" ";
			cout<<s[i];
			i++;
			count++;
			init=0;

		}
		else{
			i+=3;
			count=0;
		}

			
	}
}