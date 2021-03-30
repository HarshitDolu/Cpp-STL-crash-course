#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	vector<int>v={1,2,3,6,8};
	
	if(binary_search(v.begin(),v.end(),3))      // binary_search([begin index],[end index],<element to be searched>)
    	{
	    cout<<"Element is present"<<endl;
    	}	
	else
	{
	    cout<<"element is not present"<<endl;
	}
	return 0;
}
