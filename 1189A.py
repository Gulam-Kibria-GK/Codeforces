# -*- coding: utf-8 -*-
"""
Created on Tue Jul  9 23:24:43 2019

@author: Gulam Kibria
"""
a,st=int(input()),input()
f=0
for x in st:
    if (x=='0'):
        f+=1
n=a-f
l=k=0
if(n==f):
    print (2)
    print (st[0],end=' ')
    for x in range(1,a):
        print(st[x],end='')
else:
    print (1)
    print(st)