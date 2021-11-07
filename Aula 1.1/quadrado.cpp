#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#define TAMANHO_JANELA 500

float gX = 0;
float gY = 0;

void display(void)
{
   /* Limpar todos os pixels  */
   glClear (GL_COLOR_BUFFER_BIT);

   /* Define cor dos vértices com os valores R, G e B variando de 0.0 a 1.0 */
   glColor3f (1.0, 1.0, 1.0);
   /* Desenhar um polígono branco (retângulo) */
   glBegin(GL_POLYGON);
      glVertex3f (gX + 0.25, gY + 0.25, 0.0);
      glVertex3f (gX + 0.75, gY + 0.25, 0.0);
      glVertex3f (gX + 0.75, gY + 0.75, 0.0);
      glVertex3f (gX + 0.25, gY + 0.75, 0.0);
   glEnd();

   /* Desenhar no frame buffer! */
   glutSwapBuffers(); //Funcao apropriada para janela double buffer
}

void init (void) 
{
  /* selecionar cor de fundo (preto) */
  glClearColor (1.35, 0.62, 0.35, 0.0);

  /* inicializar sistema de visualizacao */
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void keyboard(unsigned char key, int x, int y){
switch (key)
   {
   case 'w':
   case 'W':
      gY += 0.01;
      //printf("Movendo para a norte %f",gY);
      break;
   case 's':
   case 'S':
      gY -= 0.01;
      //printf("Movendo para a baixo %f",gY);
      break;
   case 'a':
   case 'A':
      gX -= 0.01;
      //printf("Movendo para a esquerda %f",gX);
      break;
   case 'd':
   case 'D':
      gX += 0.01;
      //printf("Movendo para a direita %f",gX);
      break;   
   default:
      printf("Opção inválida!");
      break;
   }
   glutPostRedisplay();
   
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (TAMANHO_JANELA, TAMANHO_JANELA);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello world");
    init ();
    glutDisplayFunc(display); 
    glutKeyboardFunc(keyboard); 

    glutMainLoop();

    return 0;
}
