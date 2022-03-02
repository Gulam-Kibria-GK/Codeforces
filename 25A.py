# -*- coding: utf-8 -*-
"""
Created on Mon May 27 02:02:41 2019

@author: Gulam Kibria
"""

#a,b=input(),input()

a=int(input())
f=f1=k=k1=0
arr = []
b=(input())
arr=(b.split(' '))
#print (arr)

for x in range(0,a):
    if((int(arr[x]))%2==0):
        f+=1
        f2=x+1
    else:
        k+=1
        k2=x+1
if(k>f):
    print(f2)
else:
    print(k2)