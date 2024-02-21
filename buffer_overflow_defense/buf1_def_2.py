import ctypes

def overflow(input1):
    buff = ctypes.create_string_buffer(16)  # Allocate a fixed-size buffer of 16 bytes
    ctypes.memmove(buff, input1.encode(), len(input1))  # Copy the input to the buffer
    return buff.value

print("Input: ")
user_input = input()
result = overflow(user_input)
print("Output:", result.decode())


"""
Similar to C uses a fixed-size buffer of 16 bytes allocated 
with ctypes.create_string_buffer.
Data is copied safely to the buffer using ctypes.memmove, ensuring no buffer overrun.
"""

