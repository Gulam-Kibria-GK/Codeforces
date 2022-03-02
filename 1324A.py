# -*- coding: utf-8 -*-
"""
Created on Fri Mar 13 21:05:21 2020

@author: G.K
"""

a=int(input());
#print(a)
while a>=1:
    a-=1
    n=int(input())
    l=input();
    l=l.split(' ')
    f=0
    for i in range(0,n-1):
        if (((abs(int(l[i])-int(l[i+1])))%2)==1):
            f=1
            break
    if f==0:
        print("YES")
    else :
        print("NO")