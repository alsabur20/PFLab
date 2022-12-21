#include <iostream>
using namespace std;

main()
{
double MB;
double KB;
double bytes;
double input;

cout<<"Enter bits: ";
cin>>input;
bytes=input*1/8;
cout<< input << " bits is equal to " << bytes <<" Bytes." << endl;
KB=input*1/8192;
cout<< input <<" bits is equal to " << KB <<" KBs." << endl;
MB=input*1/8388608;
cout<< input <<" bits is equal to " << MB <<" MBs." << endl;

}