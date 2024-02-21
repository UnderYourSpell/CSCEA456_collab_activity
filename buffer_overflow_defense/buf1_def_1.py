
def overflow(input):
    buff = input
    return buff
 
print("input: ")
user_input = input()   

output = overflow(user_input)

""" 
How you would write buf1.c the Python Way.
In Python, arrays, or lists, have dynamic memory allocation so users don't have to predefine the 
memory size when initializing the array and you don't have to worry about going over the memory
constraint unlike C. 

Additionally, in Python, you cannot modify immutable objects (e.g., integers, strings, tuples) itself 
inside the function. However, you can reassign a new value to the parameter within the function, and it will 
create a new local variable, distinct from the original object.

"""



