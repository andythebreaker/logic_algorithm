#include <iostream>
#include <sstream>
#include <string>
#include <bitset>

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

	//	cout << output2;
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
	buf+="| 00  01  11  10|";
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
	buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),0);
	//	cout << buf;
	return (buf);
}

string plot4(int *input){
	string buf="";
	buf=SL(SP(EN(EQ(KMAP(EQ(buf,9)),9)),2));
	buf+="AB|";
	buf=SP(buf,15);
	buf+="|";
	buf=EN(buf);
	buf+="CD";
	buf=SP(SL(SP(buf,1)),1);
	buf+="| 00  01  11  10|";
	buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),2);
	buf+="00 | ";
	buf+=XO(input[0]);
	buf=rowS(buf);
	buf+=XO(input[4]);
	buf=rowS(buf);
	buf+=XO(input[12]);
	buf=rowS(buf);
	buf+=XO(input[8]);
	buf+=" |";
	buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),2);
	buf+="01 | ";
	buf+=XO(input[1]);
	buf=rowS(buf);
	buf+=XO(input[5]);
	buf=rowS(buf);
	buf+=XO(input[13]);
	buf=rowS(buf);
	buf+=XO(input[9]);
	buf+=" |";
	buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),2);
	buf+="11 | ";
	buf+=XO(input[3]);
	buf=rowS(buf);
	buf+=XO(input[7]);
	buf=rowS(buf);
	buf+=XO(input[15]);
	buf=rowS(buf);
	buf+=XO(input[11]);
	buf+=" |";
	buf=SP(EN(MP3(PL(MN(EN(buf),5)),4)),2);
	buf+="10 | ";
	buf+=XO(input[2]);
	buf=rowS(buf);
	buf+=XO(input[6]);
	buf=rowS(buf);
	buf+=XO(input[14]);
	buf=rowS(buf);
	buf+=XO(input[10]);
	buf+=" |";
	buf=EN(MP3(PL(MN(EN(buf),5)),4));
	//	cout << buf;
	return (buf);
}

int strTIT(string input){
	int i =0;
	string buf ="";
	string vv="v";
	while(i<input.size()){
		buf=input.substr(i,1);

		if(buf=="v"){


			return (0);
		}
		if(buf=="m"){


			return (1);
		}
		if(buf=="d"){


			return (2);
		}

		i++;

	}

	return (0);
}

int str2int(string str){
	stringstream ss;
	ss<<str;
	int it=0;
	ss>>it;
	return (it);
}

int V(string input){

	int tit=strTIT(input);

	if(tit!=0){
		return (-1);
	}
	string buf="";
	int i =0;
	int go=0;

	while(i<input.size()){
		buf=input.substr(i,1);
		if(buf==" "){
			go =1;
			i++;
			continue;
		}
		if(go==1){

			return (str2int(buf));
		}
		i++;
	}
}

void array_changer(int *arr,int v,string sm,string sd){
	string buf="";
	int go =0;
	int i=0;
	int index=0;
	string comaSM="";
	string comaSD="";
	while(i<sm.size()){
		buf=sm.substr(i,1);
		if(buf==" "){
			go =1;
			i++;
			continue;
		}
		if(go==1){
			comaSM=sm.substr(i,sm.size()-i);

			stringstream ss;
			ss<<comaSM;
			string str4split;
			while(getline(ss,str4split,',')){
				arr[str2int(str4split)]=1;
			}
			break;
		}
		i++;
	}
	buf="";
	go=0;
	i=0;
	while(i<sd.size()){
		buf=sd.substr(i,1);
		if(buf==" "){
			go =1;
			i++;
			continue;
		}
		if(go==1){
			comaSD=sd.substr(i,sd.size()-i);

			stringstream ss;
			ss<<comaSD;
			string str4split;
			while(getline(ss,str4split,',')){
				arr[str2int(str4split)]=-1;
			}
			break;
		}
		i++;
	}
}

