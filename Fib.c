int fib(int n)
{
  int i;
  if ((n==0) | (n==1)) 
    return n;
  int a = 0;
  int b = 1;
  int tmp;
  for (i=0; i<n; i++) {
    tmp = b;
    b = a+b;
    a = tmp;
  }
  return a;
}

/*
n = 0
a = not reache
b = not reached
tmp = not reached
return = 0

n = 1
n = 0
a = not reached
b = not reached
tmp = not reached
return = 1

n = 2
a = 0
b = 1

0
tmp = 1
a = 1
b = 1

1
tmp = 1
a = 1
b = 2

1

 n   0 1 2 3 4 5 6
 r   0 1 1 2 3 5 8
     a b
       a b
         a b
           a b
             a b
               a b



The above is a visualization of the solution. Try making a visualization of the problem you work on
to make it easier to solve the problem.
*/