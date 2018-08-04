#include <GraphicsDebug.h>
#include <GL/glew.h>
#include <Types.h>
#include <iostream>

void glClearErrors() {
    while (glGetError() != GL_NO_ERROR);
}

void glCheckErrors(string function, string file, uint64 line) {
    GLenum error;
    while ((error = glGetError()) != GL_NO_ERROR) {
        std::cout << "Error when calling GL function " << function << ": " << error << " (" << line << '@' << file << ')';
    }
}