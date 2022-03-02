# -*- coding: utf-8 -*-
"""
Created on Fri Mar 13 21:05:21 2020

@author: G.K
"""

a=eval(input())

while a>0:
    a-=1
    
    n=eval(input())
    d1=dict.fromkeys(range(n+2),0)
    l=input()
    l=l.split(' ')
    #print(l)
    for i in range(0,n):
        d1[l[i]]=i
    c=0
    for i in range(0,n):
        if(d1[l[i]]>i+1):
            c=1
    if c==1:
        print("YES")
    else :
        print("NO")