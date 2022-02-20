var partition = function(array, p, r) {
  var q = p;
  for (var j = p; r > j; j++) {
    if (array[r] >= array[j]) {
      //swap the elements
      var temp = array[j];
      array[j] = array[q];
      array[q] = temp;
      q++;
    }
  }
  //swap elements
  var temp = array[r];
  array[r] = array[q];
  array[q] = temp;
  //return the index of the pivot
  return q;
}

var quicksort = function(array, l, r) {
  if (l < r) {
    var p = partition(array, l , r); //this is the pivot
    quicksort(array, l, p-1);
    quicksort(array, p+1, r);
  }
}
