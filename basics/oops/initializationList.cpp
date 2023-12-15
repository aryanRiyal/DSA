/*
An initialization list is used in the constructor to initialize member variables of a class. It is a concise way to set the initial values of class members when an object is created. 
Initialization lists are particularly useful when dealing with non-trivial types, such as objects, references, or const members, as they allow you to initialize these members before the body of the constructor is executed.
*/

class Student {
    public:
    Student (int r, int age) : rollNumber(r), age(age), x(this->age) {

    }
    void display() {
        cout<<"age = "<<age<<", rollNumber = "<<rollNumber<<" and x = "<<x<<endl;
    }
    private:
    int age;
    const int rollNumber;
    int &x;     //reference to age
};
