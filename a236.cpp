#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int count=0;
	cin>>s;
	vector<int> arr(26);
	for(auto it:s){
		arr[(int)it-97]++;
	}
	for(auto it:arr){
		if(it!=0)
			count++;
	}
	if(count%2==0)
		cout<<"CHAT WITH HER!";
	else 
		cout<<"IGNORE HIM!";
}