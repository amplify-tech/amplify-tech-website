#include<iostream>
using namespace std;

int main(){
	cout<<"enter three no. "<<endl;
double a,b,c,d;
cin>>b>>c;
while (cin>> d){
	a=b;
	b=c;
	c=d;
	// cin>>c;
	cout<<"sum of last three no. is = "<<a+b+c<<endl;
}
}																									