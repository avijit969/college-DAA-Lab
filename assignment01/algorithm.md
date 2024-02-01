## Algorithm to Find Factorial of a Number Using Recursion

1. Input: Take an integer as input
1. Base Case: If the input is 0 or 1, return 1 (the factorial of 0 and 1 is 1).
1. Recursive Step: Return the product of the input and the factorial of (input - 1).
1. Output: The factorial of the input.

## Algorithm: GCD Using Recursion

1. Input: Take two positive integers as input.
2. Base Case: If the second integer is 0, return the first integer as the GCD.
3. Recursive Step: Otherwise, call the GCD function with the second integer and the remainder when the first integer is divided by the second integer.
4. Output: The result of the recursive call.

## Algorithm: Find the nth Fibonacci Number using Recursion

1. Input: Take an integer n as input.
1. Base Case: If n is 0 or 1, return n (since the 0th and 1st Fibonacci numbers are 0 and 1, respectively).
1. Recursive Step: The nth Fibonacci number is the sum of the (n-1)th and (n-2)th Fibonacci numbers. Recursively find the (n-1)th and (n-2)th Fibonacci numbers.
1. Output: Return the sum obtained in the recursive step.