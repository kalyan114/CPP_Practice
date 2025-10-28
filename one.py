from functools import *

def f(a,b):return a+b

l=[1,2,5,3,4]
evens=list(filter(lambda x: x%2==0,l))
odds=list(filter(lambda x:x&1,l))
print(evens)
print(odds)
sum=reduce(f,odds)
print(sum)
ss=reduce(lambda a,b:a+b,list(filter(lambda x:x&1,l)))
print(ss)
