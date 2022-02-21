def selection(array, limit):
  for i in range(limit):
    mn = i
    for j in range(mn+1, limit):
      if array[j] < array[mn]: mn = j
    temp = array[i]
    array[i] = array[mn]
    array[mn] = temp

#an example
myArray = [0, 2, 1, -100, 0.2, -3.9, 2398, 382]
print(myArray) #array before sorted
selection(myArray, len(myArray))
print(myArray) #array after sorted
