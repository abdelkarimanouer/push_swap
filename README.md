<h1 align="center">Push Swap Project</h1>

*This project has been created as part of the 42 curriculum by aanouer.*

## Description
The push_swap project is an algorithmic challenge that consists of sorting a list of integers using two stacks (stack a and stack b) and a limited set of operations.  
The goal is to produce the smallest possible sequence of operations that sorts the data in ascending order.  
The project focuses on algorithm design, optimization, and respecting strict constraints.

## Instructions

### Compilation
To build the project, use the Makefile included in the repository.
Running the following command will compile all the source files and create the push_swap executable:
```bash
make
```
### Execution
After compilation, you can run the program by passing a list of integers as arguments:
```bash
./push_swap arg1 arg2 arg3 ...
```
Replace arg1 arg2 arg3 ... with the numbers you want to sort.

### Error Handling
The program checks for:

- non-numeric values
- duplicated numbers
- values outside the 32-bit integer range
- incorrect formatting

If any error is found, the program will display:
```
Error
```

## Resources
- Peer learning and discussions with classmates and friends

- Article explaining the chunk-based algorithm:
[Link of Article](https://medium.com/@kilfenbaridon/how-to-over-optimize-an-algorithm-push-swap-42-school-project-d01a50e5fd78)

- How AI Was Used:
	- AI was used only for learning purposes, specifically to understand:
	- how the chunk algorithm works,
	- the rules it follows,
	- and example workflows of the algorithm.
	- AI was not used to write code or to design the project logic. All code and implementation decisions were done manually.