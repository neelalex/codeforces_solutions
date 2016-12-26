#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int x;
	cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	x=a.compare(b);
	x<0?cout<<-1:x>0?cout<<1:cout<<0;
}