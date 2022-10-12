#include<iostream>//friend function
using namespace std;
class class_name{
	private:
		int a=10;
	protected:
		int b=20;
	public:
		friend void fun(class_name);
};
void fun(class_name obj)
{
	cout<<obj.a;
}
int main()
{
	class_name obj;
	fun(obj);
}
#include<iostream>//friend class
using namespace std;
class class_name{
	private:
		int a=10;
	protected:
		int b=20;
	public:
		friend class B;
};
class B{
	public:
		void fun(class_name obj)
		{
			cout<<obj.a<<" "<<obj.b;
		}
};
int main()
{
	class_name obj;
	B obj1;
	obj1.fun(obj);
}