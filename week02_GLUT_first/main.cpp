#include <GL/glut.h>
void display()
{ ///step01-2
    ///glColor3f(0,1,0); ///���
    glBegin(GL_POLYGON);///�}�l�e�h���
        glColor3f(1,0,0);   glVertex2f( 0, 1); ///���⪺���IVertex
        glColor3f(0,1,0);   glVertex2f(-1,-1); ///��⪺���IVertex
        glColor3f(0,0,1);   glVertex2f(+1,-1); ///�Ŧ⪺���IVertex
    glEnd();///�����e

	///glutSolidTeapot( 0.5 ); ///�e�X�@�ӹ�ߪ����� �����j�p0.3

    glColor3f(1,1,0); ///����
	glutSolidTeapot( 0.3 ); ///�e�X�@�ӹ�ߪ����� �����j�p0.3
	glutSwapBuffers(); ///��GLUT��e��swap�e����ܪ��a��
}
///step01-1
int main(int argc, char *argv[])
{/// �W���O�S�O��main()�禡, ���ܦh�Ѽ�
    glutInit(&argc, argv); ///�� GLUT �}�_��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�o��,����ܪ��Ҧ��]�w�n
	glutCreateWindow("GLUT Shapes"); ///�o��}����
	glutDisplayFunc(display); ///�n��ܪ������禡
	glutMainLoop(); ///�̫᭱��main�j�� ���b�̫᭱
}
