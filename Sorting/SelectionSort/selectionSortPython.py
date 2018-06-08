a_list = [5,2,4,6,1,3]

def selectionSort(a_list):
    for i in range(0,len(a_list)-1):
        ind = i

        for j in range(i,len(a_list)-1):
            if a_list[j+1]<a_list[ind]:
                ind = j+1
        
        smallest = a_list[ind]
        a_list[ind] = a_list[i]
        a_list[i] = smallest

selectionSort(a_list)
print(a_list)
