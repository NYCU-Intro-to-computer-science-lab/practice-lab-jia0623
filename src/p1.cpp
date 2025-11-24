#include <iostream>
using namespace std;
int calculate(int opcode,int num1, int num2){
  if (opcode==1){
    return num1+num2;
  }
  else if(opcode==2){
    return num1-num2;
  }
  else if(opcode==3){
    return num1*num2;
    }
  else{
    return num1/num2;
  }
}
int main()
{
  int a,b,c;
  while (cin>>a>>b>>c){
  cout<<calculate(a,b,c)<<endl;
  }
  
    return 0;
}
