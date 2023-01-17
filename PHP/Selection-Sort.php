<?php
function selection($array) {
    $mx = 0;
    for ($i = count($array); $i > 0; $i--) {
        $mx = 0;
        for ($j = 0; $j<$i; $j++) {
            if ($array[$j] > $array[$mx]) {
                $mx = $j;
            }
        }
        $temp = $array[$i-1];
        $array[$i-1] = $array[$mx];
        $array[$mx] = $temp;
    }
    return $array;
}

$a = [0, 1, 4, 2, -234, 233, 2];
print_r(selection($a));
?>
