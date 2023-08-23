#pragma once

#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak(); //在x=false时调用宏
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);
