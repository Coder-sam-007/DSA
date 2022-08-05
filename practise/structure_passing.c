#include <stdio.h>
struct marks
{
  int maths;
  int english;
  int science;
};

void display(struct marks *m)
{
  printf("English: %d \n", m->english);
  printf("Maths: %d \n", m->maths);
  printf("Science: %d \n", m->science);
}

int main()
{
  struct marks m1;
  m1.english = 46;
  m1.maths = 48;
  m1.science = 49;

  display(&m1);

  return 0;
}