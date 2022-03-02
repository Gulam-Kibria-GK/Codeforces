# -*- coding: utf-8 -*-
"""
Created on Tue Jun 11 12:03:45 2019

@author: Gulam Kibria
"""
n=int(input());
for f in range(n):
    c=0
    arr = []
    d1=dict.fromkeys(range(100),0)
    a=int(input())
    b=input()
    arr2=b.split(' ')
    s=0
    for x in range(a):
        if(int(arr2[x])%3==0):
            c+=1
        else:
            arr.insert(s,int(arr2[x]))
            s+=1
    #arr.sort()
    kk=len(arr)
    for i in range(kk):
       for j in range(i,kk):
           if(d1[i]==0 and d1[j]==0):
               if(arr[i]+arr[j])%3==0:
                   d1[i]=1
                   d1[j]=1
                   c+=1
    sum=0
    for i in range(kk):
        if(d1[i]==0):
            sum+=arr[i]
            if(sum%3==0):
                c+=1
                sum=0
    print(c)