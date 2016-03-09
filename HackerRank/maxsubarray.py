T = int(input())
for case in range(0,T):
    N = int(input())
    arr = [int(i) for i in input().split()]
    
     
    ans=0
    b=0
    for j in range(0,N):
        b=int(max(b+arr[j],arr[j]))
        ans=int(max(b,ans))
   # print (ans)
        
    
    ans2=0
    for e in arr:
        if e>0:
            ans2+=e
    print(int(ans),int(ans2))

