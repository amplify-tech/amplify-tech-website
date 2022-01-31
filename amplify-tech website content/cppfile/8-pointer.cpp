#include<iostream>
#include<cmath>
using namespace std;

void exchange(double &m,double &n){    //passed by refrence
	double temp=m;
	m=n;
	n=temp;
}

void ctop(double x, double y, double* pr, double* pangl){   //using pointer
	*pr = sqrt(x*x + y*y);
	*pangl= atan(y/x);
	if(x<0 && y>=0) *pangl=*pangl +3.14;
	if(x<0 && y<0) *pangl=*pangl -3.14;
	else{}
}
void ctop2(double x, double y,double &r ,double &angl){     //passed by refrence
	r=sqrt(x*x + y*y);
	angl= atan(y/x);
	if(x<0 && y>0) angl=angl +3.14;
	if(x<0 && y<0) angl=angl -3.14;
	else{}
}

int main(){
	double x,y,radius,theta,radius2,theta2;
	cin>>x>>y;

	ctop(x,y,&radius, &theta);
	cout<<radius<<" "<<theta<<endl;

	ctop2(x,y,radius2,theta2);
	cout<<radius2<<" "<<theta2<<endl;
	
}