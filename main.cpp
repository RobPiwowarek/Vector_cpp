#include <iostream>
#include <stdlib.h>
#include "vector.h"
#include <time.h>
using namespace std;

main()
{
	srand(time(NULL));
	int n = 17;
	Vector<char> test;
	test[n];
	
	cout<< "getMaxIndex::"<<test.getMaxIndex()<<endl;

	for(int i=0; i< n+1;i++)
	{
		test[i] = 65 + rand() % 25;
	}	

	for (int i = 0; i < n+1; i++)
		cout << test[i] << endl;

	cout << "Iterator:: " << endl;
	Vector<char>::Iterator i1;

	for (i1 = test.begin() ; i1 != test.end() ; i1++)
	{
		cout << *i1 << endl;

	}
}
