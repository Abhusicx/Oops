# Oops
Oops Concepts along with programs tutorial

Object Oriented Programming

1.	Object : they are real world entities

2.	Class  : blueprint of these entities 

3.	Access Modifiers : Private , Public , Protected

4.	Private : data & methods accessible inside class, it is also default

5.	Public : data & methods accessible to everyone

6.	Protected : data & methods accessible inside class & to its derived class

7.	Encapsulation : Encapsulation is wrapping up of data & member functions in a single unit called 

8.	Constructor : Special method invoked automatically at time of object creation. Used for initialization
•	Same name as class 
•	Constructor don’t have return type
•	Only called once(automatically), at object creation
•	Memory allocation when constructor is called

9.	Parameterized Constructor : A Constructor with parameters

10.	This keyword : it’s a special pointer in C++ that points to the current object.
•	This prop is same as *(this).prop

11.	       Copy Constructor : Special Constructor(default) used to copy properties of one object into another.

12.	Shallow copy : copy of an object copies all of the member values from one object to another

13.	Deep copy : not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.

14.	Destructor : a special function that automatically cleans up resources when an object is destroyed.

15.	Inheritance : When properties & member functions of base class are passed on to the derived class.

16.	Polymorphism : it’s a ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

17.	Compile-time polymorphism : happens when you have multiple functions with the same name but different parameters, and the compiler decides which one to use before running the program.

18.	Constructor overloading : when a class has multiple constructors with the same name but different parameters.

19.	Function overloading : when multiple functions have the same name but different parameters.

20.	Operator overloading : also type of CTP
21.	Run-time polymorphism : when a function call is resolved at runtime, allowing different behaviors for the same function based on the object type.

22.	Function Overriding : Parents & child both contain the same function with different implementation.
•	Parent class function said to be overridden.

23.	Virtual Functions : A virtual function is a member function that you expect to be redefined in derived class.
•	Dynamic in nature
•	Defined by keyword “virtua” inside base class and are always declared with a base 
•	Called during run-time
•	Class and overridden in child class

24.	Abstraction : Hiding all unnecessary details & showing only important parts

25.	Abstract classes : implement abstraction
•	Used to provide a base class from which other classes can be derived.
•	Cannot be instantiated and are meant to be inherited.
•	Abstract classes are typically used to define an interface for derived class.

26.	Static Keyword : in C++ is used to declare a variable that retains its value between function calls and is initialized only once.
 
27.	Static Variable : in function are created & initialised once for the lifetime of the program. 
•	In class they are created & initialised once. They are shared by all the objects of the class in 

28.	Static Object : an object that is created once and retains its state throughout the program's lifetime, even outside the scope where it was created.

29.	Friend Function : a function that is not a member of a class but can access its private and protected members. It is declared using the friend keyword inside the class.
