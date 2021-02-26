#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>v={3,1,2,5,6,0};
	
auto it= max_element(v.begin(),v.end());
cout<< *it<<endl;                      //6

auto itr=min_element(v.begin(),v.end());
cout<< *itr<<endl;                            //0
	
	return 0;
}
