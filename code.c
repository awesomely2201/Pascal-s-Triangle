int fact(int k)
{
  if(k==0)
    return 1;
  else if(k==1)
    return 1;
  else
    return (k*fact(k-1));
}
void pascalTriangle(int k) 
{
  int a,b,c,d;
