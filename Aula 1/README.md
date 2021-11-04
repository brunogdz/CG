# Lab 1.1 - Modify the square

## Compile
g++ -o test quadrado.cpp -lGL -lGLU -lglut

## Run
./test

## Modify the object

### 1.2.1) Alterar a posição dos vértices do quadrado no código e ver o que acontece

glBegin(GL_POLYGON);<br/>
      glVertex3f (0.30, 0.55, 0.0);<br/>
      glVertex3f (0.65, 0.25, 0.0);<br/>
      glVertex3f (0.75, 0.75, 0.0);<br/>
      glVertex3f (0.25, 0.75, 0.0);<br/>
glEnd();<br/>

### 1.2.2) Alterar a cor do objeto no código e ver o que acontece

glColor3f (1.0, 0.0, 1.0);

### 1.2.3) Alterar o tipo do objeto no código e ver o que acontece

glBegin(GL_TRIANGLES);<br/>
      glVertex3f (0.30, 0.55, 0.0);<br/>
      glVertex3f (0.65, 0.25, 0.0);<br/>
      glVertex3f (0.75, 0.75, 0.0);<br/>
      glVertex3f (0.25, 0.75, 0.0);<br/>
glEnd();<br/>

## Modify the the commands


