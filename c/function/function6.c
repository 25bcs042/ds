#include<stdio.h>
int f1(void);
int f2(void);
int f3(void);
int x=10;
int main() {
  int x=1;
  x+=f1() + f3() + f2();
  printf("%d" ,x);
  return 0;
}
int f1() { int x=25; x++; return x;}
int f2() { int x=50; x++; return x;}
int f3() {  x*=10; return x;}
/*Expression:

x += f1() + f3() + f2();


Right-to-left order:

1️⃣ Evaluate f2()
int x = 50;
x++;   // x becomes 51
return 51;


So f2() = 51

2️⃣ Evaluate f3()

f3() uses GLOBAL x, not local.

Global x = 10

Inside f3:

x *= 10  →  10 * 10 = 100
return 100;


So f3() = 100
Global x becomes 100 now.

3️⃣ Evaluate f1()
int x = 25;
x++;   // becomes 26
return 26;


So f1() = 26

🧮 Now calculate the expression
f1() + f3() + f2()
= 26 + 100 + 51
= 177


Local main() variable:

x = 1;
x += 177;
x = 178;

✅ Final Output
178
*/