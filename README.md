# Arden

My programming language project.

## Compilation

```bash
g++ main.cpp -o main
```

## Execution

```bash
./main
```

## Syntax

### Variables

```c
char letter = 'A';
string name = "John";

bool isStudent = true;

int age = 20;
float height = 1.75;
```

### Constants
```c
const int MAX_AGE = 100;
const float PI = 3.141592653589793;
const string NAME = "John";
const bool IS_STUDENT = true;
const char LETTER = 'A';
```

### Arrays
```c
int[] numbers = [1, 2, 3, 4, 5];
string[] names = ["John", "Jane", "Jim", "Jill"];
bool[] booleans = [true, false, true, false];
char[] letters = ['A', 'B', 'C', 'D'];
```

### Loops

```c
for (int i = 0; i < 10; i++) {
  print(i);
}

while (condition) {
  print("Hello, World!");
}

do {
  print("Hello, World!");
} while (condition);
```

### Conditionals

```c
if (condition) {
  print("Hello, World!");
} 
else if (condition) {
  print("Hello, World!");
}
else {
  print("Hello, World!");
}

int isEven = true if condition else false;
```

### Functions

```c
void function greet(string name) {
  print("Hello, ${name}!");
}

int function add(int a, int b) {
  return a + b;
}

bool function isEven(int number) {
  return number % 2 == 0;
}
```

### Classes
```c
class Person {
  string name;
  int age;

  void greet() {
    print("Hello, ${name}!");
  }
}

Person person = new Person("John", 20);
person.greet();
```

### Inheritance
```c
class Person {
  string name;
  int age;
}

class Student extends Person {
  string school;
}
```

### Polymorphism

```c
class Animal {
  void makeSound() {
    print("Animal sound");
  }
}

class Dog extends Animal {
  void makeSound() {
    print("Dog sound");
  }
}
```

### Imports and Exports

```c
from "math" import sqrt;

export void function greet(string name) {
  print("Hello, ${name}!");
}
```