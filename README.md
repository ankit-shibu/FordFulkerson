# Ford-Fulkerson Algorithm
In this assignment, we have implemented the Ford-Fulkerson algorithm to find the maximum flow and minimum cut.

## General Discussion
- Input Graph requriements:
	* 1 source (Vertex with no incoming edge) 
	* 1 sink (Vertex with no outgoing edge)
- Time Complexity of the algorithm is O(C*m) where C is the sum of capacities out of source and m is the number of edges.
- Flow condition -> a) Flow into a node = Flow out of a node b) Total flow on an edge <= Capacity of the edge

## TASK 1 + TASK 4 - Ford Fulkerson Algorithm
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). Next m lines a b c (implying directed edge from a to b with weight c.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file
### Results for large datasets

Dataset       |   Time(ms)  | Number of vertices(n) | Number of edges(m)|  Max Flow(C) | Time/(C*m)
--------------|-------------|-----------------------|-------------------|--------------|---------------
 1 (6b.txt)   |   167       |   2211                |   3685            |   451	       | 1.004 e-4
 2 (7b.txt)   |   12        |   914                 |   1912            |   63         | 0.996 e-4
 3 (8b.txt)   |   1696      |   8077                |   18075           |   959        | 0.978 e-4
 4 (9b.txt)   |   7189      |   14460               |   34458           |   2202       | 0.9474 e-4
 5 (10b.txt)  |   20451     |   20456               |   50454           |   4069       | 0.996 e-4
 6 (5b.txt)   |   188615    |   55469               |   114062          |   12652      | 1.3 e-4

## TASK 2 - Min Cut
```
- g++ main.cpp graph.cpp -o main.out to compile code for small test cases
	* Format: First line n m (implying number of vertices and edges respectively). Next m lines a b c (implying directed edge from a to b with weight c.)
- g++ main2.cpp graph.cpp -o main.out to compile code for larger test cases. Need to specify the input file in the code

```
- Results in test folder. Check test/input for the input files and test/output for corresponding output file

Dataset       | Number of vertices(n) | Number of edges(m)|  Min-Cut 
--------------|-----------------------|-------------------|--------------------------------------------------------------
 1 ( 1.txt)   |   6                   |   10              |   23 Set A: 1 2 3 5 Set B: 4 6	       
 2 ( 2.txt)   |   2                   |   1               |   5 Set A: 1 Set B: 2         
 3 ( 3.txt)   |   6                   |   10              |   11 Set A: 1 3 Set B: 2 4 5 6        
 4 ( 4.txt)   |   7                   |   14              |   20 Set A: 1 3 Set B: 2 4 5 6 7             

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

Dataset       |   Time(ms)  | Number of vertices(n) | Number of edges(m) |Maximum Matching(C)| Time/(C*(n+m))
--------------|-------------|-----------------------|--------------------|-------------------|----------------
 1 (6.txt)    |   187       |   2209                |   1476             |   451             |   1.1 e-4
 2 (7.txt)    |   14        |   912                 |   1000             |   63              |   1.1 e-4
 3 (8.txt)    |   1663      |   8075                |   10000            |   959	     |   0.9 e-4
 4 (9.txt)    |   7183      |   14458               |   20000            |   2202            |   0.9 e-4
 5 (10.txt)   |   20018     |   20454               |   30000            |   4069            |   0.9 e-4
 6 (5.txt)    |   171694    |   55467               |   58595            |   12652           |   1.1 e-4

## Timing Analysis
- We know that the complexity of the Ford Fulkerson algorithm to find the max-flow is O(C*m) where C is the sum of capacities out of source and m is the number of edges. From both the result tables from Task 3 and Task 1 we observe that the Time/(C*m) is approximatley a constant. This is in accordance with our knowledge that the complexity of the algorithm is of the order of C*m. 

## Issues 
- Constructing of adjacency matrices proved to be very expensive(memory constraints) for larger graphs
- Fix: Using adjacency list to represent the graph as it takes up O(n+m) space as against O(n^2) used for adjacency matrices

## System Specification
- Processor - Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz, 2401 Mhz, 2 Core(s), 4 Logical Processor(s)
- Installed Physical Memory (RAM)	8.00 GB






