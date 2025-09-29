

# EXPERIMENT 14: INHERITANCE IN C++

## AIM
To understand and implement **Inheritance** in C++ and demonstrate how derived classes can reuse and extend the properties of base classes.

## TOOLS USED
- **Language:** C++ (any standard compiler such as g++, clang++)
- **Editor/IDE:** VS Code / Code::Blocks / Dev C++ / Terminal

## THEORY
Inheritance is a core concept of Object-Oriented Programming (OOP) in C++.  
It allows a class (**derived class**) to acquire the properties and behaviors (data members and functions) of another class (**base class**).  
This promotes **code reusability**, **extensibility**, and a logical relationship between classes.

### Key Concepts
- **Base Class:** Class whose members are inherited by other classes.  
- **Derived Class:** Class that inherits from a base class and can add or override members.  
- **Access Specifiers:**
  - `public` inheritance → base public/protected stay public/protected.
  - `protected` inheritance → base public/protected become protected.
  - `private` inheritance → base public/protected become private.

### Types of Inheritance
- **Single:** One base → one derived.
- **Multiple:** Multiple bases → one derived.
- **Multilevel:** Derived from another derived.
- **Hierarchical:** One base → multiple derived.
- **Hybrid:** Combination of the above.

### Constructor/Destructor Order
- Base constructor executes before derived constructor.
- Derived destructor executes before base destructor.

### Virtual Functions
Enable runtime polymorphism so the correct overridden function in a derived class is called through a base class pointer or reference.

### ADVANTAGES
- Promotes **code reusability** and reduces redundancy.
- Provides a clear **hierarchy** between classes.
- Supports **polymorphism** and **dynamic binding**.
- Simplifies maintenance and extension.

### APPLICATIONS
Inheritance models real-world “is-a” relationships.  
Example: A `Dog` or `Cat` class can inherit from an `Animal` class since both **are** animals but have their own extra behaviors.

## EXPERIMENT 14(A): SINGLE INHERITANCE

### ALGORITHM

1. **Start**
2. Create base class `Spacecraft` with `name`, `fuel`, `launch()`, and `refuel()`.
3. Create derived class `ResearchProbe` from `Spacecraft` with `experiment`, `performExperiment()`, and `status()`.
4. In `main()`, make a `ResearchProbe` object, call `launch()`, `performExperiment()`, `status()`, `refuel()`, and repeat.
5. **Stop**

## EXPERIMENT 14(B): MULTIPLE INHERITANCE

### ALGORITHM

1. **Start**  
2. Create base class `Engine` with `hp` and `startEngine()` method.  
3. Create base class `Vehicle` with `brand` and `info()` method.  
4. Derive class `Car` **from both** `Engine` and `Vehicle` (multiple inheritance) and add `model` + `display()` method.  
5. In `main()`, create a `Car` object, call `startEngine()`, `info()`, and `display()`.  
6. **Stop**  

## EXPERIMENT 14(C): MULTILEVEL INHERITANCE

### ALGORITHM

1. **Start**
2. Define base class `Spacecraft` with:
   - Data members: `name`, `fuel`.
   - Member functions: `launch()`, `refuel()`.
3. Derive class `ResearchProbe` from `Spacecraft`:
   - Add data member `experiment`.
   - Add member functions `performExperiment()` and `status()`.
4. Derive class `MarsProbe` from `ResearchProbe`:
   - Add data member `ls` (landing site).
   - Add member functions `land()` and override `status()`.
5. In `main()`:
   - Create a `MarsProbe` object with name, fuel, experiment, and landing site.
   - Call `launch()`, `performExperiment()`, `land()`, `status()`, `refuel()` as required.
6. **Stop**

## EXPERIMENT 14(D): HIERARCHICAL INHERITANCE

### ALGORITHM

1. **Start**
2. Define base class `Animal` with:
   - Data member: `name`.
   - Constructor to initialize `name`.
   - Member function `eat()` to display eating behavior.
3. Define derived class `Dog` (inherits from `Animal`) with:
   - Constructor to initialize `name` via `Animal`.
   - Member function `bark()` to display barking.
4. Define derived class `Cat` (inherits from `Animal`) with:
   - Constructor to initialize `name` via `Animal`.
   - Member function `meow()` to display meowing.
5. In `main()`:
   - Create a `Dog` object and call `eat()` and `bark()`.
   - Create a `Cat` object and call `eat()` and `meow()`.
6. **Stop**
# Experiment_14
