import queue as Q
T = int(input())
for case in range(T):
    line = input()
    N,M = line.split()
    edges = {}
    N=int(N)
    M=int(M)
    for edge in range(M):
        line = input()
        a,b,v = line.split()
        if a in edges:
            edges[str(a)].append([b,v])
        else:
            edges[str(a)] = [[b,v]]
        if b in edges:
            edges[str(b)].append([a,v])
        else:
            edges[str(b)] = [[a,v]]
    start = int(input())
    
    nodes = {}
    for x in range(1,N+1):
        nodes[str(x)]= (999999,True)
    
    nodes[str(start)] = (0,False)
    q = Q.PriorityQueue()
    for l in edges[str(start)]:
        q.put((int(l[1]),int(start),int(l[0])))
    while not q.empty():
        curr = q.get()
        s = int(curr[1])
        e = int(curr[2])
        new_path = int(curr[0])
        if new_path< int(nodes[str(e)][0]):
            nodes[str(e)]=(new_path,False)
            for l in edges[str(e)]:
                if(nodes[str(l[0])][1]):
                    q.put((int(l[1])+new_path,int(e),int(l[0])))
        
    
    
    ans=""
    for i in range(1,N+1):
        if nodes[str(i)][0]==999999:
            ans+='-1'+" "
        elif nodes[str(i)][0]==0:
            pass
        else:
            ans+=str(nodes[str(i)][0])+" "
    print (ans)
