#include <Windows.h>
#include "IncludeGL.h"
#include "Example.h"
#include "Example3.h"

#include <iostream>
using namespace std;

Example3* _Example;

void Render()
{
    ((Example3*)_Example)->Render();
}

void KeyboardFunc(unsigned char key, int X, int Y)
{
    ((Example3*)_Example)->KeyboardFunc(key, X, Y);
    glutPostRedisplay();
}

void reSize(GLsizei width, GLsizei height) {
    if (height == 0) height = 1;
    GLfloat aspect = (GLfloat)width / (GLfloat)height;

    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 0.1f, 10000.0f);
}

void Idle()
{
    ((Example3*)_Example)->Idle();
}

void init(void)
{
    _Example = new Example3();
    ((Example3*)_Example)->init();
}

int main(int argc, char** argv)
{
    GLuint width = 550;
    GLuint heigth = 550;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(width, heigth);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello");

    init();

    glutDisplayFunc(Render);
    glutIdleFunc(Idle);
    glutKeyboardFunc(KeyboardFunc);
    glutReshapeFunc(reSize);
    glutMainLoop();

    return 0;
}
