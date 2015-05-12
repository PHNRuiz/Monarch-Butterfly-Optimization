

Monarch Butterfly Optimization (MBO)

Gai-Ge Wang
May 12, 2015

email:  gaigewang@163.com
       gaigewang@gmail.com

The files in this zip archive are C++ files that can be used to study Monarch Butterfly Optimization algorithm.

MBO is the method that we invented and wrote about in the following paper:
Gai-Ge Wang, Suash Deb, and Zhihua Cui, Monarch Butterfly Optimization.
Neural Computing and Applications, in press.
DOI: 10.1007/s00521-015-1923-y


Note: 
1) I compile all the codes by using two compilers: Visual Studio Professional 2013 and Dev-C++ 5.10. I do not test other compilers. 
For Visual Studio Professional 2013:
It works well and there is no additional settings. 
For Dev-C++ 5.10:
It should open C++0x feature when compiling the files (C++0x feature is not open in the default form). The methods are as follows:
Tools--Compiler Options--General--select ¡°Add the following commands when calling the compiler:¡±, and then add ¡°-std=c++11¡± in the following text box. 
Tools--Compiler Options--General--select ¡°Add the following commands when calling the linker:¡±, and then add ¡°-static-libstdc++ -static-libgcc¡± in the following text box.

2) The codes are implemented in C++11 with extensive use of auto, lambdas, std::vectors and std::algorithms. Please use the compiler to run the codes that support the feature of C++11.

3) There are two folders: ¡°MBO_FEs_V1¡± and ¡±MBO_Generations_V1¡±. The fixed generations (iterations) and fixed Function Evaluations (FEs) are considered as termination condition for ¡°MBO_FEs_V1¡± and ¡±MBO_Generations_V1¡±, respectively. In the following, I will provide the detailed description about all the codes. 

4) As discussed in the paper, the MBO cannot find the best solution for each run. Our research team will improve it and distribute the codes in our future research. 

The C++ files can be used to reproduce the results in the paper, or to do your own experiments. The software is freely available for any purposes (it is on the Internet, after all) although I would of course appreciate an acknowledgement if you use it as part of a paper or presentation.


The C++ files and their descriptions are as follows:

For ¡°MBO_Generations_V1¡± folder:

Agent.h, Agent.cpp: 
This is to describe each monarch butterfly in MBO. Each monarch butterfly discussed in this paper includes two properties: position and fitness. Of course, you can add more properties to monarch butterfly.

ggwFunc.h, ggwFunc.cpp: 
Some tools are defined in these two files, such as generating random number. 

MBO_Object.h, MBO_Object.cpp: 
These two files are most important files. They implement the MBO algorithm. The fixed number of generations (iterations) is considered as termination condition.

main.cpp:
Defines the entry point for the console application.

output.txt:
Some important parameters and the best solution are saved in this file after the main.cpp is implemented.


For ¡°MBO_FEs_V1¡±folder:

Agent.h, Agent.cpp, ggwFunc.h, ggwFunc.cppmain.cpp, output.txt:
They are the same with ¡°MBO_Generations¡±.

MBO_Object.h, MBO_Object.cpp: 
These two files are most important files. They implement the MBO algorithm. The fixed number of Function Evaluations (FEs) is considered as termination condition.

I hope that this software is as interesting and useful to you as is to me. Feel free to contact me with any comments or questions.




