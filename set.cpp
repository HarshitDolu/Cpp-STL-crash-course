#include<bits/stdc++.h>
using namespace std;

int main(){
	
	set<int>s;                  //  {10,8,1,2} => {1,2,8,10} 
	
	s.insert(10);
	s.insert(8);
	s.insert(1);
	s.insert(2);
	s.insert(10);
	
	cout<<s.size()<<endl;   // 4
	
	auto it=s.find(8);
	if(it!=s.end())
	cout<<"Present"<<endl;
	
	int count=s.count(1);  // return 1
	
	cout<<count<<endl;
	
	for(auto it=s.begin();it!=s.end();it++)
	cout<<*it<<endl;
	
	s.clear();
	if(s.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	
}
