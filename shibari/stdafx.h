#pragma once

#define WIN32_LEAN_AND_MEAN       

#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <iostream>
#include <stdarg.h> 
#include <cstdint>

using namespace std;

#ifndef _M_X64
  #ifdef _DEBUG
    #pragma comment(lib,"..\\Debug\\enma_pe.lib")
  #else
	#pragma comment(lib,"..\\Release\\enma_pe.lib")
  #endif
#else
  #ifdef _DEBUG
	#pragma comment(lib,"..\\x64\\Debug\\enma_pe.lib")
  #else
	#pragma comment(lib,"..\\x64\\Release\\enma_pe.lib")
  #endif
#endif

#include "shibari.h"