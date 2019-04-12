#include <iostream>
#include <fstream>

#ifdef _WIN32
#include <windows.h>
#define SYSERROR()  GetLastError()
#else
#include <errno.h>
#define SYSERROR()  errno
#endif

using namespace std;
int writeFILE(string TXT){

	ofstream of("output.txt");
	if(of.is_open())
	{
		of<<TXT<<std::endl;
		of.flush();
		of.close();
		cout<<"wrote the file successfully!"<<endl;
	}
	else
	{
		cerr<<"Failed to open file : "<<SYSERROR()<<endl;
		return -1;
	}
	return 0;
}
int main()
{
	writeFILE("i am here");
}

