# -*- coding: utf-8 -*-
"""
Created on Sat Jul 13 01:25:40 2019

@author: Gulam Kibria
"""

from collections import defaultdict
st=input()
st2=st.replace(" ","")
g=defaultdict(list)
for x in range(0,7):
    if(x%2==1):
        g[st2[x]].append(int(st2[x-1]))
for x in g:
    g[x].sort()
if(len(g)==3):
    print (2)
elif(len(g)==2):
    for x in g:
        if(len(g[x])==2):
            if((g[x][0]==g[x][1]) or abs(g[x][0]-g[x][1])==1 or abs(g[x][0]-g[x][1])==2):
                print (1)
            else:
                print (2)
elif (len(g)==1):
    for x in g:
       if((g[x][0]==g[x][1]==g[x][2]) or (abs(g[x][0]-g[x][1])==1 and abs(g[x][1]-g[x][2])==1)):
           print (0)
       elif(abs(g[x][0]-g[x][1])>2 and abs(g[x][1]-g[x][2])>2):
           print (2)
       else:
           print (1)