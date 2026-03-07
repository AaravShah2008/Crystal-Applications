#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {

    if (!glfwInit()) {
        std::cout << "GLFW initialization failed\n";
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "Crystal Calculator", NULL, NULL);

    if (!window) {
        std::cout << "Window creation failed\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // Load OpenGL functions using GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD\n";
        return -1;
    }

    while (!glfwWindowShouldClose(window)) {

        glfwPollEvents();

        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}