import functools
import pickle
num_testcases = int(input())
#print ("There are ", num_testcases, " test cases")

######################################
#  MemoizeMutable is a modified version of MemoizeMutable for
#  python 2.8 which is found in Alex Martelli's Python Cookbook
#
#  Memoize Mutable uses pickle to turn mutable arguements into
#  strings using pickle so that a list can be used as an arguement
#  to a class being memoized
#####################################
class MemoizeMutable:
    def __init__(self, fn):
        self.fn = fn
        self.memo = {}
    def __call__(self, *args, **kwds):
        str = pickle.dumps(args, 1)+pickle.dumps(kwds, 1)
        if str not in self.memo: 
            #print "miss"  # DEBUG INFO
            self.memo[str] = self.fn(*args, **kwds)
        else:
            pass
            #print "hit"  # DEBUG INFO

        return self.memo[str]


def knapsack(items, size):
    size=int(size)
    if size==0:
        return [];
    best=[]
    best_size=0
    for i in items:
        if i<=size:
            #prospective = items
            #prospective.remove(i)
            if i+sum(knapsack(items,size-i)) > best_size:
                 best_size = i+sum(knapsack(items,size-i))
                 best = knapsack(items,size-i) + [i]
#                best_size = i + sum(knapsack(prospective,size-i))
#                best= [i]+knapsack(prospective,size-i)
    return best
            
		
knapsack = MemoizeMutable(knapsack)

for case in range(0,num_testcases):
    line = input()
    length,knapsack_size = line.split(" ")
    line = input()
    items = [int(n) for n in line.split(" ")]
    sub_solutions = [[0]*int(length) for i in range(int(knapsack_size))]
    print (sum(knapsack(items,knapsack_size)))
#    for size in range(0,int(knapsack_size)):
#        if(size==0) 
#	print("Solve for this size")
        
