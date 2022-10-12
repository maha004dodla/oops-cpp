#include<iostream>
using namespace std;
class student{
	public:
		string rollno,branch;
		student(string roll,string b)
		{
			rollno=roll;
			branch=b;
		}
};
class sportsperson{
	public:
		string game;
		int medal_count;
		sportsperson(string g,int c)
		{
			game=g;
			medal_count=c;
		}
};
class person:public sportsperson,public student{
	public:
		string name;
		person(string n,string roll,string b,string g,int c):
			sportsperson(g,c),student(roll,b)
			{
				name=n;
			}
			void display()
			{
				cout<<name<<" "<<rollno<<" "<<branch<<" "<<game<<" "<<medal_count<<endl;
			}
};
int main()
{
	person p1("maha","21p31a1204","IT","running",2);
	p1.display();
	
}