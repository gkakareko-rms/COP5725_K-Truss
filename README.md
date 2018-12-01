# COP5725_K-Truss
This repository contains the final project for the [COP5725 Advanced Database Systems](http://www.cs.fsu.edu/~zhao/cop5725/project.html). The final project was the implementation of the K-Truss decomposition algorithms described in [Truss Decomposition in Massive Networks](http://vldb.org/pvldb/vol5/p812_jiawang_vldb2012.pdf). The improved algorithm appliance is based on the orginal [Wang code](https://github.com/cntswj/truss-decomposition)
The implementation contains the following K Truss decomposition:
* The basic decomposition algorithm proposed by [Cohen](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.505.7006&rep=rep1&type=pdf)
* The improved version of the in memory algorithm
* The efficient I/O algorithm Bottom up
* The In memory top-down decomposition 

The data folder contains the graph examples described in Table 1.
The input files need to follow the standart described below
#### Input
``
1st line:	n m	// #vertices, #edges <Enter>
(i+1)th line	u v	// ith edge u v vertexes 
``
#### Output
```
each line contains edge Ktruss description, where:
u v c	// (u,v) edge that belongs to c-class, (not (c+1)-truss).
``` 
#### Table 1. Graph examples 

|Name	|V_G | E_G |
------|:---|:----|
|P2P	|6.3K	|41.6K|
|HEP	|9.9K	|52.0K|
|Amzaon	|0.4M	|3.4M|
|Wiki	|2.4M	|5.0M|
|Skitter	|1.7M	|11.0M|
|Blog	|1.0M	|12.8M|

#### How to run the code
The repository includes the ``makefile`` for the g++  std=c++11. k_truss_dec is the executable that should be run in the following order:
```
./k_truss_dec <argument> <filename>
```
The following arguments are avaliable for the execution:
			*``-b`` Basic algorithm for the truss decomposition, prints the results to screen and saves them
			into filename-basic_algorithm.txt 
			*``-i`` The improved algorithm for the truss decomposition. The final results are printed to the screen
			and save to filename-improved_algorithm.txt 
			*``-bu`` Bottom up truss decomposition algorithm that is I/O effective. The partial results are saved 
			in filename-p1/2.txt. The final results are saved in the filenam-ebottom_up.txt 
			*``-td`` Top-Down Truss decomposition. The result is saved in filename-top_down.txt 
			*``-h`` Help option, print the help message to the screen


