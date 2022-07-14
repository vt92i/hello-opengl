#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include <stdio.h>

int main(void) {
    const int screenWidth = 640;
    const int screenHeight = 480;

    glfwInit();

    GLFWwindow *window = glfwCreateWindow(screenWidth, screenHeight, "Hello OpenGL", NULL, NULL);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwMakeContextCurrent(window);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    printf("OpenGL vendor: %s\n", glGetString(GL_VENDOR));
    printf("OpenGL version: %s\n", glGetString(GL_VERSION));
    printf("OpenGL shading language version: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        glViewport(0, 0, screenWidth, screenHeight);
        glClearColor(0.0f, 0.8f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
