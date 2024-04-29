C language structure and union
//The major difference between a structure and a union is storage. In a structure, each member has its distinct storage location while the members of a union utilize a shared memory location that is equal to the size of its largest data member
struct student
{
	int rollno; //4
	float marks;  //4
	char name[20]; //20

}s1,s2;

void main()
{
	struct student s3,s4;
	

}

