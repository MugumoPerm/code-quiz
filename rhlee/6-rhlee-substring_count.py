#!/usr/bin/python3

import ctypes

my_lib = ctypes.CDLL("./libsubstringcount.so")

my_lib.count_substring.argtypes = [ctypes.c_char_p]
my_lib.count_substring.restype = ctypes.c_int

phrase = "Emma is a good developer, Emma is a writer"

my_lib.count_substring(phrase.encode())
