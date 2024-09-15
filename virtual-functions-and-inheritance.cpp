#include<iostream>
#include<string.h>
using namespace std;

//base class
class employee{
	public:
		string ename;
		int empid;
	
	employee(){                        
		ename="adi";
		empid=1;
	}
	employee(string name,int id){         
		ename=name;
		empid=id;
	}
	
	void accept(){
		cout<<"enter employee name:\n";
		cin>>ename;
		cout<<"enter employee id:\n";
		cin>>empid;
	}
	void display(){
		cout<<"employee name is:"<<ename<<endl;
		cout<<"employee id is: "<<empid;
	}
	virtual int earnings()=0;      
};

class salariedEmployee:public employee{
	public:
	double weeklySalary;
	
	salariedEmployee(){              
		weeklySalary=4500;
	}
	salariedEmployee(double sal){          
		weeklySalary=sal;
	}
	int earnings(){
		cout<<"the weekly salary is:\t";
		cout<<weeklySalary;
		return weeklySalary;
	};
};

class hourlyEmployee: public employee{
	public:
	double wage;
	double hours;
	double hourlySalary;
	
	hourlyEmployee(){                 
		wage=4500;
		hours=24;
		hourlySalary=30;
	}
	hourlyEmployee(double a,double b,double c){                
		wage=a;
		hours=b;
		hourlySalary=c;
	}
	int earnings(){
		if(hours<40){
			hourlySalary=hours*wage;
		}
		else{
			hourlySalary=40*wage + ((hours-40)*wage)*1.5;
		}
		return hourlySalary;
	}
};
class commissionEmployee: public employee{
	public:
	double grossSales;
	double commissionRate;
	double commissionSalary;
	
	commissionEmployee(){                                  
		grossSales=50000.55;
		commissionRate=4.4;
		commissionSalary=40.5;
	}
	
	commissionEmployee(double a,double b,double c){                          
		grossSales=a;
		commissionRate=b;
		commissionSalary=c;
	}
	
	int earnings(){
		commissionSalary=grossSales*commissionRate;
		cout<<commissionSalary;
		return(commissionSalary);
	};
};


int main() {
	employee* bptr;
	salariedEmployee S;
	commissionEmployee C;
	bptr = &S;
	
	S.earnings();
	cout<<endl;
	C.earnings();
	cout<<endl;
	bptr->earnings();
	
return 0;
}



























