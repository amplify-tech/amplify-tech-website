#include<iostream>
#include<string>
using namespace std;

int main(){
  int x;
  cout<<"Enter a number ";
  cin>>x;

  if(x < 0){
	cout<<x<<" is negative"<<endl;
  }
  else if (x<10){
	cout<<x<<" is single digit"<<endl;
  }
  else{
	cout<<x<<" is greater than 9"<<endl;
  }
}