string kmap(string instrA,string instrB,string instrC,int *X22,int *X33,int *X44){

	int v=0;
	int bufint;
	bufint=V(instrA);
	if(bufint!=-1){
		v=bufint;
	}
	bufint=V(instrB);
	if(bufint!=-1){
		v=bufint;
	}
	bufint=V(instrC);
	if(bufint!=-1){
		v=bufint;
	}

	bufint=0;
	string mBUF="";
	bufint=strTIT(instrA);
	if(bufint==1){
		mBUF=instrA;
	}
	bufint=strTIT(instrB);
	if(bufint==1){
		mBUF=instrB;
	}
	bufint=strTIT(instrC);
	if(bufint==1){
		mBUF=instrC;
	}
	bufint=0;
	string dBUF="";
	bufint=strTIT(instrA);
	if(bufint==2){
		dBUF=instrA;
	}
	bufint=strTIT(instrB);
	if(bufint==2){
		dBUF=instrB;
	}
	bufint=strTIT(instrC);
	if(bufint==2){
		dBUF=instrC;
	}
	string returN;
	switch (v){
		case 4:
			array_changer(X44,v*v,mBUF,dBUF);
			returN= (plot4(X44));
			break;
		case 3:

			array_changer(X33,v*v,mBUF,dBUF);
			returN= (plot3(X33));
			break;
		case 2:
			array_changer(X22,v*v,mBUF,dBUF);
			returN= (plot2(X22));
			break;
	}
	return (returN);
}

int up(int input){
	int n=input;
	bitset<4> s(n);
	//cout<<s;
	int d=s[0];
	int c=s[1];
	int cd=d+10*c;
	int y1;
	int y2;
	if(cd==10){
		y1= 1;
		y2=1;
	}else if(cd==11){
		y1=0;
		y2= 1;
	}else if(cd==1){
		y1=0;
		y2=0;
	}else if(cd==0){
		y1=1;
		y2=0;
	}
	int a=s[3];
	int b=s[2];
	int ab=a*10+b;
	s[0]=y2;
	s[1]=y1;

	int ot=s[0]+s[1]*2+s[2]*4+s[3]*8;
	cout<<ot;
	return (ot);
}
int dn(int input){
	int n=input;
	bitset<4> s(n);
	//cout<<s;
	int d=s[0];
	int c=s[1];
	int cd=d+10*c;
	int y1;
	int y2;
	if(cd==10){
		y1= 0;
		y2=0;
	}else if(cd==11){
		y1=1;
		y2= 0;
	}else if(cd==1){
		y1=1;
		y2=1;
	}else if(cd==0){
		y1=0;
		y2=1;
	}
	int a=s[3];
	int b=s[2];
	int ab=a*10+b;
	s[0]=y2;
	s[1]=y1;

	int ot=s[0]+s[1]*2+s[2]*4+s[3]*8;
	cout<<ot;
	return (ot);
}
int l(int input){
	int n=input;
	bitset<4> s(n);
	//cout<<s;
	int d=s[2];
	int c=s[3];
	int cd=d+10*c;
	int y1;
	int y2;
	if(cd==10){
		y1= 1;
		y2=1;
	}else if(cd==11){
		y1=0;
		y2= 1;
	}else if(cd==1){
		y1=0;
		y2=0;
	}else if(cd==0){
		y1=1;
		y2=0;
	}
	//int a=s[3];
	//int b=s[2];
	//int ab=a*10+b;
	s[2]=y2;
	s[3]=y1;

	int ot=s[0]+s[1]*2+s[2]*4+s[3]*8;
	cout<<ot;
	return (ot);
}
int r(int input){
	int n=input;
	bitset<4> s(n);
	//cout<<s;
	int d=s[2];
	int c=s[3];
	int cd=d+10*c;
	int y1;
	int y2;
	if(cd==10){
		y1= 0;
		y2=0;
	}else if(cd==11){
		y1=1;
		y2= 0;
	}else if(cd==1){
		y1=1;
		y2=1;
	}else if(cd==0){
		y1=0;
		y2=1;
	}
	//int a=s[3];
	//int b=s[2];
	//int ab=a*10+b;
	s[2]=y2;
	s[3]=y1;

	int ot=s[0]+s[1]*2+s[2]*4+s[3]*8;
	cout<<ot;
	return (ot);
}

int main() 
{
	int X22[]={0,0,0,0};
	int X33[]={0,0,0,0,0,0,0,0};
	int X44[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	string instrA="-v 2";
	string instrC= "-m 0,1";
	string instrB="-d 3";
	string output="";
	output+=kmap(instrA,instrB,instrC,X22,X33,X44);
	output+="\nprime implicant:";
	cout<<output;
	up(12);
	dn(11);
	l(2);
	r(9);
	return 0;
}
