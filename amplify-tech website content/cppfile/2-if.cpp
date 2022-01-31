#include<iostream>
using namespace std;

int main (){
cout<< "enter a no. ";
double j;
cin>>j;
if (j<10 && j>0) {
cout<< j + 1<<endl;
}
else if (j == 100) {   //j=0 always true
cout<< 2 * j<<endl;
}
else {cout<< j<<endl;
}

bool b;
b=(j != 0) ;  //see what happen
cout<<b<<endl;
}
