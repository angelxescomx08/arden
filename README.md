# Arden

My programming language project.

## Syntax

### Variables

```ar
char letter = 'A';
string name = "John";

bool isStudent = true;

int age = 20;
float height = 1.75;
```

### Constants
```ar
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
void greet(string name) {
  print("Hello, ${name}!");
}

int add(int a, int b) {
  return a + b;
}

bool isEven(int number) {
  return number % 2 == 0;
}
```

