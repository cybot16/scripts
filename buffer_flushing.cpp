#include <iostream>
#include <ostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;


int main(int argc , char* argv[])
{
	std::ios::sync_with_stdio(true); // stdout is line-buffered but iostream is not !!
	int random_int;
	int r=0;
	cout<<"output_1"<<endl; // buffer is flushed, you'll see the first output
	cout <<"output_2";    // no '\n' or endl, buffer not flushed, no output yet ...
	for(long long i=0;i<100000;i++) // waiting the buffer to be flushed ...
		for(long long j=0;j<10000;j++) // suppose the loops are executed in x sec !
			r++;
	cin>>random_int;  // buffer is flushed now(cin tied to cout), you will see output_2, x seconds between output_1 and output_2
}
