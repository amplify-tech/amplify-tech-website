#include<iostream>
using namespace std;

int main(){
  int cube[3];
  cube[0]=0;
  cube[1]=1;
  cube[2]=8;

  double list1[]={4, 2.4, 58, -14, 2.356}; 
  double list2[5]={4, 2.4, 58, -14, 2.356};

  int n=4;        
  int squares[n];     //array of size n where n=4
  for(int i=0; i<=n; i++){
    squares[i]=i*i;
  }

  for(int i=0; i<=n; i++){
    cout<<squares[i]<<" ";
  }
}
