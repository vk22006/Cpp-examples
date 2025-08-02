import ctypes

# Load the .dll file
square_lib = ctypes.CDLL("./square.dll")

# Tell Python what the argument and return types are
square_lib.square.argtypes = [ctypes.c_int]
square_lib.square.restype = ctypes.c_int

num = int(input("Enter a number: "))
result = square_lib.square(num)
print("Square value is: ", result)