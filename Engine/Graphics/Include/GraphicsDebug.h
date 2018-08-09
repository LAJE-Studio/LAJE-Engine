#pragma once

#include <CommonTypes.h>

#define glCall(x) glClearErrors();\
                  x;\
                  glCheckErrors(##x, __FILE__, __LINE__);


void glClearErrors();

void glCheckErrors(string function, string file, uint64 line);