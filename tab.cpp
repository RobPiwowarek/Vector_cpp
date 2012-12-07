#include <iostream>
using namespace std;

class Vector
{
	private:
	int * root;
	int max_index = 0; 
 
	int & operator[](int index)
	{
		if (index < 0)
		{
			cout << "Error"	<< endl;
			exit(1);
		}
		if (index > max_index)
		{
			int * temp = new int [index];
			for (int i = 0; i < index; i++)
			{
				*(temp+i) = *(root+i);
			}
			delete root[];
			root = temp;
			max_index = index;
		}
		return *(root+max_index);		
	}
	
	Vector(int max); // const.
	Vector(); // default const.
	~Vector(); // destr.
}

main()
{
	Vector test;
}
