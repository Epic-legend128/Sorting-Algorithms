var merge = function(array, p, q, r) {
  var lowHalf = [];
  var highHalf = [];

  var k = p;
  var i;
  var j;
  
  //first part of the array
  for (i = 0; k <= q; i++, k++) {
    lowHalf[i] = array[k];
  }
  
  //second part of the array
  for (j = 0; k <= r; j++, k++) {
   highHalf[j] = array[k];
  }

  k = p;
  i = 0;
  j = 0;
  
  //merge the two arrays
  while(i < lowHalf.length && j < highHalf.length) {
    if (lowHalf[i] < highHalf[j]) {
      array[k] = lowHalf[i++];
    }
    else {
      array[k] = highHalf[j++];
    }
    k++;
  }
  
  while (i < lowHalf.length) {
    array[k++] = lowHalf[i++];
  }
  while(j < highHalf.length) {
    array[k++] = highHalf[j++];
  }
};

var mergesort = function(array, p, r) {
  if (p < r) {
    var q = floor((p+r)/2);
    mergesort(array, p, q);
    mergesort(array, q+1, r);
    merge(array, p, q, r);
  }
};
