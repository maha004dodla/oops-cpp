#include<iostream>//copy constructor
using namespace std;
class class_A{
	public:
		int a,b;
		class_A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		class_A(class_A &obj)
		{
			this->a=obj.a;
			this->b=obj.b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b<<endl;
		}		
};
int main()
{
	class_A obj1(1,2);
	class_A obj2(obj1);
	obj1.display();
	obj2.display();
}