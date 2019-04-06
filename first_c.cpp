#include <iostream>
#include <sstream>
#include <string>

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
	cout << buf;
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
	cout << buf;
	return (buf);
}

int strTIT(string input){
	int i =0;
	string buf ="";
	string vv="v";
	while(i<input.size()){
		buf=input.substr(i,1);
	/*	cout<<"\nOK+"<<buf<<"\n";
int fuck = (int)(buf==vv);
cout<<fuck;
if(fuck==1){cout<<"fuck";
return 0;}
*/

		if(buf=="v"){
			cout<<"\nV";

			return (0);
		}
		if(buf=="m"){
			cout<<"\nV";

			return (1);
		}
		if(buf=="d"){
			cout<<"\nD";

			return (2);
		}
	
		i++;
		cout<<i<<"\n";
	}
	cout<<"error";
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
	cout<<"TIT"<<tit;
	if(tit!=0){
		return (-1);
	}
	string buf="";
	int i =0;
	int go=0;
	cout<<"alive\n";
	while(i<input.size()){
//	cout<<"alive1\n";
		buf=input.substr(i,1);
//	cout<<"alive2\n";
		if(buf==" "){
//	cout<<"alive3\n";
			go =1;
			i++;
//	cout<<"alive4\n";
			continue;
//	cout<<"alive5\n";
		}
//	cout<<"alive6\n";
		if(go==1){
//	cout<<"alive7\n";
			cout<<"\nck"<<str2int(buf);
//	cout<<"alive8\n";
			return (str2int(buf));
//	cout<<"alive9\n";
		}
//	cout<<"alive10\n";
		i++;
//cout<<"alive11\n";
	}
}

void array_changer(int *arr,int v,string sm,string sd){
	string buf="";
	int go =0;
	int i=0;
	int index=0;
//	string str4split="";
	string comaSM="";
	string comaSD="";
//cout<<"check it out la "<<v<<endl;
	while(i<sm.size()){
		buf=sm.substr(i,1);
		if(buf==" "){
			go =1;
	i++;
			continue;
		}
		if(go==1){
comaSM=sm.substr(i,sm.size()-i);
cout<<"ck"<<comaSM<<endl;
stringstream ss;
ss<<comaSM;

string str4split;
//string split_buf;
while(getline(ss,str4split,',')){
arr[str2int(str4split)]=1;
}
break;
//			index= (str2int(buf));
//			arr[index]=1;
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
cout<<"ck"<<comaSD<<endl;
stringstream ss;
ss<<comaSD;
string str4split;
//string split_buf;
while(getline(ss,str4split,',')){
arr[str2int(str4split)]=-1;
}
break;

		//	index= (str2int(buf));
//			arr[index]=-1;
		}
		i++;
	}
}

int main() 
{
	int X22[]={0,0,0,0};
	int X33[]={0,0,0,0,0,0,0,0};
	int X44[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	plot2(X22);
	plot3(X33);
	plot4(X44);

	string instrA="-v 4";
	string instrB= "-m 0,1,5,11,15";
	string instrC="-d 4,6,10,14";
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
	cout<<"BUF"<<v;
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

	switch (v){
		case 4:
			array_changer(X44,v*v,mBUF,dBUF);
			break;
		case 3:
			array_changer(X33,v*v,mBUF,dBUF);
			break;
		case 2:
			array_changer(X22,v*v,mBUF,dBUF);
			break;
	}
	for(int i=0;i<v*v;i++){
		cout<<","<<X44[i];
	}
	plot4(X44);
	return 0;
}
