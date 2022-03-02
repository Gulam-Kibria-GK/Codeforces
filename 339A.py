# -*- coding: utf-8 -*-
"""
Created on Tue May 21 13:20:58 2019

@author: Gulam Kibria
"""

arr = []
a=input()
for x in a:
    if(x!='+'):
        arr.append(x)
        
arr.sort()
print (arr[0],end='')
n=len(arr)
for x in range(1,n):
    print ('+',end='')
    print(arr[x],end='')