#include <iostream>
#include <stdlib.h>
#include "vector.h"
#include <time.h>
using namespace std;

main()
{

	srand(time(NULL));
	int n = 9;
	Vector<char> test;
	test[n];
	
	cout<< "getMaxIndex::"<<test.getMaxIndex()<<endl;

	for(int i=0; i< n+1;i++)
	{
		test[i] = rand() % 255;
	}	

	for (int i = 0; i < n+1; i++)
		cout << test[i] << endl;
}
