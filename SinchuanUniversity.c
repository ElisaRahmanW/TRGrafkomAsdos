#include<windows.h>
#include<gl/glut.h>
#include <math.h>
#include <stdio.h>


void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);


float xrot =0.f;
float yrot = 0.f;
float xdiff = 0.f;
float ydiff = 0.f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 50);
	glutCreateWindow("TR_GRAFKOM_J_9");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutReshapeFunc(ukuran);
	glutDisplayFunc(tampil);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
  glEnable(GL_COLOR_MATERIAL);
  glEnable(GL_LIGHT0);

	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(3.5);
	glLineWidth(1);
}


void tampil(void)
{
	glPushMatrix();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	gluLookAt(0,0,3,0,0,0,0,1,0);
	glRotatef(xrot, 1, 0,0);
	glRotatef(yrot, 0,1,0);

//ELISA RAHMAN WIJAYA - 672018248
//########################################################################################################################################
//PONDASI
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//AWALAN
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
//BAWAH
   glVertex3f(-100,-50,50);
   glVertex3f(100,-50,50);
   glVertex3f(100,-50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-50,50);
//DEPAN
   glVertex3f(-100,50,50);
   glVertex3f(100,50,50);
    glVertex3f(100,-50,50);
   glVertex3f(-100,-50,50);
    glVertex3f(-100,50,50);
//KIRI
   glVertex3f(-100,50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,50,50);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
//ATAS
   glVertex3f(105,50,-50);
   glVertex3f(-100,50,-50);
   glVertex3f(-100,50,50);
   glVertex3f(105,50,50);
   glVertex3f(105,50,-50);
//BELAKANG
   glVertex3f(100,-50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,50,-50);
   glVertex3f(100,50,-50);
   glVertex3f(100,-50,-50);
//KANAN
   glVertex3f(100,-50,50);
   glVertex3f(100,50,50);
   glVertex3f(100,50,-50);
   glEnd();

//BAWAH TENGAH
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,50);
   glVertex3f(60,-80,50);
   glVertex3f(-60,-80,50);
   glVertex3f(-60,-50,50);
   glEnd();

//BAWAH KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,50);
   glVertex3f(100,-80,50);
   glVertex3f(100,-80,-50);
   glVertex3f(100,-50,-50);
   glEnd();
//BAWAH KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,-80,50);
   glVertex3f(-100,-80,-50);
   glVertex3f(-100,-50,-50);
   glEnd();
//BAWAH BELAKANG
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,-50);
   glVertex3f(100,-80,-50);
   glVertex3f(-100,-80,-50);
   glVertex3f(-100,-50,-50);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//KENTENG
//****************************************************************************************************************************************
//KANAN KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(60,50,75);
   glVertex3f(60,50,50);
   glVertex3f(75,60,50);
   glEnd();
//KANAN DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(60,50,75);
   glVertex3f(75,60,50);
   glVertex3f(105,50,75);
   glEnd();
//KANAN KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(75,60,50);
   glVertex3f(75,60,-50);
   glVertex3f(105,50,-75);
   glVertex3f(105,50,75);
   glEnd();

//KIRI KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-60,50,75);
   glVertex3f(-60,50,50);
   glVertex3f(-75,60,50);
   glEnd();
//KIRI DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-60,50,75);
   glVertex3f(-75,60,50);
   glVertex3f(-105,50,75);
   glEnd();
//KIRI KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,60,50);
   glVertex3f(-75,60,-50);
   glVertex3f(-105,50,-75);
   glVertex3f(-105,50,75);
   glEnd();

