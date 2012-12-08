class Vector
{
	private:
	int * root;
	int max_index; 
 	
 	public:
	int & operator[](int index);
	
	public:
	int getMaxIndex();
	Vector(int max);
	Vector();
	~Vector();
};

