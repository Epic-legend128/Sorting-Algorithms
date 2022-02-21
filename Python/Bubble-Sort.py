#bubble sort
def bubble(array, limit):
  for i in range(limit, 0, -1):
    for j in range(0, i-1):
      if array[j] > array[j+1]:
        temp = array[j]
        array[j] = array[j+1]
        array[j+1] = temp


#an example
myArray = [0, 2, 1, -100, 0.2, -3.9, 2398, 382]
print(myArray) #array before sorted
bubble(myArray, len(myArray))
print(myArray) #array after sorted
