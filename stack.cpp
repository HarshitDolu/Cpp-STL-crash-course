#include<bits/stdc++.h>

using namespace std;

int main(){
	
	stack<int>s;   
								// 4  5  3
	s.push(4);
	s.push(5);
	s.push(3);
	
	cout<<s.top()<<endl;    // 3
	cout<<s.size();        // 3
	s.clear();          
	
	if(s.empty())
	cout<<"Yes"<<endl;
	
	else
	
	cout<<"No"<<endl;
	return 0;
}
