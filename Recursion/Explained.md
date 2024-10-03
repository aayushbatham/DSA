# Recursion

## What is Recursion

When a function calls itself it is called recursion

```
void print(){
  cout<<"called";
  print();
}
```

The above code will never hault hence segmentation fault (stack overflow) will occur and the code will be terminated.
note - all the functions are called within the stack itself. (refer to print1.cpp)

## Recursion Tree
                     print(50)
                         |
                     print(49)
                         |
                     print(48)
                         |
                        ...
                         |
                     print(2)
                         |
                     print(1)  -> Base case, recursion ends here


## Basic Recursion Problems

1) Print numbers from 1 to n
2) Print numbers from n to 1
3) Print numbers from 1 to n using backtracking
4) Print numbers from n to 1 using backtracking
5) Sum of first n number using recursion
6) Reverse an array