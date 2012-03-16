#include <unistd.h>
#include <getopt.h>
#include <iostream>
using namespace std;

static struct option option_value[]
{
	{"hello",1,0,'h'},
	{"good",1,0,'g'},
	{"bai",0,0,'b'},
	{0,0,0,0}
};

int main(int argc,char *argv[])
{
	int c;
	c = getopt_long(argc,argv,"h:bg:",option_value,NULL);
	
		switch(c)
		{
			case 'h':
				cout<<"world"<<optarg<<endl;
				break;
			case 'g':
				cout<<"bye"<<endl;
				break;
			case 'b':
				cout<<"yun"<<endl;
				break;
			default:
				cout<<"no inpute"<<endl;
				break;
		}
	
	return 0;
}

