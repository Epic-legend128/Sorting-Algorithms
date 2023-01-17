<?php
function bubble($array) {
    for ($i = count($array); $i>0; $i--) {
        for ($j = 0; $j<$i-1; $j++) {
            if ($array[$j] > $array[$j+1]) {
                $temp = $array[$j];
                $array[$j] = $array[$j+1];
                $array[$j+1] = $temp;
            }
        }
    }
    return $array;
}

$a = [0, 1, 4, 2, -234, 233, 2];
print_r(bubble($a));
?>
