TODO: group compile; Execute and Test at the end (automate them with *make*).

## Ex. 1 Hello World
*Write a program that prints "Ciao Mondo!" on terminal.*

#### Compile; Execute and Test

```bash
cd src/ ; gcc -Wall 01-hello_world.c -o hello_world
```
```bash
./hello_world

./hello_world < ../test/TestSet-01/input0.txt | diff - ../test/TestSet-01/output0.txt
```


## Ex. 2 Is Prime
*Write a program that reads a number from the terminal; print 1 if the number is prime, print 0 otherwise.*

#### Compile; Execute and Test
```bash
gcc -Wall 02-is_prime.c -o is_prime -lm
```
```bash
./is_prime

./is_prime < ../test/TestSet-02/input0.txt  | diff - ../test/TestSet-02/output0.txt
...
./is_prime < ../test/TestSet-02/input3.txt  | diff - ../test/TestSet-02/output3.txt
```

## Ex. 3 Sum
*Write a program that reads a sequence of numbers terminated by 0 and prints their sum.*

#### Compile; Execute and Test
```bash
gcc -Wall 03-sum.c -o sum
```
```bash
./sum
./sum < ../test/TestSet-03/input0.txt | diff - ../test/TestSet-03/output0.txt 
...
./sum < ../test/TestSet-03/input4.txt | diff - ../test/TestSet-03/output4.txt 
```

## Ex.4 Invert an array in loco
*Write a program that reads a sequence of N integers and stores them into an array; invert the array in place; print out the inverted array.
(Hint: use two pointers, one starting from the beginning of the array, one starting from the end of the array)*

#### Compile; Execute and Test
```bash
gcc -Wall 04-invert_array_in_loco.c -o invert_array_in_loco
```
```bash
./invert_array_in_loco
./invert_array_in_loco < ../test/TestSet-04/input0.txt | diff - ../test/TestSet-04/output0.txt
...
./invert_array_in_loco < ../test/TestSet-04/input5.txt | diff - ../test/TestSet-04/output5.txt 
```
## Ex. 5 Recursive sum of first N odd numbers
*Write a program that reads a number x and prints f(x), where f(x) is a recursive function that computes the sum of the first x odd numbers.*

#### Compile; Execute and Test
```bash
gcc -Wall 05-recursive_sum_of_first_n_odd_numbers.c -o sum_odd
```
```bash
./sum_odd
./sum_odd < ../test/TestSet-05/input0.txt | diff - ../test/TestSet-05/output0.txt
...
./sum_odd < ../test/TestSet-05/input4.txt | diff - ../test/TestSet-05/output4.txt
```
## Ex. 6 Swap two numbers
*Write a program that reads two numbers a and b (one line per number); swaps the two variables a and b; prints their values (one per line).*

#### Compile; Execute and Test
```bash
gcc -Wall 06-swap.c -o swap
```
```bash
./swap
./swap < ../test/TestSet-06/input0.txt | diff - ../test/TestSet-06/output0.txt 
```

## Ex. 7 Swap three numbers
Write a program that reads three numbers (a,b,c) into an array (one element per line); write a function **tswap(int\* x, int\* y, int\* z)** that swaps the three elements of the array with the mapping (x,y,z) --> (z,x,y); print the elements of the resultant array (one per line).

#### Compile; Execute and Test
```bash
gcc -Wall 07-triplet_swap.c -o tswap
```
```bash
./tswap
./tswap < ../test/TestSet-07/input0.txt | diff - ../test/TestSet-07/output0.txt
```

## Ex. 8 Min and Max of an array
Write a function **minmax(int\* a, int n, int\* argmin, int\* argmax)** that given an array *a* of length *n*, finds the indeces of the minimum and maximum elements (argmin, argmax). Write a program that reads 10 numbers into an array; calls **minmax**; prints to stdout, one per line, *argmin*, *a[argmin]*, *argmax*, *a[argmax]*.

```bash
gcc -Wall 08-minmax.c -o minmax
```
```bash
./minmax
./minmax < ../test/TestSet-08/input1.txt | diff - ../test/TestSet-08/output1.txt
```
