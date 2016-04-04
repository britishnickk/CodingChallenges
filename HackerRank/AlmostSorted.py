import sys
length = int(input().split()[0])
line = [int(x) for x in input().split()]
if(sorted(line)==line):
    print("yes")
    sys.exit(0)
line.insert(0,-1)
line += [99999999]
#print(line)
first = ""
last = []
for i in range(1,length+1):
#    print("i is "+str(i)+", line[i]= "+str(line[i])+", line[i-1]= "+str(line[i-1])+", line[i+1]="+str(line[i+1])+", First= "+str(first))
    if line[i]>line[i-1] and line[i]>line[i+1]: #if i is a local maxima
        if not (first):
            first = i
    if first and line[i]<line[i-1] and line[i]<line[i+1]: #if i is a local minima
        #print("Adding "+str(i))
        last +=[i]
    #print(line[i])
            
if first and last:
    #print(last)
    for c in last:
        #print("get here. First,last: "+str(first)+' '+str(c))
        swapped = line[:]
        swapped[first] = line[c]
        swapped[c] = line[first]
        #print(swapped)
        if (sorted(swapped)==swapped):
            print("yes")
            print("swap "+str(first)+" "+str(c))
            sys.exit(0)
        

first = ""
last = ""
swapped = line[:]
reversing = False
for i in range(0,length+3):
    if line[i]>line[i+1]: #if i is large
        if not (first):
            first = i
            reversing=True
    if line[i]<line[i+1] and reversing: #if i is small
        if not (last):
            last =i
    if last:
        break
if first and last:
    
       # print (str(first)+" "+str(last))
        swapped[first:last+1] = swapped[first:last+1][::-1]
        #print (swapped)
        if(sorted(swapped)==swapped):
            print("yes")
            print("reverse "+str(first)+" "+str(c))
            sys.exit(0)
print('no')
