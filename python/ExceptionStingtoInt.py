
#!/bin/python3

import sys


S = input().strip()
try:
    int(S)
    print(S)
except ValueError:
    print("Bad String")