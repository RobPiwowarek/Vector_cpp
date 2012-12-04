#include <iostream>
using namespace std;

class wektor
{
	public:
	int * pointer;
	int max;

	int & operator[](unsigned int index)
	{
		if (index < 0 || index > max)
		{
			cout << "Error. Not in index's range(0 - " << max << ")" << endl;
			exit(0);			

			return *(pointer+index);
		}		
	}
}

main()
{
	wektor test;
}
