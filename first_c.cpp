#include <iostream>
using namespace std;
string XO(int IO){
 if(IO==0){
   return "0";
 }else if(IO==1){
   return "1";
 }else if(IO==-1){
   return "X";
 }else{
   return "Z";
 }
}
void plot2(int *input){
  string output2;
  for(int i=0;i<5;i++){
    output2+="=";

  }
  output2+="Kmap";
 for(int i=0;i<5;i++){
    output2+="=";

  }
 output2+="\n  \\ A|";
  for(int i=0;i<7;i++){
    output2+=" ";

  }
  output2+="|";
  output2+="\n B \\ | 0   1 |\n";
  for(int i=0;i<5;i++){
    output2+="-";

  }
   output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+\n";
  for(int i=0;i<3;i++){
    output2+="0";

  }
  output2+="0 | ";
  output2+=XO(input[0]);//00->0
   output2+=" | ";
  output2+=XO(input[2]);//10->2
   output2+="| \n";
  
for(int i=0;i<5;i++){
    output2+="-";

  }
   output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+\n";
  for(int i=0;i<3;i++){
    output2+="0";

  }
  output2+="0 | ";
  output2+=XO(input[1]);
   output2+=" | ";
  output2+=XO(input[3]);
   output2+="| \n";
for(int i=0;i<5;i++){
    output2+="-";

  }
   output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+";
  for(int i=0;i<3;i++){
    output2+="-";

  }
  output2+="+\n";
  cout << output2;

}
int main() 
{
  int X22[]={1,0,-1,4};
  plot2(X22);
  return 0;
}
