/* Generated from liu-zhuge1.cloog by CLooG v0.14.0 64 bits in 0.02s. */
/* CLooG asked for 160 KBytes. */
if ((M >= 0) && (N >= 0)) {
  for (c2=-4;c2<=min(-1,3*M+N-4);c2++) {
    for (c4=max(0,c2-3*M+4);c4<=min(c2+4,N);c4++) {
      if ((c2-c4+4)%3 == 0) {
        i = (c2-c4+4)/3 ;
        S1(j = c4) ;
      }
    }
  }
}
if ((M <= 1) && (M >= 0)) {
  for (c2=0;c2<=3*M+N-4;c2++) {
    for (c4=max(c2-3*M,0);c4<=c2;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S2(j = c4) ;
      }
    }
    for (c4=c2-3*M+4;c4<=min(c2+4,N);c4++) {
      if ((c2-c4+4)%3 == 0) {
        i = (c2-c4+4)/3 ;
        S1(j = c4) ;
      }
    }
    for (c4=max(0,c2-3*M);c4<=c2;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S3(j = c4) ;
      }
    }
  }
}
for (c2=0;c2<=min(3*M-4,N-1);c2++) {
  for (c4=0;c4<=c2;c4++) {
    if ((c2-c4)%3 == 0) {
      i = (c2-c4)/3 ;
      S2(j = c4) ;
    }
    if ((c2-c4+4)%3 == 0) {
      i = (c2-c4+4)/3 ;
      S1(j = c4) ;
    }
  }
  for (c4=c2+1;c4<=min(c2+4,N);c4++) {
    if ((c2-c4+4)%3 == 0) {
      i = (c2-c4+4)/3 ;
      S1(j = c4) ;
    }
  }
  for (c4=0;c4<=c2;c4++) {
    if ((c2-c4)%3 == 0) {
      i = (c2-c4)/3 ;
      S3(j = c4) ;
    }
  }
}
if (M >= 2) {
  for (c2=3*M-3;c2<=N-1;c2++) {
    for (c4=max(c2-3*M,0);c4<=c2-3*M+3;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S2(j = c4) ;
      }
    }
    for (c4=c2-3*M+4;c4<=c2;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S2(j = c4) ;
      }
      if ((c2-c4+4)%3 == 0) {
        i = (c2-c4+4)/3 ;
        S1(j = c4) ;
      }
    }
    for (c4=c2+1;c4<=min(c2+4,N);c4++) {
      if ((c2-c4+4)%3 == 0) {
        i = (c2-c4+4)/3 ;
        S1(j = c4) ;
      }
    }
    for (c4=max(0,c2-3*M);c4<=c2;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S3(j = c4) ;
      }
    }
  }
}
if (N >= 0) {
  for (c2=N;c2<=3*M-4;c2++) {
    for (c4=0;c4<=N;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S2(j = c4) ;
      }
      if ((c2-c4+4)%3 == 0) {
        i = (c2-c4+4)/3 ;
        S1(j = c4) ;
      }
    }
    for (c4=0;c4<=N;c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S3(j = c4) ;
      }
    }
  }
}
for (c2=max(3*M-3,N);c2<=3*M+N-4;c2++) {
  for (c4=max(c2-3*M,0);c4<=c2-3*M+3;c4++) {
    if ((c2-c4)%3 == 0) {
      i = (c2-c4)/3 ;
      S2(j = c4) ;
    }
  }
  for (c4=c2-3*M+4;c4<=N;c4++) {
    if ((c2-c4)%3 == 0) {
      i = (c2-c4)/3 ;
      S2(j = c4) ;
    }
    if ((c2-c4+4)%3 == 0) {
      i = (c2-c4+4)/3 ;
      S1(j = c4) ;
    }
  }
  for (c4=max(0,c2-3*M);c4<=N;c4++) {
    if ((c2-c4)%3 == 0) {
      i = (c2-c4)/3 ;
      S3(j = c4) ;
    }
  }
}
if ((M >= 0) && (N >= 0)) {
  for (c2=max(3*M+N-3,0);c2<=3*M+N;c2++) {
    for (c4=max(0,c2-3*M);c4<=min(c2,N);c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S2(j = c4) ;
      }
    }
    for (c4=max(0,c2-3*M);c4<=min(c2,N);c4++) {
      if ((c2-c4)%3 == 0) {
        i = (c2-c4)/3 ;
        S3(j = c4) ;
      }
    }
  }
}
