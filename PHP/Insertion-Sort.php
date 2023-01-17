<?php
function insertion($array) {
    for ($i = 1; $i < count($array); $i++) {
        $value = $array[$i];
        for ($j = $i-1; $j>=0 && $array[$j]>$value; $j--) {
            $temp = $array[$j+1];
            $array[$j+1] = $array[$j];
            $array[$j] = $temp;
        }
    }
    return $array;
}

$a = [0, 1, 4, 2, -234, 233, 2];
print_r(insertion($a));
?>
