#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int sumn(int n){
	if(n<10) return n;
	else return sumn(sumn(n/10) + n%10);
}

bool div9(int n){
	if (n<10) return n==9;
	else return div9(sumn(n));
}

long double fac(int n){
	if (n<=1) return 1;
	else return n*fac(n-1);
}

int main(){
cout<<"enter a no. = ";
int a;
cin>>a;
cout<<"sum of the digits is "<<sumn(a)<<endl<<"divisible by 9 "<<div9(a)<<endl;
cout<<"factorial of the no. is "<<fac(a)<<endl;
}