#include<stdio.h>
struct card{
	int face_value;
	int shape;
	int colour;
};

int main()
{
	struct card c;
	c.face_value = 1;
	c.shape = 0;
	c.colour = 0;
}
