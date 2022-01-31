#include<iostream>
using namespace std;

int main(){
  int n=5;

  cout<<"while loop :-"<<endl;

  int j=1;
  while(j<=n){
      cout<< j*j <<endl;
      j++;
  }

  cout<<"for loop :-"<<endl;

  for(int i=1; i<=n; i++){
      cout<< i*i <<endl;
  }
}