//BELAKANG
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,60,-50);
   glVertex3f(-105,50,-75);
   glVertex3f(105,50,-75);
   glVertex3f(75,60,-50);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN ABU" ATAS
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(100,50,50);
   glVertex3f(100,50,70);
   glVertex3f(100,-50,70);
   glVertex3f(100,-50,50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(100,50,70);
   glVertex3f(60,50,70);
   glVertex3f(60,-50,70);
   glVertex3f(100,-50,70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.65,0.65,0.65);
   glVertex3f(60,50,70);
   glVertex3f(60,-50,70);
   glVertex3f(60,-50,50);
   glVertex3f(60,50,50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(60,50,75);
   glVertex3f(60,50,50);
   glVertex3f(105,50,50);
   glVertex3f(105,50,75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(60,-50,70);
   glVertex3f(60,-50,50);
   glVertex3f(100,-50,50);
   glVertex3f(100,-50,70);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN ABU" ATAS (BELAKANG)
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(100,50,-50);
   glVertex3f(100,50,-70);
   glVertex3f(100,-50,-70);
   glVertex3f(100,-50,-50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(100,50,-70);
   glVertex3f(60,50,-70);
   glVertex3f(60,-50,-70);
   glVertex3f(100,-50,-70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.65,0.65,0.65);
   glVertex3f(60,50,-70);
   glVertex3f(60,-50,-70);
   glVertex3f(60,-50,-50);
   glVertex3f(60,50,-50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(60,50,-75);
   glVertex3f(60,50,-50);
   glVertex3f(105,50,-50);
   glVertex3f(105,50,-75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(60,-50,-70);
   glVertex3f(60,-50,-50);
   glVertex3f(100,-50,-50);
   glVertex3f(100,-50,-70);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//JENDELA KANAN 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,40,70.1);
   glVertex3f(70,40,70.1);
   glVertex3f(70,20,70.1);
   glVertex3f(90,20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,40,70.15);
   glVertex3f(70,40,70.15);
   glVertex3f(70,20,70.15);
   glVertex3f(90,20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,35,70.15);
   glVertex3f(70,35,70.15);
   glVertex3f(90,30,70.15);
   glVertex3f(70,30,70.15);
   glVertex3f(70,25,70.15);
   glVertex3f(90,25,70.15);

   glVertex3f(75,40,70.15);
   glVertex3f(75,20,70.15);
   glVertex3f(80,40,70.15);
   glVertex3f(80,20,70.15);
   glVertex3f(85,40,70.15);
   glVertex3f(85,20,70.15);
   glEnd();

//JENDELA KANAN 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,10,70.1);
   glVertex3f(70,10,70.1);
   glVertex3f(70,-10,70.1);
   glVertex3f(90,-10,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,10,70.15);
   glVertex3f(70,10,70.15);
   glVertex3f(70,-10,70.15);
   glVertex3f(90,-10,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,5,70.15);
   glVertex3f(70,5,70.15);
   glVertex3f(90,0,70.15);
   glVertex3f(70,0,70.15);
   glVertex3f(70,-5,70.15);
   glVertex3f(90,-5,70.15);

   glVertex3f(75,10,70.15);
   glVertex3f(75,-10,70.15);
   glVertex3f(80,10,70.15);
   glVertex3f(80,-10,70.15);
   glVertex3f(85,10,70.15);
   glVertex3f(85,-10,70.15);
   glEnd();

//JENDELA KANAN 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,-40,70.1);
   glVertex3f(70,-40,70.1);
   glVertex3f(70,-20,70.1);
   glVertex3f(90,-20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,-40,70.15);
   glVertex3f(70,-40,70.15);
   glVertex3f(70,-20,70.15);
   glVertex3f(90,-20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,-35,70.15);
   glVertex3f(70,-35,70.15);
   glVertex3f(90,-30,70.15);
   glVertex3f(70,-30,70.15);
   glVertex3f(70,-25,70.15);
   glVertex3f(90,-25,70.15);

   glVertex3f(75,-40,70.15);
   glVertex3f(75,-20,70.15);
   glVertex3f(80,-40,70.15);
   glVertex3f(80,-20,70.15);
   glVertex3f(85,-40,70.15);
   glVertex3f(85,-20,70.15);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//JENDELA PINGGIR KANAN 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,40,57);
   glVertex3f(100.1,40,67);
   glVertex3f(100.1,20,67);
   glVertex3f(100.1,20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,40,57);
   glVertex3f(100.15,40,67);
   glVertex3f(100.15,20,67);
   glVertex3f(100.15,20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,35,57);
   glVertex3f(100.15,35,67);
   glVertex3f(100.15,40,62);
   glVertex3f(100.15,20,62);
   glEnd();
//JENDELA PINGGIR KANAN 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,10,57);
   glVertex3f(100.1,10,67);
   glVertex3f(100.1,-10,67);
   glVertex3f(100.1,-10,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,10,57);
   glVertex3f(100.15,10,67);
   glVertex3f(100.15,-10,67);
   glVertex3f(100.15,-10,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,5,57);
   glVertex3f(100.15,5,67);
   glVertex3f(100.15,10,62);
   glVertex3f(100.15,-10,62);
   glEnd();
//JENDELA PINGGIR KANAN 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,-40,57);
   glVertex3f(100.1,-40,67);
   glVertex3f(100.1,-20,67);
   glVertex3f(100.1,-20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,-40,57);
   glVertex3f(100.15,-40,67);
   glVertex3f(100.15,-20,67);
   glVertex3f(100.15,-20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,-25,57);
   glVertex3f(100.15,-25,67);
   glVertex3f(100.15,-40,62);
   glVertex3f(100.15,-20,62);
   glEnd();
	
	
	
	
	

//HOLBED JOSHUA PETTY - 672018260


	glPopMatrix();
	glutSwapBuffers();
}

void keyboard (unsigned char key, int x, int y)
{
	switch (key)
	{
		//maju
		case 'w':
		case 'W':
			glTranslatef(0,0,3);
			break;
		//mundur
		case 's':
		case 'S':
			glTranslatef(0,0,-3);
			break;
		//kanan
		case 'd':
		case 'D':
			glTranslatef(3,0,0);
			break;
		//kiri
		case 'a':
		case 'A':
			glTranslatef(-3,0,0);
			break;
		//naik
		case '7':
			glTranslatef(0,3,0);
			break;
		//turun
		case '9':
			glTranslatef(0,-3,0);
			break;
		//memutar maju naik
		case '2':
			glRotatef(2,1,0,0);
			break;
		//memutar maju turun
		case '8':
			glRotatef(-2,1,0,0);
			break;
		//memutar maju kanan
		case '6':
			glRotatef(2,0,1,0);
			break;
		//memutar maju kiri
		case '4':
			glRotatef(-2,0,1,0);
			break;
		//memutar kiri ditempat
		case '1':
			glRotatef(2,0,0,1);
			break;
		//	memutar kanan ditempat
		case '3':
			glRotatef(-2,0,0,1);
			break;
		//lihat bagian dalam
		case '5':
			if(is_depth)
			{
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else
			{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
	}
	tampil();
}

void idle()
{
	if (!mouseDown)
	{
		xrot += 0.3;
		yrot += 0.4;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void mouseMotion(int x, int y)
{
	if(mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi ==0) tinggi =1;
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(50,lebar/tinggi, 5, 1000);
glTranslatef(0,0,-200);
glMatrixMode(GL_MODELVIEW);
