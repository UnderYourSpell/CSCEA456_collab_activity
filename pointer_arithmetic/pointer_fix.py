arr = [0] * 5  # Create a list of 5 integers and initialize them to 0

# Fill the list with values
for i in range(5):
    arr[i] = i

# Attempt to access memory beyond the allocated space
print("Array elements:")
for i in range(10):
    try:
        print(arr[i])
    except IndexError:
        print("Index out of bounds")
