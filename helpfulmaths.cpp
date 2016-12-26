#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int x=0,i;
	vector <int>arr;
	for(i=0;i<a.size();i++){
			if(a[i]=='+'){
				arr.push_back(x);
				x=0;
				continue;
			}
			x=x*10+ (a[i]-'0');
			
	}
	arr.push_back(x);
sort(arr.begin(),arr.end());
	for(i=0;i<arr.size()-1;i++)
		cout<<arr[i]<<"+";
	cout<<arr[i];


}