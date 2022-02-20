var Bubble = function(array) { 
    var end = array.length; //this is how to know when to stop the for loop and do while loop
    var swapped = false; // a variable used to exit the do while loop
    do {
      for (var i = 0; end > i-1; i++) {
        //if the current element is bigget than the next one then swap
        if (array[i] > array[i+1]) {
          var temp = array[i];
          array[i] = array[i+1];
          array[i+1] = temp;
          swapped = true;
        }
      }
        end--; //because the last element gets sorted
    } while (swapped && end >= 0);
}
