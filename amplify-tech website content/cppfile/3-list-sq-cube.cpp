#include<iostream>
using namespace std;

int main (){
cout<<"enter a no. ";
int n;
cin>>n;
int i=1 , sq=1;
cout<< "list of sqaure no. is "<<endl;
while (i<=n){     // sq = i*i         // loop invarient
	
	cout<<sq<<endl;
	sq=sq + 2*i + 1;
	i++;
	//cout<<i<<" "<<sq<<endl;
}

i=1 ; sq=1;
int  cube = 1;
cout<< "list of cube no. is "<<endl;
while(i<=n){
	cout<<cube<<endl;
	cube= cube + 3 * sq + 3 * i + 1;
	sq = sq + 2*i + 1;
	i++;
	//cout<<i <<" "<<sq<< " "<< cube<<endl;           //for debugging
}



}
