#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "No. of command line arguments: " << argc << endl;
	for (int i = 0; i < argc; ++i) {
		cout << "Arg " << i << ": " << argv[i] << endl;
	}
	return 0;
}