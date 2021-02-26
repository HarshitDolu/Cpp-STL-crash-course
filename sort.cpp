#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>v={3,1,2,5,6,0};
	
	sort(v.begin(),v.end());        // ascending order
	
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";                   // 0 1 2 3 5 6
	
	cout<<endl;
	
	sort(v.begin(),v.end(),greater<int>());  // descending order            
	
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	
	return 0;
}
