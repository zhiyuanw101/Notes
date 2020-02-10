## [`extern` keyword](https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/)
---
```c
 int foo(int arg1, char arg2);
```
is viewed as:
```c
 extern int foo(int arg1, char arg2);
```
``extern`` extend the function visibility to any files in the whole program (with declaration of the function)

## Dclaration and definition
---
- A declaration can be done any number of times but definition only once.
- Declare: no memory assigned
- Define: declare and has memory
- When `extern` is used with a variable, it’s only declared, not defined (if not init with value).

## Symbol table and relocation table
---
Symbol table: deals with globals(static)
- global labels (Text, Data), and undefined global symbolic addresses (Undefined).

Relocation table: deals with call to memory
- all symbolic address (both data and text), for load/store, branch.

## [Compiler Explorer](https://godbolt.org/)
---

## caller save/ callee save
---
caller/ callee refer to registers, assign variables in function to caller/ callee save registers. caller/ callee save registers only need to be save to stack in certain situation. 
- caller save: 
    - save/load before/after calling another function. 
    - look for live variables after function call i.e. assign variable before function call, refer to that variable value after.
    - leaf function caller save used without saving/storing.

- callee save:
    - save/ load at beginning/end of a function. 
    - only save/ load if the function overwrites the variable (register). 
    - main() don't save to stack. 