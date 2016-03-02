num_testcases = int(input())
#print ("There are ", num_testcases, " test cases")
for case in range(0,num_testcases):
    line = input()
    length,knapsack_size = line.split(" ")
    print ("Length is ",length)
    print ("Size is ",knapsack_size)
    line = input()
    items = line.split(" ")
    print ("The items are: ",items)
    max_set = {}
    for size in range(0,int(knapsack_size)):
        print("Solve for this size")
        
