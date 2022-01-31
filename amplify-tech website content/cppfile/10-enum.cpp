#include<iostream>
using namespace std;

enum {zero, one, two, three};
enum color {red, white, green, y};
enum month{jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
enum result{best=100 , vgood=90, good=80, ok=50, fail=10 };

int main(){
	color c1=green;
	int sx= one, px=three;
	int dx=sx+px;

	cout<<sx<<" "<<px<<" "<<dx<<endl;

	// char p=y;
	// color c1=p;                             //invalid conversion.
	if(c1==red ) cout<<"my fav"<<endl;
	else if(c1==green) cout<<"i like it "<<endl;
	else cout<<"okay"<<endl;

	cout<<three<<" "<<c1<<" "<<green<<" "<<may<<" "<<good<<endl;

	bool b= (px==mar);                        //valid
	//bool b1= (two==green);                  // invalid 
	cout<<b<<endl;

	result jee=result(6);
	cout<<jee<<endl;

	string s="mar";
	//month m1=s;                // invalid
	month m1=mar;
	cout<<m1<<endl;

}
