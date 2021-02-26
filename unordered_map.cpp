#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_map<int,int>mp;
	mp.insert(pair<int,int>(2,20));                      
	mp.insert(pair<int,int>(3,10));                      
	
	mp[4]=80;                                           
	
	
	cout<<mp.size()<<endl;   // 3
	
//	mp.clear();
	
	if(mp.empty())
	cout<<"Yes"<<endl;
	
	else
	cout<<"No"<<endl;
	
	for(auto it=mp.begin();it!=mp.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
	
	

	
	
	return 0;
}
