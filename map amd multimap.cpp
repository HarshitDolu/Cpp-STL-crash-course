#include<bits/stdc++.h>
using namespace std;

int main(){
	
	map<int,int>mp;
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
	
	
	/* problem : Given elements count frequency of each element*/
	
	cout<<"Problem solution"<<endl;
	
	vector<int>given_elements={20,20,10,10,10,5,2,2};
	
	map<int,int>mpp;                                          
	for(int i=0;i<given_elements.size();i++)				
	
	mpp[given_elements[i]]++;
	
	
		for(auto it=mpp.begin();it!=mpp.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
	
	
	return 0;
}
