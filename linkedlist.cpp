#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// singly LL
	
	forward_list<int>l1={2,5,6,7};
	
	cout<<l1.front()<<endl;
	
	forward_list<int>l2;
	l2.assign({3,4,5,6});
	
	l2.push_front(4);
	
	for(auto it=l1.begin();it!=l1.end();it++)
	cout<<*it<<" ";
	// Doubly LL
	
	list<int>l3={4,5,6,8};
	cout<<l3.front();
	cout<<l3.back();
	
	cout<<l3.push_front(9);
	cout<<l3.push_back(6);
	l3.remove(6)
		
	for(auto it=l3.begin();it!=l3.end();it++)
	cout<<*it<<" ";
	
	
	return 0;
}
