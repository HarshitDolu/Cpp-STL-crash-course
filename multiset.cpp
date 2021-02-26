#include<bits/stdc++.h>
using namespace std;

int main(){
	
	multiset<int>s;                  
	
	s.insert(10);
	s.insert(8);                   // {1,2,8,10,10} 
	s.insert(1);
	s.insert(2);
	s.insert(10);
	
	cout<<s.size()<<endl;   // 5  
	
	auto it=s.find(8);
	if(it!=s.end())
	cout<<"Present"<<endl;
	
	int count=s.count(10);   // 2
	
	s.erase(10);                   // {1,2,8}
	
	cout<<count<<endl;
	
	for(auto it=s.begin();it!=s.end();it++)
	cout<<*it<<endl;
	
	s.clear();
	if(s.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	
}
