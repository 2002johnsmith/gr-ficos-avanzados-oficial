#include "Example.h"
#include <GL/glut.h>
//#include <stdio.h>

Example::Example()
{

}

void Example::DrawAxis(float distance)
{
	glBegin(GL_LINES);               // dibujar 1 segmento
	glColor3f(1.0f, 0.0f, 0.0f); // color (rojo suave)
	glVertex3f(0.0f, 0.0f, 0.0f); // punto A
	glVertex3f(distance, 0.0f, 0.0f); // punto B
	glEnd();

	glBegin(GL_LINES);               // dibujar 1 segmento
	glColor3f(0.0f, 1.0f, 0.0f); // color (rojo suave)
	glVertex3f(0.0f, 0.0f, 0.0f); // punto A
	glVertex3f(0.0f, distance, 0.0f); // punto B
	glEnd();

	glBegin(GL_LINES);               // dibujar 1 segmento
	glColor3f(0.0f, 0.0f, 1.0f); // color (rojo suave)
	glVertex3f(0.0f, 0.0f, 0.0f); // punto A
	glVertex3f(0.0f, 0.0f, distance); // punto B
	glEnd();
}

void Example::DrawGrids()
{
	 
}

