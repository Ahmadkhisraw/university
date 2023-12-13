from ctypes import *
import os

lib = None
try:
    lib = CDLL(os.path.join(os.getcwd(), 'liboperation.so'))
except Exception as e:
    print("Library wrong path or not created!")
    exit(-1)

_mul =  None
try:
    _mul = lib.mul
    _mul.argtypes = [c_double, c_double]
    _mul.restype = (c_double)
except Exception as e:
    print(e)
    print('cant load library!')
    exit(-1)

def multiplication(a, b):
    lhs = c_double(a)
    rhs = c_double(b)
    return _mul(lhs, rhs)