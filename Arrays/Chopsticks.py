n,d=[int(x) for x in input().split()]
a=[]
for i in range(n):
    a.append(int(input()))
a.sort()
cnt=0
i=0
while(i<n-1):
    if(a[i+1]-a[i] <= d):
        cnt+=1
        i+=2
    else:
        i+=1
print(cnt)