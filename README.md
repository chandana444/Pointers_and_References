# Pointers_and_References

# Pointers
Pointers are the datatypes which stores the address of variables or 
a memory location

**Syntax:** datatype *var_name; 

&(Address of Operator) - placed before a variable to return the address of that particular variable.

\*(Dereference Operator) - placed before a pointer variable to return the value of the variable located at the address specified by its operand.

**Pointers in single dimensional array:** To access the elements of a single dimensional array an array name acts like a pointer constant. The value of this pointer constant is the address of the first element. 

**Pointers in multi dimensional array:** To access the elements of multi dimensional array we use the syntax \*(*(nums+i)+j) which is  equivalent to nums[i][j]

# References
When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 
