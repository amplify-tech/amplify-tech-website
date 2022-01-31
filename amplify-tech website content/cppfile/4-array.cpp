#include<iostream>
#include<cmath>
using namespace std;

int main (){
int n;
cin>>n;
double P[n], V[n], PV[n] ,delta = 0.001;
bool valid=true;

cout<< "enter pressure "<<endl;
for (int i = 0; i < n; i++) {
	cin>>P[i];
}

cout<< "enter volume  "<<endl;
for (int i = 0; i < n; i++) {
	cin>>V[i];
}

for (int i = 0; i < n; i++) {
	PV[i] = P[i] * V[i];
}

double min = PV[0] , max= PV[0];
for (int i=0; i<n; i++){
	if(PV[i]< min) { min= PV[i]; }
	else{}
	if(PV[i]> max) { max= PV[i]; }
	else{}
}

valid= (max - min) < delta;
cout<<valid<<endl;

}
