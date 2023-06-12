# Problem 7: Teddy Bear Game

## Problem Description

Teddy Bear Picnic. Build a game with teddy bears. It starts when I give you some bears. You can then 
give back some bears, but you must follow these rules (n is the number of bears that you have):

1. If n is even, then you may give back exactly n / 2 bears.
2. If n is divisible by 3 or 4, then you may multiply the last two digits of n and give back this many 
bears. (By the way, the last digit of n is n % 10, and the next-to-last digit is ((n % 100) / 10).
3. If n is divisible by 5, then you may give back exactly 42 bears.
The goal of the game is to end up with EXACTLY 42 bears. For example, suppose that you start with 
250 bears. Then you could make these moves:

• Start with 250 bears.<br>
• Since 250 is divisible by 5, you may return 42 of the bears, leaving you with 208 bears.<br>
• Since 208 is even, you may return half of the bears, leaving you with 104 bears.<br>
• Since 104 is even, you may return half of the bears, leaving you with 52 bears.<br>
• Since 52 is divisible by 4, you may multiply the last two digits (resulting in 10) and return these 10 
bears. This leaves you with 42 bears.<br>
• You have reached the goal!



Write a recursive method to meet this specification:<br>
  `public static boolean bears(int n)`<br>
  `// Postcondition: A true return value means it is possible to win`<br>
  `// the bear game by starting with n bears. A false value means that`<br>
  `// it is not possible to win the bear game starting with n bears.`<br>
  `// Examples:`<br>
  `// bear(250) is true (as shown above)`<br>
  `// bear(42) is true`<br>
  `// bear(84) is true`<br>
  `// bear(53) is false`<br>
  `// bear(41) is false`<br>


