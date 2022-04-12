n=int(input())
a=list(map(int,input().split()))
b=[i for i in range(1,n+1)]
c=[]
d=1
e=[]
while(len(b)>0):
    e+=[d]
    if(d in b):
        b.remove(d)
    else:
        c+=[e]
        e=[]
        d=b[0]
        continue
    d=a[d-1]
else:
    e+=[e[0]]
    c+=[e]
print(len(c))
for i in c:
    print(*i)