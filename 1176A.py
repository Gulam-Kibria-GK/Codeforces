# -*- coding: utf-8 -*-
"""
Created on Tue Jun 11 12:03:45 2019

@author: Gulam Kibria
"""

n=int(input())
c=0;
for x in range(n):
    a=int(input())
    while a>1:
        if(a%2==0):
            a//=2
            c+=1;
        elif (2*a)%3==0:
            a*=2;
            a//=3
            c+=1
        elif (4*a)%5==0:
            a*=4;
            a//=5
            c+=1;
        else :
            break
        if(a<=1):
            break
    #print (a)
    if(a==1):
        print(c)
    else:
        print(-1)
    c=0