# Read a matrix and print its transpose matrix
import numpy
m=int(input("Enter number of rows "))
n=int(input("Enter number of columns "))
print("Enter",m,"x",n,"matrix")
arr=[]
for i in range(m):
    row=list(map(int,input().split()))
    arr.append(row)
A=numpy.array(arr)
print("Given Matrix\n",A)
print("Transpose Matrix\n",A.T)
