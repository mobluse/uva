# UVa Online Judge
My accepted solutions for [UVa Online Judge](https://uva.onlinejudge.org/) in these programming languages:

Language Code | Version | Online IDE | Options | Extension
------------- | ----- | ------------ | ------- | ---------
PYTH3         | 3.5.1 | [Python 3](https://www.tutorialspoint.com/execute_python3_online.php) |  | py
PASCAL        | 3.0.0 | [Free Pascal Compiler](https://www.tutorialspoint.com/compile_pascal_online.php) | -vw -Sd | pas
ANSI C        | 5.3.0 | [GNU C Compiler](https://www.tutorialspoint.com/compile_c99_online.php) | -lm -lcrypt -O2 -pipe -ansi | c
￼C++           | 5.3.0 | [GNU C++ Compiler](https://www.tutorialspoint.com/compile_cpp_online.php) | -lm -lcrypt -O2 -pipe | cpp
￼￼C++11         | 5.3.0 | [GNU C++ Compiler](https://www.tutorialspoint.com/compile_cpp11_online.php) | -lm -lcrypt -O2 -pipe -std=c++11 | cpp
￼JAVA          | 1.8.0 | [OpenJDK Java](https://www.tutorialspoint.com/compile_java8_online.php) |  | java

They were ordered in compiler speed. Pascal, C, C++ and C++11 runs in 0.000 s for these problems. Python3, Pascal and Java
have bounds checking of arrays. C and C++ can have bounds checking if you 
use CERN [ROOT](../blob/master/root-system.md) or [Valgrind](https://en.wikipedia.org/wiki/Valgrind). ROOT series 5 also
has a debugger, but ROOT series 6 doesn't seem to have this.

In my cases, so far, C++ and C++11 use the same file.

I only solve rather simple problems here and no assignments. You can store private files on Bitbucket or Google Drive and 
download using e.g.:  
$ git clone https://USERNAME@bitbucket.org/USERNAME/uva-oj.git  
Password for 'https://USERNAME@bitbucket.org':  
$ wget -O main.cpp --no-check-certificate 'https://docs.google.com/uc?export=download&id=0B6gtvGVfzmdySGZSUzhBSkU2VDg'

| Problem | Solution |
| ------- | -------- |
| [11044	Searching for Nessy](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1985) | [Solutions](https://github.com/mobluse/uva/tree/master/11044) |

## Ranking
The programs are tested, and are ranked based on running time, but if they have the same running time in whole milliseconds, then they 
are ranked after submission date -- oldest first. One can use different programming languages, but those who generate fastest code have 
an advantage in the ranking. If one submits a faster program it replaces the old solution and you probably rise in total ranking on 
UVa O J. If one submits a program that isn't accepted you probably loose a bit in total ranking, but solving many problems are more
important for total ranking.
