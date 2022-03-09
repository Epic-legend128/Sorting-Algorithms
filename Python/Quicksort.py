#in progress

#partition
def partition(array, p, r):
	q = p
	for j in range(p, r):
    	if array[j] <= array[r]:
        	#swap
        	temp = array[j]
        	array[j] = array[q]
        	array[q] = temp
            q++
    #swap
    temp = array[q]
    array[q] = array[r]
    array[r] = temp
    return q

#quicksort
def quicksort(array, p, r):
	if p < r:
    	q = partition(array, p, r)
        quicksort(array, p, q-1)
        quicksort(array, q+1, r)

#an example
myArray = [0, 2, 1, -100, 0.2, -3.9, 2398, 382]
print(myArray) #array before sorted
quicksort(myArray, len(myArray))
print(myArray) #array after sorted
