var Selection = function(array) {
  var mn; //mn means minimum
  var limit = array.length;
  for (var i = 0; array.length>i; i++) {
    mn = i;
    //find the index of the minimum element in the unsorted array
    for (var j = mn+1; j < limit; j++) {
      if (array[mn] > array[j]) {
        mn = j;
      }
    }
    //swap the minimum element in the unsorted array with the first one
    var temp = array[mn];
    array[mn] = array[i];
    array[i] = temp;
  }
}
