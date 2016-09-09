#include<iostream>
using namespace std;

int main(){
  int a, b;
  cin>>a>>b;
  if(0<a<200&&0<b<200)
    cout<<a+b<<endl;
  else
    cout<<"Error\n";
  return 0;
}
