#include <iostream>
#include <GLFW/glfw3.h>

int main() {
	if (glfwInit() == GL_FALSE) {
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow *const window = glfwCreateWindow(640, 480, "sample", NULL, NULL);
	if (window == nullptr) {
		glfwTerminate();
		return 1;
	}

	glfwMakeContextCurrent(window);

	glClearColor(1.0f, .5f, 1.0f, 0.0f);

	while (glfwWindowShouldClose(window) == GL_FALSE) {
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwWaitEvents();
	}

	glfwTerminate();
	return 0;
}