#include<iostream>
#include<string.h>
using namespace std;

void halfOf(char s[]);
int counter=0;
int main(){
  int t;
  char hello[100];
  cout<<"enter the number of test cases: \n";
  cin>>t;
  char c[201];
  while(t>0){
    cin>>c;
    hello[]= halfOf(c);
    t--;
  }

  for(int i =0;i<counter;i+2){
    cout<<hello[i]<<endl;
  }
  return 0;
}
void halfOf(char s[]){
  char hell[100];
  int half = strlen(s)/2;
  while(counter<half){
    hell[counter]=s[counter];
    counter+=2;
  }
  cout<<endl;
  return hell[];
}
