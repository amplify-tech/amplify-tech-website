#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

class point{
public:
	double x,y;

	double distance()const {
		return sqrt(x*x +y*y);
	}
	bool operator<( point& p){
		return x< p.x && y< p.y;
	}
};

int main(){                                         
	
point p1={2,13}, p2={4,5}, p3={78,5} , p4={5,56} ;
cout<< (p1<p2) <<endl ;

map<point, double> ptod;                          //error how to use user defined class as key
typedef map<point, double>::iterator nx;

ptod[p1]=4;

//ptod.insert(make_pair(p1,5));
//ptod.insert({p2,10});

 // ptod.begin()->first= p1;
 // ptod.begin()->second= 5;
//ptod[p2]=15;

//cout<< ptod.begin()->second <<endl;

}

