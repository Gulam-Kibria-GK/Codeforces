

st=input()
#print (st)
sum=0
ans=int(st);
#print (ans)
for s in range(int(st),1001):
        s=str(s)
        #print (s)
        sum=0
        for x in s:
            sum+=int(x)
        if(sum%4==0):
            print (s)
            break;