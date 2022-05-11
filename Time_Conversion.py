    #!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    Format = s[-2:]
    h = int(s[:2])
    if "PM" in Format:
        if h!=12:
            h = h+12;
        return str(h)+s[2:8]
    else:
        if h == 12:
            return "00"+s[2:8]
        else:
            return s[:8]

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)
    print(result)
    # fptr.write(result + '\n')

    # fptr.close()
