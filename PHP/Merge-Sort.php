<?php
function merge(&$array, $p, $q, $r) {
    $lowSize = $q-$p+1;
    $highSize = $r-$q;
    $lowHalf = array_fill(0, $lowSize, 0);
    $highHalf = array_fill(0, $highSize, 0);
    $k = $p;
    $i = 0;
    $j = 0;
    for ( ; $k<=$q; $k++) {
        $lowHalf[$k-$p] = $array[$k];
    }

    for ( ; $k<=$r; $k++) {
        $highHalf[$k-$q-1] = $array[$k];
    }
    $k = $p;
    $i = 0;
    $j = 0;
    while ($i < $lowSize && $j < $highSize) {
        if ($lowHalf[$i] < $highHalf[$j]) {
            $array[$k] = $lowHalf[$i++];
        }
        else {
            $array[$k] = $highHalf[$j++];
        }
        $k++;
    }

    for ( ; $i < $lowSize; $i++) {
        $array[$k++] = $lowHalf[$i];
    }

    for ( ; $j < $highSize; $j++) {
        $array[$k++] = $highHalf[$j];
    }
}

function mergesort($array, $p, $r) {
    if ($p<$r) {
        $q = floor(($p+$r)/2);
        $array = mergesort($array, $p, $q);
        $array = mergesort($array, $q+1, $r);
        merge($array, $p, $q, $r);
    }
    return $array;
}

$a = [0, 1, 4, 2, -234, 233, 2];
print_r(mergesort($a, 0, count($a)-1));
?>
