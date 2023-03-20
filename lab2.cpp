#include<stdio.h>
#include<GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

float triangle[3][2]={{200,100},{400,100},{300,300}};
float h=0,k=0,theta;
void drawtriangle()
{
	glBegin(GL_LINE_LOOP);
	glVertex2fv(triangle[0]);
	glVertex2fv(triangle[1]);
	glVertex2fv(triangle[2]);
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawtriangle();
	glTranslatef(h,k,0);
	glRotatef(theta,0,0,1);
	glTranslatef(-h,-k,0);
	drawtriangle();
	glFlush();
}
void init()
{
	gluOrtho2D(-700,700,-700,700);
}

int main(int argc,char** argv)
{
	cout << "Enter the rotation angle.\n";
	cin >> theta;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(350,350);
	glutCreateWindow("house:C Tathva");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}

