<?php
$a = '1';
$b = &$a;
$b = "2$b";
$c = "3$b";

echo "$c";

/*kyu ki jab humne a varibale ki value variable mai mai rakhi toh b ki value ki bhi valur 1 ho gayi. ir jab 
fir ek bar humne variable $b liye or usme 2 value assin kiya toh $b ki value 2 or 1 ho gayi.
after code or humne variable $b ko print karvaya to hume as result $b = 21 value assign huaa. ok thank you*/
?>