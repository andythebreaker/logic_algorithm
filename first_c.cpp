#include <iostream>
using namespace std;
string EQ(string input,int add){
 string buf="";
 for (int i = 0 ; i < add ;i++){
  buf+="=";
 }
return (input+buf);
}
string KMAP(string input){
 string buf="Kmap";
 
return (input+buf);
}
string EN(string input){
 string buf="\n";
 
return (input+buf);
}
string SL(string input){
 string buf="\\";
 
return (input+buf);
}
string SP(string input,int add){
 string buf="";
 for (int i = 0 ; i < add ;i++){
  buf+=" ";
 }
return (input+buf);
}
string MN(string input,int add){
 string buf="";
 for (int i = 0 ; i < add ;i++){
  buf+="-";
 }
return (input+buf);
}

string PL(string input){
 string buf="+";
 
return (input+buf);
}

string MP3(string input,int add){
 string buf="";
 for (int i = 0 ; i < add ;i++){
  buf+="---+";
 }
return (input+buf);
}
string rowS(string input){
 string buf=" | ";
 
return (input+buf);
}

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
string plot2(int *input){
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
    output2+=" ";

  }
  output2+="0 | ";
  output2+=XO(input[0]);//00->0
   output2+=" | ";
  output2+=XO(input[2]);//10->2
   output2+=" | \n";
  
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
    output2+=" ";

  }
  output2+="0 | ";
  output2+=XO(input[1]);
   output2+=" | ";
  output2+=XO(input[3]);
   output2+=" | \n";
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
return (output2);
}
string plot3(int *input){
 string buf="";
 buf=SL(SP(EN(EQ(KMAP(EQ(buf,9)),9)),2));
 buf+="AB|";
 buf=SP(buf,15);
 buf+="|";
 buf=SP(EN(buf),1);
 buf+="C";
 buf=SP(SL(SP(buf,1)),1);
 buf+="| 00 01 11 10|";
 buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),3);
 buf+="0 | ";
 buf+=XO(input[0]);
 buf=rowS(buf);
 buf+=XO(input[2]);
 buf=rowS(buf);
 buf+=XO(input[6]);
 buf=rowS(buf);
 buf+=XO(input[4]);
 buf+=" |";
 buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),3);
 buf+="1 | ";
 buf+=XO(input[1]);
 buf=rowS(buf);
 buf+=XO(input[3]);
 buf=rowS(buf);
 buf+=XO(input[7]);
 buf=rowS(buf);
 buf+=XO(input[5]);
 buf+=" |";
 buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),3);
 cout << buf;
return (buf);
}

int main() 
{
  int X22[]={1,0,-1,4};
  plot2(X22);
  return 0;
}
