#include <iostream>
using namespace std;

int main() 
{
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
  for(int i=0;i<8;i++){
    output2+="-";

  }
  cout << output2;
  return 0;
}
