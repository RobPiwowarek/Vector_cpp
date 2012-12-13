#include <iostream>
#include <stdlib.h>
//#include "vector.h"
using namespace std;

template <class T>
class Vector
{
	private:
	T * root;
	int max_index; 
 	
 	public:
	T & operator[](int index);
	ostream & operator<<(ostream & screen);
	Vector operator+(Vector b);
	Vector operator=(Vector b);
	Vector operator!=(Vector b);
	Vector operator==(Vector b);
	Vector operator<(Vector b);
	Vector operator>(Vector b);
	Vector operator<=(Vector b);
	Vector operator>=(Vector b);

	public:
	int getMaxIndex();
	Vector(int max);
	Vector();
	~Vector();
};

template <class T> int Vector<T>::getMaxIndex()
{
	return max_index;	
}

template <class T> T & Vector<T>::operator[](int index)
	{
		
		if (max_index == 0 && index >= 0)
		{
			root = new T[index+1];
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
			T * temp = new T [index];
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

template <class T>Vector Vector<int>::operator+(Vector b)
{
	Vector<int>sum;
	if (this->max_index < b.max_index)
	{
		T * temp = new T[b.max_index];
		for (int i = 0; i < b.max_index; i++)
			temp[i] = this->root[i];
		delete []this->root;
		this->root = temp;
	}
	else if(this->max_index > b.max_index)
	{
		T * temp = new T[this->max_index];
		for (int i = 0; i < this->max_index; i++)
			temp[i] = b.root[i];
		delete []b.root;
		b.root = temp;
	}
	sum.max_index = this->max_index;
	sum.root = new T[sum.max_index];	

	for (int i = 0; i < this->max_index; i++)
		sum.root[i] = *(this->root + i) + *(b.root + i);

	return sum;
}

template <class T>void Vector<int>::operator=(Vector b)
{
	if (this->max_index < b.max_index)
	{
		T * temp = new T[b.max_index];
		for (int i = 0; i < b.max_index; i++)
			temp[i] = this->root[i];
		delete []this->root;
		this->root = temp;
	}
	else if (this->max_index > b.max_index)
	{
		T * temp = new T[this->max_index];
		for (int i = 0; i < this->max_index; i++)
			temp[i] = b.root[i];
		delete []b.root;
		b.root = temp;
	}
	for (int i = 0; i < this->max_index; i++)
		this->root[i] = b.root[i];
}

template <class T>int Vector<int>::operator<(Vector b)
{
	if (this->max_index < b.max_index)
		return 1;
	else
		return 0;
}

template <class T>int Vector<int>::operator>(Vector b)
{
	if (this->max_index > b.max_index)
		return 1;
	else
		return 0;
}

template <class T>int Vector<int>::operator==(Vector b)
{
	if (this->max_index == b.max_index)
		return 1;
	else
		return 0;
}

template <class T>int Vector<int>::operator!=(Vector b)
{
	if (this->max_index != b.max_index)
		return 1;
	else
		return 0;
}

template <class T>int Vector<int>::operator<=(Vector b)
{
	if (this->max_index <= b.max_index)
		return 1;
	else
		return 0;
}

template <class T>int Vector<int>::operator>=(Vector b)
{
	if (this->max_index >= b.max_index)
		return 1;
	else
		return 0;
}

template <class T>ostream & Vector<int>::operator<<(ostream & screen)
{
	for (int i = 0; i < this->max_index; i++)
	{	
		screen << this->root[i];
		screen << "\n";
	}
	return screen;
}

template <class T> Vector<T>::Vector(int max)
{
	this->max_index = max;
	root = new T[max];
}
	
template <class T> Vector<T>::Vector()
{
	this->max_index = 0;
}
	
template <class T> Vector<T>::~Vector()
{
	delete []root;
}


