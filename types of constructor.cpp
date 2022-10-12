#include<iostream>//copy constructor
using namespace std;
class class_A{
	public:
		class_A()
		{
			cout<<"hai"<<endl;
		}
	~class_A()
	{
		cout<<"bye";
	}		
};
int main()
{
	class_A obj;
}

#include<iostream>//parameterized constructor
using namespace std;
class class_A{
	public:
		class_A(int a,int b)
		{
			cout<<"hai"<<endl;
		}		
};
int main()
{
	class_A obj(10,20);
}

#include<iostream>//default constructor
using namespace std;
class class_A{
	public:
		class_A()
		{
			cout<<"hai"<<endl;
		}		
};
int main()
{
	class_A obj;
}