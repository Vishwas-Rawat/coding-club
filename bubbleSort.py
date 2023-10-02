from os import *
from sys import *
from collections import *
from math import *

def bubbleSort(arr,n):
    for i in range(n):
        for j in range(1, n):
            if arr[j] < arr[j - 1]:
                arr[j], arr[j - 1] = arr[j - 1], arr[j]
    pass



# Skip main function if you submit code in coding ninja
if __name__ == "__main__":
    arr = [5, 2, 9, 3, 1]
    n = len(arr)
    bubbleSort(arr,n)

    print("Sorted array:", arr)