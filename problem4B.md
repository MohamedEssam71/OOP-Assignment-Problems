# Problem 1: Inclusive Speech Conversion

## Problem Description

Printing Many Numbers. Write a method with this specification:
`public static void numbers(String prefix, int k);`

The number k is non-negative. The argument called prefix is a String of 0's and 
1's. The method prints a sequence of binary numbers. Each output number 
consists of the prefix followed by a suffix of exactly k more binary digits (0's or 
1's). 

All possible combinations of the prefix and k-digit suffix are printed. For 
example, if prefix is the string "00101" and k is 2, then the method would print 
the prefix followed by the 4 possible suffixes shown on the side.
The stopping case occurs when k reaches zero (in which case the prefix is printed once by itself 
followed by nothing else).

## Input

<pre> String = '00101', k = 2 </pre>

## Output
<pre>
0010100
0010101
0010110
0010111
</pre>

