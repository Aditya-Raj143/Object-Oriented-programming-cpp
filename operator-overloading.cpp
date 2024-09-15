#include<iostream>
using namespace std;

class Complex {
	private: 
		int real;
		int img;
	
	public:
		Complex() {
			real = 4;
			img = 1;
		}
		
		Complex(int a, int b) {
			real = a;
			img = b;
		}
	
		void input() {
			cout<<"\nEnter the real part: ";
			cin>> real;
			cout<<"Enter the imaginary part: ";
			cin>> img;
		}
	
		void display() {
			cout<<"\nThe result is: "<<real<<" +i"<<img<<endl;
		}
		
		Complex operator +(Complex c1) {
			Complex temp;
			temp.real = real + c1.real;
			temp.img = img + c1.img;
			return temp;
		}
		
 		Complex operator -(Complex c1) {
			Complex temp;
			temp.real = real - c1.real;
			temp.img = img - c1.img;
			return temp;
 		}
 		
		friend Complex operator *(Complex c1, Complex c2);
 		friend Complex operator /(Complex c2, Complex c3);
};

Complex operator *(Complex c1, Complex c2) {
	Complex temp;
	temp.real = c1.real * c2.real;
	temp.img  = c2.img * c2.img;
	return temp;
}

Complex operator /(Complex c1, Complex c2) {
	Complex temp;
	temp.real = c1.real / c2.real;
	temp.img = c1.img / c2.img;
	return temp;
}


int main() {
	Complex c1, c2, c3;
	cout<<"ENTER DETAILS FOR 1ST OBJECT";
	c1.input();
	cout<<"\nENTER DETAILS FOR 2ND OBJECT";
	c2.input();
	int ch;
	while(1) {
		cout<<"\nwhich operation do you want to perform: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit program\nYour choice: ";
		cin>> ch;
		switch (ch) {
			case 1:  c3 = c1+c2;
						c3.display();
						break;
			case 2:  c3 = c1-c2;
						c3.display();
						break;
			case 3:  c3 = c1*c2;
						c3.display();
						break;
			case 4:  c3 = c1/c2;
						c3.display();
						break;
			case 5:  return 0;
						break;
			default: cout<<"invalid choice\n";
						break;
		}
	}
	
return 0;
}
