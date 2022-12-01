def merge(array, p, q, r):
  lowHalf = []
  highHalf = []
  
  for x in range(p, q):
    lowHalf.append(array[x])
    
  for x in range(q+1, r):
    highHalf.append(array[x])
    
  k = p
  i = 0
  j = 0
  while i < len(lowHalf) and j < len(highHalf):
    if lowHalf[i] < highHalf[j]:
      array[k] = lowHalf[i]
       i+=1
    else:
      array[k] = highHalf[j]
      j+=1
      k+=1
      
  while i < len(lowHalf):
    array[k] = lowHalf[i]
    i+=1
    k+=1
    
  while j < len(highHalf):
    array[k] = highHalf[j]
    j+=1
    k+=1

def mergesort(array, p, r):
  if p < r:
    q = int((p+r)/2)
    mergesort(array, p, q)
    mergesort(array, q+1, r)
    merge(array, p, q, r)

array = [456, 25, 85, 2, 7, 4, 4.7, 2, -8, 4, 8, -646, 34]
print(array)
mergesort(array, 0, len(array))
print(array)
