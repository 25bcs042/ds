#include<stdio.h>
int g(int p) { printf("%d" ,p); return p; }
int h(int q) { printf("%d",q); return q; }
void f(int x , int y)  {
  g(x);
  h(y);
}
int main() {
  f(g(10),h(20));
}
 /* Dry Run
Line: f(g(10), h(20));

Since arguments are evaluated right to left, the order is:

Evaluate h(20)

Calls h(20)

Inside h: printf("%d", 20);

Prints: 20

Returns 20

Evaluate g(10)

Calls g(10)

Inside g: printf("%d", 10);

Prints: 10

Returns 10

Now function call becomes:

f( g(10) → 10 , h(20) → 20 )
i.e., f(10, 20)

Now inside function f(x, y)
Statement 1: g(x);

Calls g(10)

Prints: 10

Statement 2: h(y);

Calls h(20)

Prints: 20

🔥 Final Output (in exact printed order)
20 10 10 20
*/