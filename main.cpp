#include <GLFW\glfw3.h>

const int kWindowWidth = 640;
const int kWindowHeight = 480;

void init();
void draw();

int main(int argc, char **argv)
{
  GLFWwindow *window;

  // Initialize the library
  if (!glfwInit())
  {
    return -1;
  }

  // Create a windowed mode window and its OpenGL context
  window = glfwCreateWindow(kWindowWidth, kWindowHeight, "Hello OpenGL", NULL, NULL);

  if (!window)
  {
    glfwTerminate();

    return -1;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  init();

  // Loop until the user closes the window
  while (!glfwWindowShouldClose(window))
  {
    // Render here
    draw();

    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}

void init()
{
  // Set display-window color to white
  // Specifies the RGBA value used by glClear()
  glClearColor(1.0, 1.0, 1.0, 0.0);

	// Set the current matrix mode. The argument specifies which matrix
  // stack will be the target of the subsequent matrix operations.
  glMatrixMode(GL_PROJECTION);

  // Replace the current matrix with the identity matrix
  glLoadIdentity();

  // Multiply the current matrix with an orthographic matrix
  // The (0, 0) point is going to be in the top left corner of the window
  glOrtho(0.f, kWindowWidth, kWindowHeight, 0.f, 0.f, 1.f);
}

void draw()
{
  // Clear display window (with the color set with glClearColor)
  glClear(GL_COLOR_BUFFER_BIT);

  // Set line segment color to green
  glColor3f(0.f, .5f, 0.f);
  // GL_LINES indicates that each pair of vertices form an independent line segment
  glBegin(GL_LINES);
  // Specify line-segment geometry (starting and ending point)
  glVertex2i(100, 40);
  glVertex2i(300, 200);
  glEnd();

  // Process all OpenGL routines as quickly as possible
  glFlush();
}
