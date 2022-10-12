#include<iostream>
using namespace std;
class class_name{
	public:
		int a,b;
		class_name(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b;
		}
};
int main()
{
	class_name obj(30,40);
	obj.display();
}