#include<iostream>
using namespace std;

int main (){
cout<<"enter a no. ";
int n;
cin>>n;

int divisor=2;
bool prime = true;

while (prime && divisor < n){
	prime = (n % divisor != 0) ;
	divisor++;
}

if ( n <= 1) {
	cout<< "neither a prime nor composite"<<endl;
}
else if (prime){
	cout<<"prime " <<prime <<"  last divisor checked is  "<< divisor - 1<<endl;
}
else {
	cout<<"composite " <<prime <<"  last divisor checked is  "<< divisor - 1<<endl;
}


}
