// https://codeforces.com/contest/116/problem/A
#include<iostream>
#include<algorithm> //This header contains 2 methods, which can find the maximum and minimum value in a container.
using namespace std;
int main()
{
	int n, c=0;
	cin>>n;
	int passenger[n];
	for(int i=0;i<n; i++) //If the question contains summation notation, that means it got a series of addition. Which indicates that we might need to use loop.
	{
		int a=0, b=0;
		cin>>a>>b;
		c=c-a+b;
		passenger[i]=c;
	}
	auto max=max_element(passenger, passenger+n); //max_element() finds the largest element in a container and returns an iterator(pointer) which is pointing towards that element's address. As it returns an iterator, we set the datatype of the variable which is storing it as auto to find the datatype automatically. To find the smallest element, we got min_element().
	cout<<*max<<endl; //As the function returns a pointer, not the value, we need to dereference it to get the value.
	return 0;
}
