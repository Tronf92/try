#include <GL\gl.h>



void InitializeVertexBuffer(){
	glGenBuffers(1, &positionBufferObject);
	