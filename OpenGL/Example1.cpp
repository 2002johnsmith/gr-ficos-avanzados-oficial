#include "Example1.h"
#include "IncludeGL.h"
#include <cmath>
#include "Example2.h"
#include "Figura.h"
#include "Figura3D.h"
#include "Figura2D.h"


//Example2 obj2;
//Figura2D fig2D;
//Figura3D fig3D;

Example1::Example1()
{
}
void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(30, 30, 30, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}

void Example1::Render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Example::DrawGrids();
	//DrawPoint();
	//Example::DrawAxis(100);

	//obj2.DrawPointWithTransform();
	//obj2.DrawAxisXYWithTransform();
	//obj2.DrawLineWithTransform();
	//obj2.DrawPointAndAxisXYZWithTransform();
	//obj2.DrawCubeWithTransform();

	//// Figuras 3D
	//fig3D.DrawCubeWithOwnCoordinates();
	//fig3D.DrawSphereWithOwnCoordinates();
	//fig3D.DrawPyramidWithOwnCoordinates();

	// Figuras 2D
	//fig2D.DrawSquareWithOwnCoordinates();
	//fig2D.DrawRectangleWithOwnCoordinates();
	//fig2D.DrawCircleWithOwnCoordinates();

	glFlush();

}
void Example1::DrawPoint()
{
	glPointSize(8.0f);
	glBegin(GL_POINTS);
	const float deci = 0.5f;
	const float otro = 0.01f;

	for (float n = 0.0f; n < 360; n += 0.01f) {  
		glColor3f(1.0f, 0.2f, 0.2f);
		float y = (4 * cos(n)) + (10 / tan(n));
		glVertex3f(n*deci, y*otro, 0.0f);
	}
	glEnd();
}
void Example1::DrawLine()
{
	glBegin(GL_LINES);
		glColor3f(1.0f, 0.2f, 0.2f);
		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
	glEnd();
}
void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{

}
void Example1::Idle()
{

}