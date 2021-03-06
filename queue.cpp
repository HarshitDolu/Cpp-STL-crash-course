#include<bits/stdc++.h>

using namespace std;

int main(){
	
	queue<int>q;             
								
	q.push(4);    // enqueue                              // 4   5    3 
	q.push(5);
	q.push(3);
	q.pop();     //dequeue
	
	cout<<q.front()<<endl;                                //4
	    
	cout<<q.size();                           
	       
	cout<<q.back();																// 3
	
	
	if(q.empty())
	cout<<"Yes"<<endl;
	
	else
	
	cout<<"No"<<endl;
	return 0;
}
