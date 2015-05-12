
#pragma once

#include <random>
#include<algorithm>
#include<vector>
#include<cassert>
#include<iostream>
#include <type_traits>
using namespace std;

// the definition for some constants
const double pi = 3.14159265;


// ��С����
const double epsilonDouble = numeric_limits<double>::epsilon(); // double��
const int epsilonInt = numeric_limits<int>::epsilon(); // int��


// ����1�����������Χ(start, finish)������Ϊdouble
double random(double start, double finish); 

// ����n�����������Χ(start, finish)������Ϊdouble
vector<double>  random(double start, double finish, int n);

// ����n��ָ���ֲ������������Ϊdouble
double exprnd(double lambda);
