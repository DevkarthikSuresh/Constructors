# Constructors
Experiment 12

## Contents
- [Aim](#Aim)
- [Software Used](#Software-used)
- [Theory](#Theory)
  * [Purpose of Constructors](#purpose-of-constructors)
  * [Types of Constructors](#types-of-constructors)
  * [Default Constructor](#default-constructor)
  * [Parameterized Constructor](#parameterized-constructor)
  * [Copy Constructor](#copy-constructor)
  * [Constructor Overloading](#constructor-overloading)
  * [Destructors](#destructors)
- [Algorithms](#Algorithms)
- [Conclusion](#Conclusion)
  
## Aim 
To study Constructors

## Software Used 
VS Code

## Theory

Constructors are special member functions of a class that are automatically invoked when an object of that class is created. They play a crucial role in initializing objects, ensuring that they are set up correctly before they are used. 

### 1. Purpose of Constructors
The primary purpose of a constructor is to initialize an object. When a new object is created, the constructor ensures that the object's member variables are set to appropriate values (either default values or ones provided by the user).

#### Characteristics of Constructors:
- **Same name as the class:** Constructors always have the same name as the class they belong to.
- **No return type:** Unlike regular member functions, constructors do not have a return type, not even `void`.

### 2. Types of Constructors

#### 2.1 Default Constructor
A default constructor is one that takes no parameters. If you do not provide any constructor in your class, the compiler automatically generates a default constructor that initializes the object with default values. However, if any other constructor is defined, the compiler will not provide a default one.

```cpp
class MyClass {
public:
    MyClass() { // Default constructor
        // Initialization code
    }
};
```

### 2.2 Parameterized Constructor
A parameterized constructor takes arguments to initialize the object with specific values provided by the user. This allows the initialization process to be more flexible.

```cpp
class MyClass {
private:
    int x;
public:
    MyClass(int a) { // Parameterized constructor
        x = a;
    }
};
```
### 2.3 Copy Constructor
A copy constructor creates a new object as a copy of an existing object. The compiler provides a default copy constructor, but you can write your own for deep copies.
```cpp
class MyClass {
private:
    int* ptr;
public:
    MyClass(int a) { 
        ptr = new int(a); // Allocating memory
    }

    // Copy constructor
    MyClass(const MyClass &obj) {
        ptr = new int(*obj.ptr); // Deep copy
    }
};
```
### 3. Constructor Overloading
You can define multiple constructors in a class with different parameter lists. This is known as constructor overloading, providing flexibility in object initialization.
```cpp
class MyClass {
public:
    MyClass() { // Default constructor
        // Initialization
    }

    MyClass(int a) { // Parameterized constructor
        // Initialization
    }

    MyClass(int a, int b) { // Another parameterized constructor
        // Initialization
    }
};
```
### 5. Destructors
A destructor is a special member function called when an object is destroyed. It frees resources acquired during the object's lifetime.
```cpp
class MyClass {
public:
    ~MyClass() { // Destructor
        // Code to release resources
    }
};
```
## Algorithms

### Default Constructors

#### Start

1. **Define Class `construct`**
   - **Data Members:**
     - Declare two public integer variables `a` and `b`.
   
   - **Constructor:**
     - Define a default constructor that initializes:
       - `a` to 10
       - `b` to 20

   - **Member Function:**
     - Define a method `display()` that:
       - Prints the values of `a` and `b` to the console.

2. **Main Function:**
   - Create an object of the class `construct` named `constructor`.
   - Call the `display()` method on the `constructor` object to output the values of `a` and `b`.

3. **Return from Main Function**
   - Return 0 to indicate successful execution of the program.

#### End

---

### C++ Student Class Example

#### Start

1. **Global Variable Declaration**
   - Declare and initialize a global integer variable `count` to 0.

2. **Define Class `student`**
   - **Constructor:**
     - Increment the `count` variable by 1.
     - Output the number of objects created.

   - **Destructor:**
     - Decrement the `count` variable by 1.
     - Output the number of objects destroyed.

3. **Main Function:**
   - Create three objects of the class `student` named `aa`, `bb`, and `cc`:
     - Each creation triggers the constructor, increasing the count.
   - Start a scope block:
     - Inside the block, create an object of the class `student` named `dd`:
       - This triggers the constructor, increasing the count.
   - End the scope block:
     - The destructor for `dd` is called, decreasing the count.
   - Return 0 to indicate successful execution of the program.

#### End

## Conclusion
We learnt to use constructors in C++
