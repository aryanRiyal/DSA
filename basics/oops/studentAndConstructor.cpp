/*
Default constructor for object Student s1 will be Student() we can call it using s1.Student()
Key points about constructors:

(1)Same Name as Class:
The constructor has the same name as the class.
It doesn't have a return type, not even void.


(2)Initialization:
It is often used to initialize the data members of the class.


(3)Multiple Constructors (Overloading):
You can have multiple constructors with different parameter lists, known as constructor overloading.


(4)Default Constructor:
If you don't define any constructor for a class, the compiler provides a default constructor (with no parameters) automatically.


(5)Parameterized Constructor:
Constructors can take parameters, allowing you to initialize the object with specific values.


(6)Constructor Suppression:
If you provide your own constructor for a C++ class, the compiler will not automatically generate a default constructor (a constructor with no parameters) for that class. This is known as "constructor suppression."

However, if you don't provide any constructors at all, the C++ compiler automatically generates a default constructor for your class. The default constructor initializes the object, typically setting any data members to default values.
If you provide any constructor (including a parameterized constructor), the compiler assumes that you are taking responsibility for the initialization of the object, and it won't generate the default constructor unless you explicitly declare and define it.

 
(7)this Keyword:
The 'this' keyword is a pointer that points to the object for which a member function is called. It is used within the member functions of a class to refer to the object on which the function is operating. The 'this' pointer is an implicit parameter to all non-static member functions.


(8)Copy Constructor:
A copy constructor in C++ is a special type of constructor that creates a new object as a copy of an existing object. It is used to initialize an object with another object of the same type. The copy constructor is invoked in various situations, such as when an object is passed by value, returned by value, or explicitly when an object is created as a copy of another object.

Key points about copy constructors:
The copy constructor takes a reference to an object of the same class as a parameter.
It is typically defined with the 'const' qualifier to ensure that the original object is not modified.
The copy constructor is called automatically when a new object is created as a copy of an existing object, or when an object is passed by value to a function.
 

(9)Destructor:
A destructor is a special member function of a class that is responsible for cleaning up resources before an object is destroyed. It has the same name as the class, preceded by a tilde (~). A destructor is automatically called when an object goes out of scope, is explicitly deleted using delete, or when the program terminates.a destructor is a special member function of a class that is responsible for cleaning up resources before an object is destroyed. It has the same name as the class, preceded by a tilde (~). A destructor is automatically called when an object goes out of scope, is explicitly deleted using delete, or when the program terminates.

Key points about destructors:
A destructor doesn't take any parameters, and it doesn't return a value (not even void).
A class can have only one destructor.
The destructor is called automatically when the object goes out of scope.
The destructor is also called when delete is used to explicitly deallocate memory for an object created with new.
*/

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    //Default lookalike Constructor with a cout statement
    Student(){
        cout<<"Constructor Called!"<<endl;
    }
    //Default lookalike Destructor with a cout statement
    ~Student(){
        cout<<"Destructor Called!"<<endl;
    }
    //Parameterized Constructor
    Student(int rollNumber){
        cout<<"Parameterized Constructor (1) Called:"<<endl;
        cout<<"Parameter(rollNumber) = "<<rollNumber<<endl;
        cout<<"this: "<<this<<endl;
        this->rollNumber = rollNumber;
        age = -1;
    }
    Student(int a, int r){
        cout<<"Parameterized Constructor (2) Called:"<<endl;
        cout<<"Parameter(age) = "<<a<<", "<<"Parameter(rollNumber) = "<<r<<endl;
        this->rollNumber = r;
        this->age = a;
    }

    void display(){
        cout<<"age = "<<age<<endl;
        cout<<"rollNumber = "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }
};
