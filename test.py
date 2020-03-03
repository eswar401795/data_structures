# python code to demonstrate the working of array(), append(), insert()

# importing "array" for array operations
import array

# Initializing array with array values and signed integers
arr = array.array('i', [1,2,3])

# printing the original array
print("The new created array is : ", end=' ')
for i in range(0, 3):
    print(arr[i], end=' ')
print('\r')

# using append() to insert new value at end
arr.append(4)

# printing the array
print("array after insertion : ", end=' ')
for i in range(0, 4):
    print(arr[i], end = ' ')
print('\r')

# using insert() to insert value at specific position 
# insert 5 at 2nd position
arr.insert(2, 5)

# printing the array
print("array after insertion : ", end=' ')
for i in range(0, 5):
    print(arr[i], end = ' ')




