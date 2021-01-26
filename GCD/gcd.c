/*!
   \brief "Compute the greatest common divisor of 2 nonnegative integers
   p and q"
   \param "2 integers p and q"
   \return "Greater common divisor for the parameters entered"
*/
int gcd(int p, int q) {
  if (q == 0) return p;
  int r = p % q;
  return gcd(q, r);
}
