/* Generated by CLooG v0.10.7 */
S1(i = 1,j = 1) ;
S2(i = 1,j = 1) ;
for (j=2;j<=M;j++) {
  S1(i = 1) ;
}
for (i=2;i<=M-1;i++) {
  for (j=1;j<=i-1;j++) {
    S1 ;
  }
  S1(j = i) ;
  S2(j = i) ;
  for (j=i+1;j<=M;j++) {
    S1 ;
  }
}
for (j=1;j<=M-1;j++) {
  S1(i = M) ;
}
S1(i = M,j = M) ;
S2(i = M,j = M) ;
