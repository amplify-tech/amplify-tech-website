#include<iostream>
#include<cmath>
using namespace std;

class v3{
	double tt;
public:
	double x,y,z;

	v3(){
		x=y=z=0;
	}
	v3(double a){
		x=y=z=a;
	}
	v3(double a, double b, double c): x(a) , y(b), z(c) {} ;       //new syntex ,,Member Initializer List 

	v3(const v3 &source){           //copy constructor.
		x=source.x;
		y=source.y + 4;
	}
	v3 operator+(v3 &b){
		return v3(x+b.x, y+b.y, z+b.z);
	}
	v3 operator*(double t){
		return v3(x*t, y*t, z*t);
	}
	double operator-(double r){
		return sqrt(x*x + y*y + z*z);
	}
};

int main(){
	//v3 v1,v3,v4(5),v5(1,2,3);    //v1() gives error,,, v3 is valid
	v3 v1(8,2,1), v4={1,6,7};
	v3 v2(v1);                     //my copy constructor .... not every member is copied.
	v2.z=15;
	v3 v5=v4;                      //my copy constructor .... not every member is copied. 
	//v5.z=10;  

	cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<" "<<endl;
	cout<<v2.x<<" "<<v2.y<<" "<<v2.z<<" "<<endl;
	cout<<v4.x<<" "<<v4.y<<" "<<v4.z<<" "<<endl;
	cout<<v5.x<<" "<<v5.y<<" "<<v5.z<<" "<<endl;

	v3 v6=v1+v4;
	cout<<v6.x<<" "<<v6.y<<" "<<v6.z<<" "<<'\n';
	v3 v7=v1*4;
	cout<<v7.x<<" "<<v7.y<<" "<<v7.z<<" "<<endl;

	cout<<(v1+v4).x<<endl;
	v3 v8=v1;
	cout<<v8.x<<" "<<v8.y<<" "<<v8.z<<" "<<endl;
	cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<" "<<endl;


}