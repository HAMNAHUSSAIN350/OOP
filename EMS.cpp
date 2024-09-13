#include<iostream>
using namespace std;
class Employee
{
	                         public:
	                        string empName;
	                        int empId;
	                        string empDepartment;
	                        void getdetails()
	                        {
	                        	cout<<"Enter empName"<<endl;
	                        	cin>>empName;
	                        	cout<<"Enter empId"<<endl;
	                        	cin>>empId;
	                        	cout<<"Enter empDepartment"<<endl;
	                        	cin>>empDepartment;
	                        }
		virtual float calculateSalary()=0;
};
class Manager: public Employee
{
 public:
void manageStaff()     
{
	cout<<"Manager manages the staff"<<endl;
}
 float calculateSalary()override
{
cout<<"Manager calculates the Salary"<<endl;
return 80000;
 } 	
 };
class Staff:public Employee
{
 public:
	void evaluatePerformance()  	
	{
	cout<<"Evaluate the staff performance"<<endl;
	}
   float calculateSalary() override
	 {
	cout<<"Calculate the staff salary"<<endl;
	return 40000;
	}
	};
int main()	
{
 Manager m;
  m.getdetails();
  m.manageStaff();
cout<<"Manager's Salary"<<m.calculateSalary()<<endl;
	Staff s;
	s.getdetails();
    s.evaluatePerformance();
 cout<<"Staff's Salary"<<s.calculateSalary()<<endl;
 return 0;		
}						   	                       	
