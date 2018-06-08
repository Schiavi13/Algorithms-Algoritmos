a_list = [5,2,4,6,1,3]

def insertionSort(a_list):
    for j in range(1,len(a_list)):
        key = a_list[j]
        i = j-1
        
        while i>=0 and a_list[i]>key:
            a_list[i+1] = a_list[i]
            i = i-1
        a_list[i+1] = key

insertionSort(a_list)

print(a_list)
