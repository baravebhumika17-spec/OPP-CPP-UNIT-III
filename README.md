OOP with C++ – Unit III: Polymorphism
📘 About This Repository

This repository contains C++ programs and practical examples based on Unit III – Polymorphism of Object-Oriented Programming with C++.

The programs demonstrate compile-time and run-time polymorphism using function overloading, operator overloading, virtual functions, pure virtual functions, abstract classes, pointers to base classes, and virtual destructors.

👩‍🎓 Student Details
Student Name: Bhumika Barave
Course: Object-Oriented Programming with C++
Unit: Unit III – Polymorphism
Year: Second Year Engineering
Branch: Artificial Intelligence and Data Science
Programming Language: C++
Standard: C++17 or later
🎯 Objective

The main objective of this unit is to understand Polymorphism, where the same function or operator can behave differently depending on the object or operands involved.

📚 Topics Covered
1. Introduction to Polymorphism

Polymorphism means "many forms."

It allows the same function, operator, or interface to perform different operations depending on the situation.

2. Types of Polymorphism

The two major types are:

Compile-Time Polymorphism

The function to be executed is determined during compilation.

Examples:

Function Overloading
Operator Overloading
Run-Time Polymorphism

The function to be executed is determined during program execution.

Examples:

Virtual Functions
Function Overriding
Base Class Pointers
➕ 3. Operator Overloading

Operator overloading allows existing C++ operators to be given a special meaning for user-defined objects.

Concept of Overloading

An operator or function can perform different operations depending on the operands or parameters.

🔹 4. Unary Operator Overloading

Unary operators work on one operand.

Examples:

++
--
-
!

Example:

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void operator++()
    {
        ++value;
    }
};
🔸 5. Binary Operator Overloading

Binary operators work on two operands.

Examples:

+
-
*
/
<
>
==

Example:

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator+(const Number& n)
    {
        return Number(value + n.value);
    }
};
🔄 6. Function Overloading

Function overloading allows multiple functions to have the same name but different parameters.

Example:

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};
🚀 Run-Time Polymorphism
7. Pointers to Base Class

A base-class pointer can point to an object of a derived class.

Example:

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks";
    }
};

int main()
{
    Animal* ptr;

    Dog dog;
    ptr = &dog;

    ptr->sound();

    return 0;
}
8. Virtual Function

A virtual function is a function declared using the virtual keyword in the base class.

It enables run-time polymorphism.

Example:

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound";
    }
};

A derived class can override the virtual function.

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks";
    }
};
⭐ Significance of Virtual Functions

Virtual functions:

Support run-time polymorphism.
Allow derived-class functions to be called through base-class pointers.
Provide flexible and extensible program design.
Allow different derived classes to implement the same interface differently.
9. Pure Virtual Function

A pure virtual function is declared by assigning = 0.

Example:

class Shape
{
public:
    virtual double area() const = 0;
};

A class containing a pure virtual function becomes an abstract class.

10. Virtual Table

C++ implementations commonly use a virtual table (vtable) to support dynamic dispatch for classes having virtual functions.

Conceptually:

Base Pointer
     |
     ↓
Derived Object
     |
     ↓
Virtual Table
     |
     ↓
Overridden Function

The exact implementation of virtual tables is compiler-dependent.

11. Virtual Destructor

When a derived object is deleted through a base-class pointer, the base class should generally have a virtual destructor.

Example:

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base Destructor";
    }
};

This allows proper destruction of derived objects through base-class pointers.

12. Abstract Base Class

An abstract base class is a class that cannot be instantiated directly.

It generally contains one or more pure virtual functions.

Example:

class Shape
{
public:
    virtual double area() const = 0;

    virtual ~Shape() = default;
};

Derived classes provide the implementation.

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() const override
    {
        return 3.14 * radius * radius;
    }
};
