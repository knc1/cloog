/* Generated from mg-interp2.cloog by CLooG v0.14.0 64 bits in 0.02s. */
/* CLooG asked for 160 KBytes. */
if ((M >= P+1) && (N >= Q+1)) {
  for (c2=1;c2<=O-1;c2++) {
    for (c4=Q;c4<=N-1;c4++) {
      for (c6=P;c6<=M-1;c6++) {
        S1(i = c2,j = c4,k = c6) ;
      }
    }
  }
}
if ((M >= 2) && (N >= Q+1)) {
  for (c2=1;c2<=O-1;c2++) {
    for (c4=Q;c4<=N-1;c4++) {
      for (c6=1;c6<=M-1;c6++) {
        S2(i = c2,j = c4,k = c6) ;
      }
    }
  }
}
if ((M >= P+1) && (N >= 2)) {
  for (c2=1;c2<=O-1;c2++) {
    for (c4=1;c4<=N-1;c4++) {
      for (c6=P;c6<=M-1;c6++) {
        S3(i = c2,j = c4,k = c6) ;
      }
    }
  }
}
if ((M >= 2) && (N >= 2)) {
  for (c2=1;c2<=O-1;c2++) {
    for (c4=1;c4<=N-1;c4++) {
      for (c6=1;c6<=M-1;c6++) {
        S4(i = c2,j = c4,k = c6) ;
      }
    }
  }
}
