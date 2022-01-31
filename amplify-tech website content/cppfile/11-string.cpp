#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,c,d,e,f,g;
	a="akramkhan";
	string b(a);
	c=a;
	d=a.substr(2);
	e=a.substr(1,3);
	//string h=98;      //invalid . missing ""

	char x;
	x=b[7];

	int i=a.find("rtk45rj");

	cin>>f;
	g=a+ "567"+ f;

	cout<<f<<" "<<a<<" "<<b<<" "<<c<<endl;
	cout<<d<<" "<<e<<" "<<g<<endl;
	cout<<x<<" "<<i<<" "<<(f==a)<<endl;


}