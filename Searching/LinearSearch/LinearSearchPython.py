a_list = [5,2,4,6,1,3]

def linearSearch(a_list,v):
    for i in range(0,len(a_list)):
        if a_list[i]==v:
            print("Value %d is in index %d"%(v,i))
            return
    print("Value %d does not appear in the array"%(v))
    return

print(a_list)

v = int(input("Insert value "))
linearSearch(a_list,v)
