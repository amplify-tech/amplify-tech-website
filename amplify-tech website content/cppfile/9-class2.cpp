#include<iostream>
using namespace std;

class test{
	static int count;
public:
 double a,b,c;
 
	test(){
		count++;
		cout<<count<<" object created"<<endl;
	}
	~test(){                                       //destructor
		cout<<count<<" object destroyed"<<endl;
		count--;
	}
};
int test::count=0;

int main(){
	test t1;
	t1.a=1;
	t1.b=5;
	t1.c=8;
	{
		cout<<"block1"<<endl;
		test t2,t3;
		t3.b=9;
		cout<<t3.b<<endl;
		cout<<"exit block1"<<endl;
	}

	cout<<t1.b<<endl;
	cout<<"exit main"<<endl<<endl;

}