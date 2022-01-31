#include<iostream>
#include<cmath>
using namespace std;

struct point{
	double x,y;
};
struct disk{
	point center;
	double r;
};
struct vector{
	double x,y,z;
};

point midpoint(point p, point q){
	point mp = {(p.x+q.x)/2, (p.y+q.y)/2};
	return mp;
}
vector sum(const vector &v1, const vector &v2){
	vector v3={v1.x+v2.x, v1.y+v2.y, v1.z+v2.z};
	return v3;
}
vector scalar(const vector &v, double a){
	vector v1={a*v.x, a*v.y, a*v.x};
	return v1;
}

double length(const vector &v){
	double l= sqrt(v.x*v.x+ v.y*v.y+ v.z*v.z);
	return l;
}

int main(){
	double t;
	vector u, a, v, s;
	cout<<"t = ";
	cin>>t;
	cout<<"u = ";
	cin>>u.x>>u.y>>u.z;
	cout<<"a = ";
	cin>>a.x>>a.y>>a.z;
	v=sum(u, scalar(a,t));
	s=sum(scalar(u,t), scalar(a, 0.5*t*t));

	cout<<"v = "<<v.x<<" "<<v.y<<" "<<v.z<<endl<<"s = "<<length(s)<<endl;

}