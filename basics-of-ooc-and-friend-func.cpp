#include<iostream>

#include<string>

using namespace std;
class Student {
  private: friend void calculatePercentage(Student & s);
  string name;
  int rno;
  int div;
  string dob;
  int AadharNo;
  string Bloodgrp;
  int telephone;
  struct marks {
    int m1;
    int m2;
    int m3;
  }
  m;
  public: static int icnt;
  void details() {
	cout<< "enter name: ";
    cin >> name;
	cout<< "enter roll no.: ";
    cin >> rno;
	cout<< "enter division: ";
    cin >> div;
	cout<< "enter date of birth: ";
    cin >> dob;
	cout<< "enter aadhar no.: ";
    cin >> AadharNo;
	cout<< "enter blood group: ";
    cin >> Bloodgrp;
	cout<< "enter telephone: ";
    cin >> telephone;
	cout<< "enter marks(out of 100): ";
    cin >> m.m1;
    cin >> m.m2;
    cin >> m.m3;
  }

  void displayinfo()
  {
    cout << "Name:" << name << endl;
    cout << "rno:" << rno << endl;
    cout << "div:" << div << endl;
    cout << "dob:" << dob << endl;
    cout << "Aadhar no:" << AadharNo << endl;
    cout << "Bloodgrp:" << Bloodgrp << endl;
    cout << "telephone:" << telephone << endl;
    cout << "Marks:(out of 300): " << m.m1 +m.m2+ m.m3 << endl;
  }
  static void display() {
    icnt++;
  }
};

int Student::icnt;

void calculatePercentage(Student & s) {
  float percentage = (((s.m.m1) + (s.m.m2) + (s.m.m3)) / 3);
  cout << "Percentage: " << percentage << "%" << endl;
}

int main() {
  int n = 10;
  Student s[n];
  int i = 0;
  char ch;
  do {

    cout << "STUDENT " << i + 1 << endl;
    s[i].details();
    s[i].display();
    cout << "Want to enter another students detail? Y or N: ";
    cin >> ch;
    cout << endl;
    if (ch == 'N' || ch == 'n'){
      break;
	}
    i++;

  }while (ch == 'y' || ch == 'Y');

  for (int j = 0; j <= i; j++) {
    cout << "\nSTUDENT" << j + 1 << endl;
    s[j].displayinfo();
	calculatePercentage(s[j]);
  }

  cout << "\nTOTAL NUMBER OF STUDENTS:" << Student::icnt << endl;
  return 0;
}