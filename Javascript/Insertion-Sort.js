var Insertion = function(array) { 
  for (var i = 1; array.length > i; i++) {
    var value = array[i];
    for (var j = i-1; j >= 0 && array[j] > value; j--) {
      //swap 
      var temp = array[j+1];
      array[j+1] = array[j];
      array[j] = temp;
    }
  }
}
