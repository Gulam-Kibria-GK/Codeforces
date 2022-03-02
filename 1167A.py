# -*- coding: utf-8 -*-
"""
Created on Tue May 21 13:20:58 2019

@author: Gulam Kibria
"""

b=int(input())
for i in range(b):
    d=int(input())
    a=input()
    c=f=0
    for x in a:
        if(x=='8'):
            f=1
            break
        c+=1 
    c=d-c;
    if(c>=11 and f==1):
        print("YES")
    else:
        print("NO")