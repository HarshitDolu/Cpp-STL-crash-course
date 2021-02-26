#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>v={3,1,2,5,6,0};
	
reverse(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";                  
	// 0 6 5 2 1 3
	cout<<endl;
	
	
	return 0;
}
