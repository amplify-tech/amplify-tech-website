#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<double> a;
	vector<char> b(4);
	vector<char> c(5,'T');
	vector<double> d(3);

	d[0]=2;
	d[1]=9;
	d[2]=6;

	c[1]='t';
	c[2]='U';
	c[3]='u';
	c[4]='4';
	sort(c.begin(), c.end());

	a.resize(10);
	for (int i=0; i<10; i++){
		a[i]= i*i;
	}
	a.push_back(14);
	a.push_back(58); 

	 // a=d;          //valid ,,only vector type should match
	 d=a;             //valid 

	int x=a.size(), y=b.size(),z=d.size() ;

	for(int i=0; i<x; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	for(int i=0; i<y; i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;

	for(size_t i=0; i<c.size(); i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;

	for(int i=0; i<z; i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;

	double array[5]={87,56,2.3,45,574.36};
	sort(array,array+5);                       //need the algorithm header file

	for(int i=0; i<5; i++){
		cout<<array[i]<<" ";
	}

	cout<<endl<<x<<" "<<y<<" "<<c.size()<<" "<<z<<endl<<endl;

}