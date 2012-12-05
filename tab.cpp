#include <iostream>
using namespace std;

class vector
{
	private:
	int * pointer;
	int max = 10; // default == 10
	int array[max];

	int & operator[](int index)
	{
		if (index < 0 || index > max)
		{
			cout << "Error. Not in index's range(0 - " << max << ")" << endl;
			exit(0);			
		}
		return *(pointer+index);		
	}
	
	int Allocate(int currentmax, int wantedindex, const vector & old);
	vector(int n);
	vector();
}

int vector::Allocate(int currentmax, int wantedindex, const vector & old)
{
	vector temp;
	temp = new int [currentmax+wantedindex];
	for (int i = 0; i < currentmax;i++)
		temp.array[i] = old.array[i];
	
	return temp;
}

main()
{
	vector test;
}
