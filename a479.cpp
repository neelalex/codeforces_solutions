#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int a,b,c,val;
	cin>>a>>b>>c;
	vector<int>arr;
	arr.push_back(a+b+c);
	arr.push_back((a+b)*c);
	arr.push_back(a*b*c);
	arr.push_back(a*(b+c));
	cout<<*max_element(arr.begin(),arr.end());
}