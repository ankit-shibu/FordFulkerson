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

Dataset       |   Time(ms)  |   Number of vertices  |   Number of edges |   Max Flow
--------------|-------------|-----------------------|-------------------|--------------------
 1 (6b.txt)   |   167       |   2211                |   3685            |   451
 2 (7b.txt)   |   12        |   914                 |   1912            |   63
 3 (8b.txt)   |   1696      |   8077                |   18075           |   959
 4 (9b.txt)   |   7189      |   14460               |   34458           |   2202
 5 (10b.txt)  |   20451     |   20456               |   50454           |   4069
 6 (5b.txt)   |   208615    |   55469               |   114062          |   12652

## TASK 2 - Min Cut
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). Next m lines a b c (implying directed edge from a to b with weight c.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file

## TASK 3 + TASK 4 - Bi-Partite matching
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). 
	* Next line [a1 a2 . . . an] where ai = 0 if node i is a person(set a) and ai = 1 if node i is a task(set b)
	* Next m lines a b (implying edge between a and b.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file
### Results for large datasets

Dataset       |   Time(ms)  |   Number of vertices  |   Number of edges  | Maximum Matching
--------------|-------------|-----------------------|--------------------|-------------------
 1 (6.txt)    |   187       |   2209                |   1476             |   451
 2 (7.txt)    |   14        |   912                 |   1000             |   63
 3 (8.txt)    |   1663      |   8075                |   10000            |   959	
 4 (9.txt)    |   7183      |   14458               |   20000            |   2202
 5 (10.txt)   |   20018     |   20454               |   30000            |   4069
 6 (5.txt)    |   171694    |   55467               |   58595            |   12652

## System Specification

## System Specification

## Issues 
- Constructing of adjacency matrices proved to be very expensive(memory constraints) for larger graphs
Fix:
Using adjacency list to represent the graph as it takes up O(n+m) space as against O(n^2) used for adjacency matrices


