#include<iostream>
using namespace std;
class class_A{
	public:
		int a=10,b=20;
		class class_B{
			public:
				int a,b;
				class_B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
int main()
{
	class_A::class_B obj(1,2);
	obj.display();
}
