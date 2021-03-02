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
