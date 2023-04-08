#include <iostream>
#include "GL/glut.h"

void keyboard(unsigned char key, int x, int y);
void display();

int main(int argc, char** argv)
{
    std::cout << "Hello, OPENGL using GLUT!\n";

    glutInit(&argc, argv);

    // Create a single window with a keyboard and display callback
    glutCreateWindow("GLUT Test");
    glutKeyboardFunc(&keyboard);
    glutDisplayFunc(&display);

    // Run the GLUT event loop
    glutMainLoop();

    return EXIT_SUCCESS;
}

// keyboard callback function
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        // Exit on escape key press
        case '\x1B':
        {
            exit(EXIT_SUCCESS);
            break;
        }
    }
}

// display callback function
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // dispay a red square
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();

    glFlush();

}