#include "Example1.h"
#include "IncludeGL.h"
Example1::Example1()
{

}
void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
    Example::DrawAxis(10);
	DrawPoint();

	glFlush();
	
}
void Example1::DrawPoint()
{
	int N = 10;
	glPointSize(12.0f);
    glBegin(GL_POINTS);
	glColor3f(1.0f, 0.2f, 0.2f);
		for (size_t i = 0; i < N; i++)
		{
			glVertex3f(i, 0.0f, 0.0f);
		}
	glEnd();
}
void Example1::DrawLine()
{
	glBegin(GL_LINES);               // dibujar 1 segmento
	glColor3f(1.0f, 0.2f, 0.2f); // color (rojo suave)
	glVertex3f(0.5f, 0.2f, 0); // punto A
	glVertex3f(0.6f, 0.4f, 0); // punto B
	glEnd();
}


void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{

}


void Example1::Idle()
{

}

