# -*- coding: utf-8 -*-
"""
Created on Sat Jun 15 19:37:56 2019

@author: Gulam Kibria
"""

a=int(input())
arr = []
sum=0
b=input()
sum3=0
arr =b.split(' ')
for x in range(a*2):
    if(x<a):
       sum+=int(arr[x])
    sum3+=int(arr[x])
arr.sort()
sum2=0
sum3-=sum
for x in range(a):
    sum2+=int(arr[x])
if(sum==sum2 and sum==sum3):
    print(-1)
else:
    for x in range(a*2):
            print(int(arr[x]),end=' ')
print()