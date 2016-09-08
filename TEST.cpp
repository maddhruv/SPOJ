#include<iostream>
using namespace std;

int main(){
  int i=0,j,l[100];
  cout<<"Enter the "<<i+1<<" number: ";
  cin>>l[i];
  while(l[i]!=42){\
    i++;
    cout<<"Enter the "<<i+1<<" number: ";
    cin>>l[i];
  }
  for (j=0;j<i;j++){
    cout<<l[j]<<endl;
  }
  return 0;
}
