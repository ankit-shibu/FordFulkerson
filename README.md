# Ford-Fulkerson Algorithm
In this assignment, we have implemented the Ford-Fulkerson algorithm to find the maximum flow and minimum cut.


## TASK 1 + TASK 4 - Ford Fulkerson Algorithm
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). Next m lines a b c (implying directed edge from a to b with weight c.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file
### Results for large datasets

Dataset       |   Time(ms)  |   Number of vertices  |   Number of edges
--------------|-------------|-----------------------|-----------------------
 1 (6b.txt)   |   167       |   2211                |   3685
 2 (7b.txt)   |   12        |   914                 |   1912
 3 (8b.txt)   |   1696      |   8077                |   18075
 4 (9b.txt)   |   7189      |   14460               |   34458
 5 (10b.txt)  |   20451     |   20456               |   50454
 6 (5b.txt)   |   208615    |   55469               |   114062

## TASK 2 + TASK 4 - Bi-Partite matching
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). 
	* Next line [a1 a2 . . . an] where ai = 0 if node i is a person(set a) and ai = 1 if node i is a task(set b)
	* Next m lines a b (implying edge between a and b.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file
### Results for large datasets

Dataset       |   Time(ms)  |   Number of vertices  |   Number of edges
--------------|-------------|-----------------------|-----------------------
 1 (6.txt)    |   187       |   2209                |   1476
 2 (7.txt)    |   14        |   912                 |   1000
 3 (8.txt)    |   1663      |   8075                |   10000
 4 (9.txt)    |   7183      |   14458               |   20000
 5 (10.txt)   |   20018     |   20454               |   30000
 6 (5.txt)    |   171694    |   55467               |   58595

## Issues 
- Both algorithms were not running for large graphs even in the server system
Fix:
The fix was to increase stack space allocated to the C++ program.
By default the OS allocates around 8MB space. However, for very large graphs the stack space used is high because of the dfs call


