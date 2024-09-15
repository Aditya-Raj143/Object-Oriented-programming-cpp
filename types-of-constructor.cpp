	#include <iostream>
#include <string>
using namespace std;
class Student {
	public:
		string name;
		int rollNumber;
		string className;
		string division;
		string dob;
		string aadhaarNumber;
		string bloodGroup;
		string contactAddress;
		string telephoneNumber;
		float percentage;
// Default Constructor
	Student() {
		cout << "Default Constructor called" << endl;
		name ;
		rollNumber;
		className ;
		division ;
		dob ;
		aadhaarNumber ;
		bloodGroup ;
		contactAddress ;
		telephoneNumber ;
		percentage;
	}
// Parameterized Constructor
	Student(string n, int r, string c,	string d, string dob, string a, string b, string ca, string t, float p) {
		cout << "Parameterized Constructor called" << endl;
		name = n;
		rollNumber = r;		
		className = c;
		division = d;
		dob = dob;
		aadhaarNumber = a;
		bloodGroup = b;
		contactAddress = ca;
		telephoneNumber = t;
		percentage = p;
	}
// Copy Constructor
	Student(const Student& s) {
		cout << "Copy Constructor called" << endl;
		name = s.name;
		rollNumber = s.rollNumber;
		className = s.className;
		division = s.division;
		dob = s.dob;
		aadhaarNumber = s.aadhaarNumber;
		bloodGroup = s.bloodGroup;
		contactAddress = s.contactAddress;
		telephoneNumber = s.telephoneNumber;
		percentage = s.percentage;
	}

	void displayInfo() {
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollNumber << endl;
		cout << "Class: " << className << endl;
		cout << "Division: " << division << endl;
		cout << "Date of Birth: " << dob << endl;
		cout << "Aadhaar Number: " << aadhaarNumber << endl;
		cout << "Blood Group: " << bloodGroup << endl;
		cout << "Contact Address: " << contactAddress << endl;
		cout << "Telephone Number: " << telephoneNumber << endl;
		cout << "Percentage Marks: " << percentage << "%" << endl;
	}
};

int main() {
// We are using Default Constructor
	Student student1;
	cout<<"----------"<<endl;
	student1.displayInfo();
	cout<<endl;
	
// We are using Parameterized Constructor
	Student student2("Devyani", 57, "2nd Year", "D", "2005-12-11", "123456789012", "O+","Camp", "1234567890", 85.5);
	cout<<"----------"<<endl;
	student2.displayInfo();
	cout<<endl;
	
// We are using Copy Constructor
	Student student3(student2);
	cout<<"----------"<<endl;
	student3.displayInfo();

return 0;
}
