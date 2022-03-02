# -*- coding: utf-8 -*-
"""
Created on Fri Mar 13 21:05:21 2020

@author: G.K
"""

def upper_bound(nums, target):
        end =len(nums)
        low = 0
        high = len(nums)-1
        while low < high:
            m = low + (high - low)//2
            # print(m,low, high)
            if nums[m] <= target:
                low = m+1
                if nums[m] > target:
                    end = m
                    
            else:
                high = m
        return end
    


if __name__ == '__main__':
            n=eval(input())
            l1=input()
            l2=input()
            l1=l1.split(' ')
            l2=l2.split(' ')
            l3=[]
            me=0
            for i in range(0,n):
                l1[i]=int(l1[i])
                l2[i]=int(l2[i])
            for i in range(0,n):
                l3.append(l1[i]-l2[i])
                if (l1[i]-l2[i])<=0:
                    me+=1
            l3.sort()
            ans=((n-me)*(n-me-1))//2
           # print(ans)
            for i in range(0,me):
                value=(-1*l3[i])
                #print(value)
                idx=upper_bound(l3,value);
                #print(idx)
                ans+=(n-idx)
            print(ans)