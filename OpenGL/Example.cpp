#include "Example.h"
#include <GL/glut.h>
//#include <stdio.h>

Example::Example()
{
}

void Example::DrawAxis(float distance)
{
	glBegin(GL_LINES);
	
	    // Eje X (rojo)
	    glColor3f(1.0f, 0.0f, 0.0f);
	    glVertex3f(0.0f, 0.0f, 0.0f);
	    glVertex3f(distance, 0.0f, 0.0f);
	
	    // Eje Y (verde)
	    glColor3f(0.0f, 1.0f, 0.0f);
	    glVertex3f(0.0f, 0.0f, 0.0f);
	    glVertex3f(0.0f, distance, 0.0f);
	
	    // Eje Z (azul)
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.0f, 0.0f, 0.0f);
	    glVertex3f(0.0f, 0.0f, distance);
	
	    
	
	
	    glEnd();
}

void Example::DrawGrids()
{
	 
}

