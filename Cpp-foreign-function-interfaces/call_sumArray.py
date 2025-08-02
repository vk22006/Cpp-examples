import ctypes

sum_lib = ctypes.CDLL("./sum_array.dll")

sum_lib.sum_array.argtypes = [ctypes.POINTER(ctypes.c_int), ctypes.c_int]
sum_lib.sum_array.restype = ctypes.c_int

nums = [1,2,3,4,5,3,7,9,1,2]
ArrayType = ctypes.c_int *len(nums)
c_array = ArrayType(*nums)            # converting a python list to ctypes array

result = sum_lib.sum_array(c_array, len(nums))
print("Sum of the array: ", result)