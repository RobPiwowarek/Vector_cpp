#include <iostream>
#include <stdlib.h>
#include "vector.h"

using namespace std;

main()
{
	int n = 9;
	Vector test;
	test[n];
	
	cout<< "getMaxIndex::"<<test.getMaxIndex()<<endl;

	for(int i=0; i< n+1;i++)
	{
		test[i] = rand() % 100;
	}	

	for (int i = 0; i < n+1; i++)
		cout << test[i] << endl;
}
