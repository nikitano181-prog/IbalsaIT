#pragma once
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;
float searchmax(float a[], int n);
int searchind(float a[], int &n, float maxi);
float zero(float a[], int &n);
float sum(float a[], int ind);
int searchind2(float a[], int &n, float maxi);
void movenumbers(float a[], int &n);
void modul(float a[], int &n, float l, float h);
int jjj( float a[], int n ,float m);

#include "../frontend/output.h"
