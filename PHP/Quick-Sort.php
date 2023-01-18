<?php
function partition(&$array, $p, $r) {
    $q = $p;
    for ($j = $p; $j < $r; $j++) {
        if ($array[$j] <= $array[$r]) {
            $temp = $array[$j];
            $array[$j] = $array[$q];
            $array[$q] = $temp;
            $q++;
        }
    }
    $temp = $array[$q];
    $array[$q] = $array[$r];
    $array[$r] = $temp;
    return $q;
}

function quicksort($array, $p, $r) {
    if ($p<$r) {
        $q = partition($array, $p, $r);
        $array = quicksort($array, $p, $q-1);
        $array = quicksort($array, $q+1, $r);
    }
    return $array;
}

$a = [0, 1, 4, 2, -234, 233, 2];
print_r(quicksort($a, 0, count($a)-1));
?>
