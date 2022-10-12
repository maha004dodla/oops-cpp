#include<iostream>
using namespace std;
class bank_acc{
	int pin;
	public:
		string name,ifsc,branch,bankname;
	    long long int acc_no;
	    int card_no,bal;
	    bank_acc(string name,string ifsc,string branch,string bankname,long long int acc_no,int card_no,int pin,int bal)
	    {
	    	this->name=name;
	    	this->ifsc=ifsc;
	    	this->branch=branch;
	    	this->bankname=bankname;
	    	this->acc_no=acc_no;
	    	this->card_no=card_no;
	    	this->pin=pin;
	    	this->bal=bal;
		}
		void viewdetails()
		{
			cout<<name<<endl;
			cout<<ifsc<<endl;
			cout<<branch<<endl;
			cout<<bankname<<endl;
			cout<<acc_no<<endl;
			cout<<card_no<<endl;
			cout<<pin<<endl;
			cout<<bal<<endl;
		}
		int getpin()
		{
			return pin;
		}
		
		void viewamount()
		{
			cout<<bal<<endl;;
		}
		void depositamount()
		{
			int add_amt;
			cin>>add_amt;
			bal=bal+add_amt;
		}
		void withdrawamount()
		{
			int with_amt;
			cin>>with_amt;
			if((bal-with_amt)<2000)
			{
				cout<<"invalid amount to withdraw"<<endl;
			}
			else
			{
				bal=bal-with_amt;
			}
		}
		void pinchange()
		{
			int new_pin;
			cin>>new_pin;
			if(new_pin==pin)
			{
				cout<<"old and new pins are same"<<endl;
			}
			else
			{
				pin=new_pin;
			}
		}
};
int main()
{
	bank_acc person("Maha","sbi007","kkd","SBI",9701059871,1234,4567,10000);
	int pin;
	cout<<"enter pin :";
	cin>>pin;
	if(pin==person.getpin())
	{
		while(1)
		{
			cout<<"1.viewamount 2.deposit amount 3.withdraw amount 4.pin change 5.view details 6.exit"<<endl;
			int ch;
			cin>>ch;
			if(ch==1)
			{
				person.viewamount();
			}
			else if(ch==2)
			{
				person.depositamount();
			}
			else if(ch==3)
			{
				person.withdrawamount();
			}
			else if(ch==4)
			{
				person.pinchange();
			}
			else if(ch==5)
			{
				person.viewdetails();
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		cout<<"invalid pin";
	}
	
}