#include <GraphicsDebug.h>
#include <GL/glew.h>
#include <CommonTypes.h>
#include <iostream>
#include <glog/logging.h>

void glClearErrors() {
    while (glGetError() != GL_NO_ERROR);
}

void glCheckErrors(string function, string file, uint64 line) {
    GLenum error;
    while ((error = glGetError()) != GL_NO_ERROR) {
        LOG(ERROR) << "Error when calling GL function " << function << ": " << error << " (" << line << '@' << file
                  << ')';
    }
}