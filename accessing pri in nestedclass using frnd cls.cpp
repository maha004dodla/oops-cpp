#include<iostream>
using namespace std;
class class_A{
	public:
		friend class class_C;
	private:
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
class class_C{
	public:
		class_C()
		{
			class_A::class_B obj1(10,30);
			obj1.display();
		}
};
int main()
{
	class_A obj;
	class_C obj2;
}
