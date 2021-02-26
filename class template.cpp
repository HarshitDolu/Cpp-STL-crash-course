#include<iostream>
using namespace std;

template<typename T>
class Pair{
	T x;
	T y;
	public:
	Pair(T a,T b){
		x=a;
		y=b;
	}
	T getfirst(){
		return x;
	}
	T getsecond(){
		return y;
	}
};
int main(){
	
	Pair<int>p1(3,5);

	cout<<p1.getfirst()<<" "<<p1.getsecond()<<endl;
	
	Pair<float>p2(3.5,7.8);
	cout<<p2.getfirst()<<" "<<p2.getsecond()<<endl;
	
	return 0;
}
