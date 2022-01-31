#include<iostream>
#include<string>
using namespace std;

int main(){
  string name,firstname,lastname,sub1,sub2;
  firstname="Amplify";
  lastname = "Tech";
  name = firstname + " " + lastname;

  string copied(name);      //copy copied = name

  char cc = name[1];
  sub1=name.substr(2);
  sub2=name.substr(1,3);

  int i=name.find("pli");
  int l=name.length();

  cout<<name<<endl;
  cout<<copied<<endl;
  cout<<sub1<<endl;
  cout<<sub2<<endl;
  cout<<i<<endl;
  cout<<l<<endl;
  cout<<cc<<endl;
}