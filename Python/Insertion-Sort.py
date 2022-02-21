def insertion(array, limit):
  for i in range(1, limit):
    value = array[i]
    for j in range(i-1, -1, -1):
      if (array[j] < value): break
      temp = array[j]
      array[j] = array[j+1]
      array[j+1] = temp

#an example
myArray = [0, 2, 1, -100, 0.2, -3.9, 2398, 382]
print(myArray) #array before sorted
insertion(myArray, len(myArray))
print(myArray) #array after sorted
