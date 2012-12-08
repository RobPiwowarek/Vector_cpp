#include <iostream>
#include <stdlib.h>
#include "vector.h"
using namespace std;

int Vector::getMaxIndex()
{
	return max_index;	
}

int & Vector::operator[](int index)
	{
		
		if (max_index == 0 && index >= 0)
		{
			root = new int[index+1];
			max_index = index;	
			return root[index];	
		}

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
			delete []root;
			root = temp;
			max_index = index;
		}
		return root[index];		
	}


Vector::Vector(int max)
{
	this->max_index = 4;
	root = new int[max];
}
	
Vector::Vector()
{
	this->max_index = 0;
}
	
Vector::~Vector()
{
	delete []root;
}
