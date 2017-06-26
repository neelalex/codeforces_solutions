#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	string s;
	int n,i,x=0;
	cin>>n;
	while(n--){
		cin>>s;

		for(i=0;i<s.size();i++){
			if(s[i]=='+'){
				x++;
				break;
			}
			if(s[i]=='-'){
				x--;
				break;
			}
		}
	}
	cout<<x<<"\n";
	return 0;
}