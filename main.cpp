#include <iostream>
using namespace std;
class Student {
private:
string name;
int roll;
public:
// Constructor
Student(string n, int r) {
name = n;
roll = r;
cout << "Constructor called for " << name << endl;
}
// Member function to display student details
void display() {
cout << "Name: " << name << ", Roll: " << roll << endl;
}
// Destructor
~Student() {
cout << "Destructor called for " << name << endl;
}
};
int main() {
Student s1("Alice", 101); // Constructor is called
Student s2("Bob", 102); // Constructor is called
s1.display();
s2.display();
// When main() ends, destructors are called automatically
13
return 0;
}
Output:
Constructor called for Alice