#ifndef _HISQ_FORCE_MACROS_H_
#define _HISQ_FORCE_MACROS_H_


#ifndef HISQ_RECONSTRUCT_LINKS

#define link_W00_re LINK_W[0].x
#define link_W00_im LINK_W[0].y
#define link_W01_re LINK_W[1].x
#define link_W01_im LINK_W[1].y
#define link_W02_re LINK_W[2].x
#define link_W02_im LINK_W[2].y
#define link_W10_re LINK_W[3].x
#define link_W10_im LINK_W[3].y
#define link_W11_re LINK_W[4].x
#define link_W11_im LINK_W[4].y
#define link_W12_re LINK_W[5].x
#define link_W12_im LINK_W[5].y
#define link_W20_re LINK_W[6].x
#define link_W20_im LINK_W[6].y
#define link_W21_re LINK_W[7].x
#define link_W21_im LINK_W[7].y
#define link_W22_re LINK_W[8].x
#define link_W22_im LINK_W[8].y

#define link_X00_re LINK_X[0].x
#define link_X00_im LINK_X[0].y
#define link_X01_re LINK_X[1].x
#define link_X01_im LINK_X[1].y
#define link_X02_re LINK_X[2].x
#define link_X02_im LINK_X[2].y
#define link_X10_re LINK_X[3].x
#define link_X10_im LINK_X[3].y
#define link_X11_re LINK_X[4].x
#define link_X11_im LINK_X[4].y
#define link_X12_re LINK_X[5].x
#define link_X12_im LINK_X[5].y
#define link_X20_re LINK_X[6].x
#define link_X20_im LINK_X[6].y
#define link_X21_re LINK_X[7].x
#define link_X21_im LINK_X[7].y
#define link_X22_re LINK_X[8].x
#define link_X22_im LINK_X[8].y

#define link_Y00_re LINK_Y[0].x
#define link_Y00_im LINK_Y[0].y
#define link_Y01_re LINK_Y[1].x
#define link_Y01_im LINK_Y[1].y
#define link_Y02_re LINK_Y[2].x
#define link_Y02_im LINK_Y[2].y
#define link_Y10_re LINK_Y[3].x
#define link_Y10_im LINK_Y[3].y
#define link_Y11_re LINK_Y[4].x
#define link_Y11_im LINK_Y[4].y
#define link_Y12_re LINK_Y[5].x
#define link_Y12_im LINK_Y[5].y
#define link_Y20_re LINK_Y[6].x
#define link_Y20_im LINK_Y[6].y
#define link_Y21_re LINK_Y[7].x
#define link_Y21_im LINK_Y[7].y
#define link_Y22_re LINK_Y[8].x
#define link_Y22_im LINK_Y[8].y

#define link_Z00_re LINK_Z[0].x
#define link_Z00_im LINK_Z[0].y
#define link_Z01_re LINK_Z[1].x
#define link_Z01_im LINK_Z[1].y
#define link_Z02_re LINK_Z[2].x
#define link_Z02_im LINK_Z[2].y
#define link_Z10_re LINK_Z[3].x
#define link_Z10_im LINK_Z[3].y
#define link_Z11_re LINK_Z[4].x
#define link_Z11_im LINK_Z[4].y
#define link_Z12_re LINK_Z[5].x
#define link_Z12_im LINK_Z[5].y
#define link_Z20_re LINK_Z[6].x
#define link_Z20_im LINK_Z[6].y
#define link_Z21_re LINK_Z[7].x
#define link_Z21_im LINK_Z[7].y
#define link_Z22_re LINK_Z[8].x
#define link_Z22_im LINK_Z[8].y

#else // HISQ_RECONSTRUCT_LINKS

#define link_W00_re LINK_W[0].x
#define link_W00_im LINK_W[0].y
#define link_W01_re LINK_W[0].z
#define link_W01_im LINK_W[0].w
#define link_W02_re LINK_W[1].x
#define link_W02_im LINK_W[1].y
#define link_W10_re LINK_W[1].z
#define link_W10_im LINK_W[1].w
#define link_W11_re LINK_W[2].x
#define link_W11_im LINK_W[2].y
#define link_W12_re LINK_W[2].z
#define link_W12_im LINK_W[2].w
#define link_W20_re LINK_W[3].x
#define link_W20_im LINK_W[3].y
#define link_W21_re LINK_W[3].z
#define link_W21_im LINK_W[3].w
#define link_W22_re LINK_W[4].x
#define link_W22_im LINK_W[4].y


#define link_X00_re LINK_X[0].x
#define link_X00_im LINK_X[0].y
#define link_X01_re LINK_X[0].z
#define link_X01_im LINK_X[0].w
#define link_X02_re LINK_X[1].x
#define link_X02_im LINK_X[1].y
#define link_X10_re LINK_X[1].z
#define link_X10_im LINK_X[1].w
#define link_X11_re LINK_X[2].x
#define link_X11_im LINK_X[2].y
#define link_X12_re LINK_X[2].z
#define link_X12_im LINK_X[2].w
#define link_X20_re LINK_X[3].x
#define link_X20_im LINK_X[3].y
#define link_X21_re LINK_X[3].z
#define link_X21_im LINK_X[3].w
#define link_X22_re LINK_X[4].x
#define link_X22_im LINK_X[4].y


#define link_Y00_re LINK_Y[0].x
#define link_Y00_im LINK_Y[0].y
#define link_Y01_re LINK_Y[0].z
#define link_Y01_im LINK_Y[0].w
#define link_Y02_re LINK_Y[1].x
#define link_Y02_im LINK_Y[1].y
#define link_Y10_re LINK_Y[1].z
#define link_Y10_im LINK_Y[1].w
#define link_Y11_re LINK_Y[2].x
#define link_Y11_im LINK_Y[2].y
#define link_Y12_re LINK_Y[2].z
#define link_Y12_im LINK_Y[2].w
#define link_Y20_re LINK_Y[3].x
#define link_Y20_im LINK_Y[3].y
#define link_Y21_re LINK_Y[3].z
#define link_Y21_im LINK_Y[3].w
#define link_Y22_re LINK_Y[4].x
#define link_Y22_im LINK_Y[4].y


#define link_Z00_re LINK_Z[0].x
#define link_Z00_im LINK_Z[0].y
#define link_Z01_re LINK_Z[0].z
#define link_Z01_im LINK_Z[0].w
#define link_Z02_re LINK_Z[1].x
#define link_Z02_im LINK_Z[1].y
#define link_Z10_re LINK_Z[1].z
#define link_Z10_im LINK_Z[1].w
#define link_Z11_re LINK_Z[2].x
#define link_Z11_im LINK_Z[2].y
#define link_Z12_re LINK_Z[2].z
#define link_Z12_im LINK_Z[2].w
#define link_Z20_re LINK_Z[3].x
#define link_Z20_im LINK_Z[3].y
#define link_Z21_re LINK_Z[3].z
#define link_Z21_im LINK_Z[3].w
#define link_Z22_re LINK_Z[4].x
#define link_Z22_im LINK_Z[4].y

#endif // HISQ_RECONSTRUCT_LINKS

#ifndef GENERIC_MATRIX_MACROS 
#define GENERIC_MATRIX_MACROS

// Color matrices stored as an array of float2 or double2 

#define color_mat_T00_re COLOR_MAT_T[0].x
#define color_mat_T00_im COLOR_MAT_T[0].y
#define color_mat_T01_re COLOR_MAT_T[1].x
#define color_mat_T01_im COLOR_MAT_T[1].y
#define color_mat_T02_re COLOR_MAT_T[2].x
#define color_mat_T02_im COLOR_MAT_T[2].y
#define color_mat_T10_re COLOR_MAT_T[3].x
#define color_mat_T10_im COLOR_MAT_T[3].y 
#define color_mat_T11_re COLOR_MAT_T[4].x
#define color_mat_T11_im COLOR_MAT_T[4].y
#define color_mat_T12_re COLOR_MAT_T[5].x
#define color_mat_T12_im COLOR_MAT_T[5].y
#define color_mat_T20_re COLOR_MAT_T[6].x
#define color_mat_T20_im COLOR_MAT_T[6].y
#define color_mat_T21_re COLOR_MAT_T[7].x
#define color_mat_T21_im COLOR_MAT_T[7].y
#define color_mat_T22_re COLOR_MAT_T[8].x
#define color_mat_T22_im COLOR_MAT_T[8].y


#define color_mat_U00_re COLOR_MAT_U[0].x
#define color_mat_U00_im COLOR_MAT_U[0].y
#define color_mat_U01_re COLOR_MAT_U[1].x
#define color_mat_U01_im COLOR_MAT_U[1].y
#define color_mat_U02_re COLOR_MAT_U[2].x
#define color_mat_U02_im COLOR_MAT_U[2].y
#define color_mat_U10_re COLOR_MAT_U[3].x
#define color_mat_U10_im COLOR_MAT_U[3].y 
#define color_mat_U11_re COLOR_MAT_U[4].x
#define color_mat_U11_im COLOR_MAT_U[4].y
#define color_mat_U12_re COLOR_MAT_U[5].x
#define color_mat_U12_im COLOR_MAT_U[5].y
#define color_mat_U20_re COLOR_MAT_U[6].x
#define color_mat_U20_im COLOR_MAT_U[6].y
#define color_mat_U21_re COLOR_MAT_U[7].x
#define color_mat_U21_im COLOR_MAT_U[7].y
#define color_mat_U22_re COLOR_MAT_U[8].x
#define color_mat_U22_im COLOR_MAT_U[8].y


#define color_mat_V00_re COLOR_MAT_V[0].x
#define color_mat_V00_im COLOR_MAT_V[0].y
#define color_mat_V01_re COLOR_MAT_V[1].x
#define color_mat_V01_im COLOR_MAT_V[1].y
#define color_mat_V02_re COLOR_MAT_V[2].x
#define color_mat_V02_im COLOR_MAT_V[2].y
#define color_mat_V10_re COLOR_MAT_V[3].x
#define color_mat_V10_im COLOR_MAT_V[3].y 
#define color_mat_V11_re COLOR_MAT_V[4].x
#define color_mat_V11_im COLOR_MAT_V[4].y
#define color_mat_V12_re COLOR_MAT_V[5].x
#define color_mat_V12_im COLOR_MAT_V[5].y
#define color_mat_V20_re COLOR_MAT_V[6].x
#define color_mat_V20_im COLOR_MAT_V[6].y
#define color_mat_V21_re COLOR_MAT_V[7].x
#define color_mat_V21_im COLOR_MAT_V[7].y
#define color_mat_V22_re COLOR_MAT_V[8].x
#define color_mat_V22_im COLOR_MAT_V[8].y


#define color_mat_W00_re COLOR_MAT_W[0].x
#define color_mat_W00_im COLOR_MAT_W[0].y
#define color_mat_W01_re COLOR_MAT_W[1].x
#define color_mat_W01_im COLOR_MAT_W[1].y
#define color_mat_W02_re COLOR_MAT_W[2].x
#define color_mat_W02_im COLOR_MAT_W[2].y
#define color_mat_W10_re COLOR_MAT_W[3].x
#define color_mat_W10_im COLOR_MAT_W[3].y 
#define color_mat_W11_re COLOR_MAT_W[4].x
#define color_mat_W11_im COLOR_MAT_W[4].y
#define color_mat_W12_re COLOR_MAT_W[5].x
#define color_mat_W12_im COLOR_MAT_W[5].y
#define color_mat_W20_re COLOR_MAT_W[6].x
#define color_mat_W20_im COLOR_MAT_W[6].y
#define color_mat_W21_re COLOR_MAT_W[7].x
#define color_mat_W21_im COLOR_MAT_W[7].y
#define color_mat_W22_re COLOR_MAT_W[8].x
#define color_mat_W22_im COLOR_MAT_W[8].y







#define color_mat_W00_re COLOR_MAT_W[0].x
#define color_mat_W00_im COLOR_MAT_W[0].y
#define color_mat_W01_re COLOR_MAT_W[1].x
#define color_mat_W01_im COLOR_MAT_W[1].y
#define color_mat_W02_re COLOR_MAT_W[2].x
#define color_mat_W02_im COLOR_MAT_W[2].y
#define color_mat_W10_re COLOR_MAT_W[3].x
#define color_mat_W10_im COLOR_MAT_W[3].y 
#define color_mat_W11_re COLOR_MAT_W[4].x
#define color_mat_W11_im COLOR_MAT_W[4].y
#define color_mat_W12_re COLOR_MAT_W[5].x
#define color_mat_W12_im COLOR_MAT_W[5].y
#define color_mat_W20_re COLOR_MAT_W[6].x
#define color_mat_W20_im COLOR_MAT_W[6].y
#define color_mat_W21_re COLOR_MAT_W[7].x
#define color_mat_W21_im COLOR_MAT_W[7].y
#define color_mat_W22_re COLOR_MAT_W[8].x
#define color_mat_W22_im COLOR_MAT_W[8].y


#define color_mat_X00_re COLOR_MAT_X[0].x
#define color_mat_X00_im COLOR_MAT_X[0].y
#define color_mat_X01_re COLOR_MAT_X[1].x
#define color_mat_X01_im COLOR_MAT_X[1].y
#define color_mat_X02_re COLOR_MAT_X[2].x
#define color_mat_X02_im COLOR_MAT_X[2].y
#define color_mat_X10_re COLOR_MAT_X[3].x
#define color_mat_X10_im COLOR_MAT_X[3].y 
#define color_mat_X11_re COLOR_MAT_X[4].x
#define color_mat_X11_im COLOR_MAT_X[4].y
#define color_mat_X12_re COLOR_MAT_X[5].x
#define color_mat_X12_im COLOR_MAT_X[5].y
#define color_mat_X20_re COLOR_MAT_X[6].x
#define color_mat_X20_im COLOR_MAT_X[6].y
#define color_mat_X21_re COLOR_MAT_X[7].x
#define color_mat_X21_im COLOR_MAT_X[7].y
#define color_mat_X22_re COLOR_MAT_X[8].x
#define color_mat_X22_im COLOR_MAT_X[8].y


#define color_mat_Y00_re COLOR_MAT_Y[0].x
#define color_mat_Y00_im COLOR_MAT_Y[0].y
#define color_mat_Y01_re COLOR_MAT_Y[1].x
#define color_mat_Y01_im COLOR_MAT_Y[1].y
#define color_mat_Y02_re COLOR_MAT_Y[2].x
#define color_mat_Y02_im COLOR_MAT_Y[2].y
#define color_mat_Y10_re COLOR_MAT_Y[3].x
#define color_mat_Y10_im COLOR_MAT_Y[3].y 
#define color_mat_Y11_re COLOR_MAT_Y[4].x
#define color_mat_Y11_im COLOR_MAT_Y[4].y
#define color_mat_Y12_re COLOR_MAT_Y[5].x
#define color_mat_Y12_im COLOR_MAT_Y[5].y
#define color_mat_Y20_re COLOR_MAT_Y[6].x
#define color_mat_Y20_im COLOR_MAT_Y[6].y
#define color_mat_Y21_re COLOR_MAT_Y[7].x
#define color_mat_Y21_im COLOR_MAT_Y[7].y
#define color_mat_Y22_re COLOR_MAT_Y[8].x
#define color_mat_Y22_im COLOR_MAT_Y[8].y


#define color_mat_Z00_re COLOR_MAT_Z[0].x
#define color_mat_Z00_im COLOR_MAT_Z[0].y
#define color_mat_Z01_re COLOR_MAT_Z[1].x
#define color_mat_Z01_im COLOR_MAT_Z[1].y
#define color_mat_Z02_re COLOR_MAT_Z[2].x
#define color_mat_Z02_im COLOR_MAT_Z[2].y
#define color_mat_Z10_re COLOR_MAT_Z[3].x
#define color_mat_Z10_im COLOR_MAT_Z[3].y 
#define color_mat_Z11_re COLOR_MAT_Z[4].x
#define color_mat_Z11_im COLOR_MAT_Z[4].y
#define color_mat_Z12_re COLOR_MAT_Z[5].x
#define color_mat_Z12_im COLOR_MAT_Z[5].y
#define color_mat_Z20_re COLOR_MAT_Z[6].x
#define color_mat_Z20_im COLOR_MAT_Z[6].y
#define color_mat_Z21_re COLOR_MAT_Z[7].x
#define color_mat_Z21_im COLOR_MAT_Z[7].y
#define color_mat_Z22_re COLOR_MAT_Z[8].x
#define color_mat_Z22_im COLOR_MAT_Z[8].y




#define FF_COMPUTE_NEW_FULL_IDX_PLUS_UPDATE(mydir, idx, new_idx) do {	\
  switch(mydir){                                                        \
    case 0:                                                             \
      new_idx = ( (new_x[0]==X1m1)?idx-X1m1:idx+1);			\
      new_x[0] = (new_x[0]==X1m1)?0:new_x[0]+1;                         \
    break;                                                              \
    case 1:                                                             \
      new_idx = ( (new_x[1]==X2m1)?idx-X2X1mX1:idx+X1);		        \
      new_x[1] = (new_x[1]==X2m1)?0:new_x[1]+1;                         \
    break;                                                              \
    case 2:                                                             \
      new_idx = ( (new_x[2]==X3m1)?idx-X3X2X1mX2X1:idx+X2X1);	        \
      new_x[2] = (new_x[2]==X3m1)?0:new_x[2]+1;                         \
    break;                                                              \
    case 3:                                                             \
      new_idx = ( (new_x[3]==X4m1)?idx-X4X3X2X1mX3X2X1:idx+X3X2X1);     \
      new_x[3] = (new_x[3]==X4m1)?0:new_x[3]+1;                         \
    break;                                                              \
  }                                                                     \
}while(0)


#define FF_COMPUTE_NEW_FULL_IDX_MINUS_UPDATE(mydir, idx, new_idx) do {	\
  switch(mydir){                                                        \
    case 0:                                                             \
      new_idx = ( (new_x[0]==0)?idx+X1m1:idx-1);			\
      new_x[0] = (new_x[0]==0)?X1m1:new_x[0] - 1;                       \
    break;                                                              \
    case 1:                                                             \
      new_idx = ( (new_x[1]==0)?idx+X2X1mX1:idx-X1);		        \
      new_x[1] = (new_x[1]==0)?X2m1:new_x[1] - 1;                       \
    break;                                                              \
    case 2:                                                             \
      new_idx = ( (new_x[2]==0)?idx+X3X2X1mX2X1:idx-X2X1);		\
      new_x[2] = (new_x[2]==0)?X3m1:new_x[2] - 1;                       \
    break;                                                              \
    case 3:                                                             \
      new_idx = ( (new_x[3]==0)?idx+X4X3X2X1mX3X2X1:idx-X3X2X1);	\
      new_x[3] = (new_x[3]==0)?X4m1:new_x[3] - 1;                       \
    break;                                                              \
  }                                                                     \
}while(0)



#define FF_COMPUTE_NEW_FULL_IDX_PLUS(old_x1, old_x2, old_x3, old_x4, idx, mydir, new_idx) do { \
  switch(mydir){                                                                               \
    case 0:                                                                                    \
      new_idx = ( (old_x1==X1m1)?idx-X1m1:idx+1);			                       \
    break;                                                                                     \
    case 1:                                                                                    \
      new_idx = ( (old_x2==X2m1)?idx-X2X1mX1:idx+X1);		                               \
    break;                                                                                     \
    case 2:                                                                                    \
      new_idx = ( (old_x3==X3m1)?idx-X3X2X1mX2X1:idx+X2X1);	                               \
    break;                                                                                     \
    case 3:                                                                                    \
      new_idx = ( (old_x4==X4m1)?idx-X4X3X2X1mX3X2X1:idx+X3X2X1);                              \
    break;                                                                                     \
  }                                                                                            \
}while(0)



#define FF_COMPUTE_NEW_FULL_IDX_MINUS(old_x1, old_x2, old_x3, old_x4, idx, mydir, new_idx) do { \
  switch(mydir){                                                                                \
    case 0:                                                                                     \
      new_idx = ( (old_x1==0)?idx+X1m1:idx-1);			                                \
    break;                                                                                      \
    case 1:                                                                                     \
      new_idx = ( (old_x2==0)?idx+X2X1mX1:idx-X1);		                                \
    break;                                                                                      \
    case 2:                                                                                     \
      new_idx = ( (old_x3==0)?idx+X3X2X1mX2X1:idx-X2X1);		                        \
    break;                                                                                      \
    case 3:                                                                                     \
      new_idx = ( (old_x4==0)?idx+X4X3X2X1mX3X2X1:idx-X3X2X1);	                                \
    break;                                                                                      \
  }                                                                                             \
}while(0)





#define LOAD_MATRIX_18_SINGLE(gauge, idx, var)                  \
  var[0] = gauge[idx];                                          \
  var[1] = gauge[idx + Vh];                                     \
  var[2] = gauge[idx + Vhx2];                                   \
  var[3] = gauge[idx + Vhx3];                                   \
  var[4] = gauge[idx + Vhx4];                                   \
  var[5] = gauge[idx + Vhx5];                                   \
  var[6] = gauge[idx + Vhx6];                                   \
  var[7] = gauge[idx + Vhx7];                                   \
  var[8] = gauge[idx + Vhx8];


#define WRITE_MATRIX_18_SINGLE(mat, idx, var) do{ \
    mat[idx + 0*Vh] = var[0];  \
    mat[idx + 1*Vh] = var[1];  \
    mat[idx + 2*Vh] = var[2];  \
    mat[idx + 3*Vh] = var[3];  \
    mat[idx + 4*Vh] = var[4];  \
    mat[idx + 5*Vh] = var[5];  \
    mat[idx + 6*Vh] = var[6];  \
    mat[idx + 7*Vh] = var[7];  \
    mat[idx + 8*Vh] = var[8];  \
}while(0)


// matrix macros:
#define ADJ_MAT(a, b) \
  b##00_re =  a##00_re; \
  b##00_im = -a##00_im; \
  b##01_re =  a##10_re; \
  b##01_im = -a##10_im; \
  b##02_re =  a##20_re; \
  b##02_im = -a##20_im; \
  b##10_re =  a##01_re; \
  b##10_im = -a##01_im; \
  b##11_re =  a##11_re; \
  b##11_im = -a##11_im; \
  b##12_re =  a##21_re; \
  b##12_im = -a##21_im; \
  b##20_re =  a##02_re; \
  b##20_im = -a##02_im; \
  b##21_re =  a##12_re; \
  b##21_im = -a##12_im; \
  b##22_re =  a##22_re; \
  b##22_im = -a##22_im; 


#define ASSIGN_MAT(a, b) \
  b##00_re =  a##00_re; \
  b##00_im =  a##00_im; \
  b##01_re =  a##01_re; \
  b##01_im =  a##01_im; \
  b##02_re =  a##02_re; \
  b##02_im =  a##02_im; \
  b##10_re =  a##10_re; \
  b##10_im =  a##10_im; \
  b##11_re =  a##11_re; \
  b##11_im =  a##11_im; \
  b##12_re =  a##12_re; \
  b##12_im =  a##12_im; \
  b##20_re =  a##20_re; \
  b##20_im =  a##20_im; \
  b##21_re =  a##21_re; \
  b##21_im =  a##21_im; \
  b##22_re =  a##22_re; \
  b##22_im =  a##22_im; \



#define MATRIX_PRODUCT(c, a, b, simple) do{ \
  if(simple){                               \
      c##00_re = a##00_re*b##00_re - a##00_im*b##00_im + a##01_re*b##10_re - a##01_im*b##10_im + a##02_re*b##20_re - a##02_im*b##20_im; \
      c##00_im = a##00_re*b##00_im + a##00_im*b##00_re + a##01_re*b##10_im + a##01_im*b##10_re + a##02_re*b##20_im + a##02_im*b##20_re; \
      c##01_re = a##00_re*b##01_re - a##00_im*b##01_im + a##01_re*b##11_re - a##01_im*b##11_im + a##02_re*b##21_re - a##02_im*b##21_im; \
      c##01_im = a##00_re*b##01_im + a##00_im*b##01_re + a##01_re*b##11_im + a##01_im*b##11_re + a##02_re*b##21_im + a##02_im*b##21_re; \
      c##02_re = a##00_re*b##02_re - a##00_im*b##02_im + a##01_re*b##12_re - a##01_im*b##12_im + a##02_re*b##22_re - a##02_im*b##22_im; \
      c##02_im = a##00_re*b##02_im + a##00_im*b##02_re + a##01_re*b##12_im + a##01_im*b##12_re + a##02_re*b##22_im + a##02_im*b##22_re; \
      c##10_re = a##10_re*b##00_re - a##10_im*b##00_im + a##11_re*b##10_re - a##11_im*b##10_im + a##12_re*b##20_re - a##12_im*b##20_im; \
      c##10_im = a##10_re*b##00_im + a##10_im*b##00_re + a##11_re*b##10_im + a##11_im*b##10_re + a##12_re*b##20_im + a##12_im*b##20_re; \
      c##11_re = a##10_re*b##01_re - a##10_im*b##01_im + a##11_re*b##11_re - a##11_im*b##11_im + a##12_re*b##21_re - a##12_im*b##21_im; \
      c##11_im = a##10_re*b##01_im + a##10_im*b##01_re + a##11_re*b##11_im + a##11_im*b##11_re + a##12_re*b##21_im + a##12_im*b##21_re; \
      c##12_re = a##10_re*b##02_re - a##10_im*b##02_im + a##11_re*b##12_re - a##11_im*b##12_im + a##12_re*b##22_re - a##12_im*b##22_im; \
      c##12_im = a##10_re*b##02_im + a##10_im*b##02_re + a##11_re*b##12_im + a##11_im*b##12_re + a##12_re*b##22_im + a##12_im*b##22_re; \
      c##20_re = a##20_re*b##00_re - a##20_im*b##00_im + a##21_re*b##10_re - a##21_im*b##10_im + a##22_re*b##20_re - a##22_im*b##20_im; \
      c##20_im = a##20_re*b##00_im + a##20_im*b##00_re + a##21_re*b##10_im + a##21_im*b##10_re + a##22_re*b##20_im + a##22_im*b##20_re; \
      c##21_re = a##20_re*b##01_re - a##20_im*b##01_im + a##21_re*b##11_re - a##21_im*b##11_im + a##22_re*b##21_re - a##22_im*b##21_im; \
      c##21_im = a##20_re*b##01_im + a##20_im*b##01_re + a##21_re*b##11_im + a##21_im*b##11_re + a##22_re*b##21_im + a##22_im*b##21_re; \
      c##22_re = a##20_re*b##02_re - a##20_im*b##02_im + a##21_re*b##12_re - a##21_im*b##12_im + a##22_re*b##22_re - a##22_im*b##22_im; \
      c##22_im = a##20_re*b##02_im + a##20_im*b##02_re + a##21_re*b##12_im + a##21_im*b##12_re + a##22_re*b##22_im + a##22_im*b##22_re; \
  }else{                                      \
      c##00_re = a##00_re*b##00_re + a##00_im*b##00_im + a##10_re*b##10_re + a##10_im*b##10_im + a##20_re*b##20_re + a##20_im*b##20_im; \
      c##00_im = a##00_re*b##00_im - a##00_im*b##00_re + a##10_re*b##10_im - a##10_im*b##10_re + a##20_re*b##20_im - a##20_im*b##20_re; \
      c##01_re = a##00_re*b##01_re + a##00_im*b##01_im + a##10_re*b##11_re + a##10_im*b##11_im + a##20_re*b##21_re + a##20_im*b##21_im; \
      c##01_im = a##00_re*b##01_im - a##00_im*b##01_re + a##10_re*b##11_im - a##10_im*b##11_re + a##20_re*b##21_im - a##20_im*b##21_re; \
      c##02_re = a##00_re*b##02_re + a##00_im*b##02_im + a##10_re*b##12_re + a##10_im*b##12_im + a##20_re*b##22_re + a##20_im*b##22_im; \
      c##02_im = a##00_re*b##02_im - a##00_im*b##02_re + a##10_re*b##12_im - a##10_im*b##12_re + a##20_re*b##22_im - a##20_im*b##22_re; \
      c##10_re = a##01_re*b##00_re + a##01_im*b##00_im + a##11_re*b##10_re + a##11_im*b##10_im + a##21_re*b##20_re + a##21_im*b##20_im; \
      c##10_im = a##01_re*b##00_im - a##01_im*b##00_re + a##11_re*b##10_im - a##11_im*b##10_re + a##21_re*b##20_im - a##21_im*b##20_re; \
      c##11_re = a##01_re*b##01_re + a##01_im*b##01_im + a##11_re*b##11_re + a##11_im*b##11_im + a##21_re*b##21_re + a##21_im*b##21_im; \
      c##11_im = a##01_re*b##01_im - a##01_im*b##01_re + a##11_re*b##11_im - a##11_im*b##11_re + a##21_re*b##21_im - a##21_im*b##21_re; \
      c##12_re = a##01_re*b##02_re + a##01_im*b##02_im + a##11_re*b##12_re + a##11_im*b##12_im + a##21_re*b##22_re + a##21_im*b##22_im; \
      c##12_im = a##01_re*b##02_im - a##01_im*b##02_re + a##11_re*b##12_im - a##11_im*b##12_re + a##21_re*b##22_im - a##21_im*b##22_re; \
      c##20_re = a##02_re*b##00_re + a##02_im*b##00_im + a##12_re*b##10_re + a##12_im*b##10_im + a##22_re*b##20_re + a##22_im*b##20_im; \
      c##20_im = a##02_re*b##00_im - a##02_im*b##00_re + a##12_re*b##10_im - a##12_im*b##10_re + a##22_re*b##20_im - a##22_im*b##20_re; \
      c##21_re = a##02_re*b##01_re + a##02_im*b##01_im + a##12_re*b##11_re + a##12_im*b##11_im + a##22_re*b##21_re + a##22_im*b##21_im; \
      c##21_im = a##02_re*b##01_im - a##02_im*b##01_re + a##12_re*b##11_im - a##12_im*b##11_re + a##22_re*b##21_im - a##22_im*b##21_re; \
      c##22_re = a##02_re*b##02_re + a##02_im*b##02_im + a##12_re*b##12_re + a##12_im*b##12_im + a##22_re*b##22_re + a##22_im*b##22_im; \
      c##22_im = a##02_re*b##02_im - a##02_im*b##02_re + a##12_re*b##12_im - a##12_im*b##12_re + a##22_re*b##22_im - a##22_im*b##22_re; \
  }    \
}while(0)


#define MAT_MUL_MAT(a, b, c) \
  c##00_re = a##00_re*b##00_re - a##00_im*b##00_im + a##01_re*b##10_re - a##01_im*b##10_im + a##02_re*b##20_re - a##02_im*b##20_im; \
  c##00_im = a##00_re*b##00_im + a##00_im*b##00_re + a##01_re*b##10_im + a##01_im*b##10_re + a##02_re*b##20_im + a##02_im*b##20_re; \
  c##01_re = a##00_re*b##01_re - a##00_im*b##01_im + a##01_re*b##11_re - a##01_im*b##11_im + a##02_re*b##21_re - a##02_im*b##21_im; \
  c##01_im = a##00_re*b##01_im + a##00_im*b##01_re + a##01_re*b##11_im + a##01_im*b##11_re + a##02_re*b##21_im + a##02_im*b##21_re; \
  c##02_re = a##00_re*b##02_re - a##00_im*b##02_im + a##01_re*b##12_re - a##01_im*b##12_im + a##02_re*b##22_re - a##02_im*b##22_im; \
  c##02_im = a##00_re*b##02_im + a##00_im*b##02_re + a##01_re*b##12_im + a##01_im*b##12_re + a##02_re*b##22_im + a##02_im*b##22_re; \
  c##10_re = a##10_re*b##00_re - a##10_im*b##00_im + a##11_re*b##10_re - a##11_im*b##10_im + a##12_re*b##20_re - a##12_im*b##20_im; \
  c##10_im = a##10_re*b##00_im + a##10_im*b##00_re + a##11_re*b##10_im + a##11_im*b##10_re + a##12_re*b##20_im + a##12_im*b##20_re; \
  c##11_re = a##10_re*b##01_re - a##10_im*b##01_im + a##11_re*b##11_re - a##11_im*b##11_im + a##12_re*b##21_re - a##12_im*b##21_im; \
  c##11_im = a##10_re*b##01_im + a##10_im*b##01_re + a##11_re*b##11_im + a##11_im*b##11_re + a##12_re*b##21_im + a##12_im*b##21_re; \
  c##12_re = a##10_re*b##02_re - a##10_im*b##02_im + a##11_re*b##12_re - a##11_im*b##12_im + a##12_re*b##22_re - a##12_im*b##22_im; \
  c##12_im = a##10_re*b##02_im + a##10_im*b##02_re + a##11_re*b##12_im + a##11_im*b##12_re + a##12_re*b##22_im + a##12_im*b##22_re; \
  c##20_re = a##20_re*b##00_re - a##20_im*b##00_im + a##21_re*b##10_re - a##21_im*b##10_im + a##22_re*b##20_re - a##22_im*b##20_im; \
  c##20_im = a##20_re*b##00_im + a##20_im*b##00_re + a##21_re*b##10_im + a##21_im*b##10_re + a##22_re*b##20_im + a##22_im*b##20_re; \
  c##21_re = a##20_re*b##01_re - a##20_im*b##01_im + a##21_re*b##11_re - a##21_im*b##11_im + a##22_re*b##21_re - a##22_im*b##21_im; \
  c##21_im = a##20_re*b##01_im + a##20_im*b##01_re + a##21_re*b##11_im + a##21_im*b##11_re + a##22_re*b##21_im + a##22_im*b##21_re; \
  c##22_re = a##20_re*b##02_re - a##20_im*b##02_im + a##21_re*b##12_re - a##21_im*b##12_im + a##22_re*b##22_re - a##22_im*b##22_im; \
  c##22_im = a##20_re*b##02_im + a##20_im*b##02_re + a##21_re*b##12_im + a##21_im*b##12_re + a##22_re*b##22_im + a##22_im*b##22_re; 

#define MAT_MUL_ADJ_MAT(a, b, c) \
  c##00_re =    a##00_re*b##00_re + a##00_im*b##00_im + a##01_re*b##01_re + a##01_im*b##01_im + a##02_re*b##02_re + a##02_im*b##02_im; \
  c##00_im =  - a##00_re*b##00_im + a##00_im*b##00_re - a##01_re*b##01_im + a##01_im*b##01_re - a##02_re*b##02_im + a##02_im*b##02_re; \
  c##01_re =    a##00_re*b##10_re + a##00_im*b##10_im + a##01_re*b##11_re + a##01_im*b##11_im + a##02_re*b##12_re + a##02_im*b##12_im; \
  c##01_im =  - a##00_re*b##10_im + a##00_im*b##10_re - a##01_re*b##11_im + a##01_im*b##11_re - a##02_re*b##12_im + a##02_im*b##12_re; \
  c##02_re =    a##00_re*b##20_re + a##00_im*b##20_im + a##01_re*b##21_re + a##01_im*b##21_im + a##02_re*b##22_re + a##02_im*b##22_im; \
  c##02_im =  - a##00_re*b##20_im + a##00_im*b##20_re - a##01_re*b##21_im + a##01_im*b##21_re - a##02_re*b##22_im + a##02_im*b##22_re; \
  c##10_re =    a##10_re*b##00_re + a##10_im*b##00_im + a##11_re*b##01_re + a##11_im*b##01_im + a##12_re*b##02_re + a##12_im*b##02_im; \
  c##10_im =  - a##10_re*b##00_im + a##10_im*b##00_re - a##11_re*b##01_im + a##11_im*b##01_re - a##12_re*b##02_im + a##12_im*b##02_re; \
  c##11_re =    a##10_re*b##10_re + a##10_im*b##10_im + a##11_re*b##11_re + a##11_im*b##11_im + a##12_re*b##12_re + a##12_im*b##12_im; \
  c##11_im =  - a##10_re*b##10_im + a##10_im*b##10_re - a##11_re*b##11_im + a##11_im*b##11_re - a##12_re*b##12_im + a##12_im*b##12_re; \
  c##12_re =    a##10_re*b##20_re + a##10_im*b##20_im + a##11_re*b##21_re + a##11_im*b##21_im + a##12_re*b##22_re + a##12_im*b##22_im; \
  c##12_im =  - a##10_re*b##20_im + a##10_im*b##20_re - a##11_re*b##21_im + a##11_im*b##21_re - a##12_re*b##22_im + a##12_im*b##22_re; \
  c##20_re =    a##20_re*b##00_re + a##20_im*b##00_im + a##21_re*b##01_re + a##21_im*b##01_im + a##22_re*b##02_re + a##22_im*b##02_im; \
  c##20_im =  - a##20_re*b##00_im + a##20_im*b##00_re - a##21_re*b##01_im + a##21_im*b##01_re - a##22_re*b##02_im + a##22_im*b##02_re; \
  c##21_re =    a##20_re*b##10_re + a##20_im*b##10_im + a##21_re*b##11_re + a##21_im*b##11_im + a##22_re*b##12_re + a##22_im*b##12_im; \
  c##21_im =  - a##20_re*b##10_im + a##20_im*b##10_re - a##21_re*b##11_im + a##21_im*b##11_re - a##22_re*b##12_im + a##22_im*b##12_re; \
  c##22_re =    a##20_re*b##20_re + a##20_im*b##20_im + a##21_re*b##21_re + a##21_im*b##21_im + a##22_re*b##22_re + a##22_im*b##22_im; \
  c##22_im =  - a##20_re*b##20_im + a##20_im*b##20_re - a##21_re*b##21_im + a##21_im*b##21_re - a##22_re*b##22_im + a##22_im*b##22_re; 

#define ADJ_MAT_MUL_MAT(a, b, c) \
    c##00_re = a##00_re*b##00_re + a##00_im*b##00_im + a##10_re*b##10_re + a##10_im*b##10_im + a##20_re*b##20_re + a##20_im*b##20_im; \
  c##00_im = a##00_re*b##00_im - a##00_im*b##00_re + a##10_re*b##10_im - a##10_im*b##10_re + a##20_re*b##20_im - a##20_im*b##20_re; \
  c##01_re = a##00_re*b##01_re + a##00_im*b##01_im + a##10_re*b##11_re + a##10_im*b##11_im + a##20_re*b##21_re + a##20_im*b##21_im; \
  c##01_im = a##00_re*b##01_im - a##00_im*b##01_re + a##10_re*b##11_im - a##10_im*b##11_re + a##20_re*b##21_im - a##20_im*b##21_re; \
  c##02_re = a##00_re*b##02_re + a##00_im*b##02_im + a##10_re*b##12_re + a##10_im*b##12_im + a##20_re*b##22_re + a##20_im*b##22_im; \
  c##02_im = a##00_re*b##02_im - a##00_im*b##02_re + a##10_re*b##12_im - a##10_im*b##12_re + a##20_re*b##22_im - a##20_im*b##22_re; \
  c##10_re = a##01_re*b##00_re + a##01_im*b##00_im + a##11_re*b##10_re + a##11_im*b##10_im + a##21_re*b##20_re + a##21_im*b##20_im; \
  c##10_im = a##01_re*b##00_im - a##01_im*b##00_re + a##11_re*b##10_im - a##11_im*b##10_re + a##21_re*b##20_im - a##21_im*b##20_re; \
  c##11_re = a##01_re*b##01_re + a##01_im*b##01_im + a##11_re*b##11_re + a##11_im*b##11_im + a##21_re*b##21_re + a##21_im*b##21_im; \
  c##11_im = a##01_re*b##01_im - a##01_im*b##01_re + a##11_re*b##11_im - a##11_im*b##11_re + a##21_re*b##21_im - a##21_im*b##21_re; \
  c##12_re = a##01_re*b##02_re + a##01_im*b##02_im + a##11_re*b##12_re + a##11_im*b##12_im + a##21_re*b##22_re + a##21_im*b##22_im; \
  c##12_im = a##01_re*b##02_im - a##01_im*b##02_re + a##11_re*b##12_im - a##11_im*b##12_re + a##21_re*b##22_im - a##21_im*b##22_re; \
  c##20_re = a##02_re*b##00_re + a##02_im*b##00_im + a##12_re*b##10_re + a##12_im*b##10_im + a##22_re*b##20_re + a##22_im*b##20_im; \
  c##20_im = a##02_re*b##00_im - a##02_im*b##00_re + a##12_re*b##10_im - a##12_im*b##10_re + a##22_re*b##20_im - a##22_im*b##20_re; \
  c##21_re = a##02_re*b##01_re + a##02_im*b##01_im + a##12_re*b##11_re + a##12_im*b##11_im + a##22_re*b##21_re + a##22_im*b##21_im; \
  c##21_im = a##02_re*b##01_im - a##02_im*b##01_re + a##12_re*b##11_im - a##12_im*b##11_re + a##22_re*b##21_im - a##22_im*b##21_re; \
  c##22_re = a##02_re*b##02_re + a##02_im*b##02_im + a##12_re*b##12_re + a##12_im*b##12_im + a##22_re*b##22_re + a##22_im*b##22_im; \
  c##22_im = a##02_re*b##02_im - a##02_im*b##02_re + a##12_re*b##12_im - a##12_im*b##12_re + a##22_re*b##22_im - a##22_im*b##22_re; 

#define ADJ_MAT_MUL_ADJ_MAT(a, b, c) \
      c##00_re =    a##00_re*b##00_re - a##00_im*b##00_im + a##10_re*b##01_re - a##10_im*b##01_im + a##20_re*b##02_re - a##20_im*b##02_im; \
  c##00_im =  - a##00_re*b##00_im - a##00_im*b##00_re - a##10_re*b##01_im - a##10_im*b##01_re - a##20_re*b##02_im - a##20_im*b##02_re; \
  c##01_re =    a##00_re*b##10_re - a##00_im*b##10_im + a##10_re*b##11_re - a##10_im*b##11_im + a##20_re*b##12_re - a##20_im*b##12_im; \
  c##01_im =  - a##00_re*b##10_im - a##00_im*b##10_re - a##10_re*b##11_im - a##10_im*b##11_re - a##20_re*b##12_im - a##20_im*b##12_re; \
  c##02_re =    a##00_re*b##20_re - a##00_im*b##20_im + a##10_re*b##21_re - a##10_im*b##21_im + a##20_re*b##22_re - a##20_im*b##22_im; \
  c##02_im =  - a##00_re*b##20_im - a##00_im*b##20_re - a##10_re*b##21_im - a##10_im*b##21_re - a##20_re*b##22_im - a##20_im*b##22_re; \
  c##10_re =    a##01_re*b##00_re - a##01_im*b##00_im + a##11_re*b##01_re - a##11_im*b##01_im + a##21_re*b##02_re - a##21_im*b##02_im; \
  c##10_im =  - a##01_re*b##00_im - a##01_im*b##00_re - a##11_re*b##01_im - a##11_im*b##01_re - a##21_re*b##02_im - a##21_im*b##02_re; \
  c##11_re =    a##01_re*b##10_re - a##01_im*b##10_im + a##11_re*b##11_re - a##11_im*b##11_im + a##21_re*b##12_re - a##21_im*b##12_im; \
  c##11_im =  - a##01_re*b##10_im - a##01_im*b##10_re - a##11_re*b##11_im - a##11_im*b##11_re - a##21_re*b##12_im - a##21_im*b##12_re; \
  c##12_re =    a##01_re*b##20_re - a##01_im*b##20_im + a##11_re*b##21_re - a##11_im*b##21_im + a##21_re*b##22_re - a##21_im*b##22_im; \
  c##12_im =  - a##01_re*b##20_im - a##01_im*b##20_re - a##11_re*b##21_im - a##11_im*b##21_re - a##21_re*b##22_im - a##21_im*b##22_re; \
  c##20_re =    a##02_re*b##00_re - a##02_im*b##00_im + a##12_re*b##01_re - a##12_im*b##01_im + a##22_re*b##02_re - a##22_im*b##02_im; \
  c##20_im =  - a##02_re*b##00_im - a##02_im*b##00_re - a##12_re*b##01_im - a##12_im*b##01_re - a##22_re*b##02_im - a##22_im*b##02_re; \
  c##21_re =    a##02_re*b##10_re - a##02_im*b##10_im + a##12_re*b##11_re - a##12_im*b##11_im + a##22_re*b##12_re - a##22_im*b##12_im; \
  c##21_im =  - a##02_re*b##10_im - a##02_im*b##10_re - a##12_re*b##11_im - a##12_im*b##11_re - a##22_re*b##12_im - a##22_im*b##12_re; \
  c##22_re =    a##02_re*b##20_re - a##02_im*b##20_im + a##12_re*b##21_re - a##12_im*b##21_im + a##22_re*b##22_re - a##22_im*b##22_im; \
  c##22_im =  - a##02_re*b##20_im - a##02_im*b##20_re - a##12_re*b##21_im - a##12_im*b##21_re - a##22_re*b##22_im - a##22_im*b##22_re; 

  // end of macros specific to hisq routines


#define SU3_PROJECTOR(va, vb, m)                               \
   m##00_re = va##0_re * vb##0_re + va##0_im * vb##0_im;       \
  m##00_im = va##0_im * vb##0_re - va##0_re * vb##0_im;         \
  m##01_re = va##0_re * vb##1_re + va##0_im * vb##1_im;         \
  m##01_im = va##0_im * vb##1_re - va##0_re * vb##1_im;         \
  m##02_re = va##0_re * vb##2_re + va##0_im * vb##2_im;         \
  m##02_im = va##0_im * vb##2_re - va##0_re * vb##2_im;         \
  m##10_re = va##1_re * vb##0_re + va##1_im * vb##0_im;         \
  m##10_im = va##1_im * vb##0_re - va##1_re * vb##0_im;         \
  m##11_re = va##1_re * vb##1_re + va##1_im * vb##1_im;         \
  m##11_im = va##1_im * vb##1_re - va##1_re * vb##1_im;         \
  m##12_re = va##1_re * vb##2_re + va##1_im * vb##2_im;         \
  m##12_im = va##1_im * vb##2_re - va##1_re * vb##2_im;         \
  m##20_re = va##2_re * vb##0_re + va##2_im * vb##0_im;         \
  m##20_im = va##2_im * vb##0_re - va##2_re * vb##0_im;         \
  m##21_re = va##2_re * vb##1_re + va##2_im * vb##1_im;         \
  m##21_im = va##2_im * vb##1_re - va##2_re * vb##1_im;         \
  m##22_re = va##2_re * vb##2_re + va##2_im * vb##2_im;         \
  m##22_im = va##2_im * vb##2_re - va##2_re * vb##2_im;


#define SCALAR_MULT_ADD_MATRIX(a, b, scalar, c) do{ \
    c##00_re = a##00_re + scalar*b##00_re;  \
    c##00_im = a##00_im + scalar*b##00_im;  \
    c##01_re = a##01_re + scalar*b##01_re;  \
    c##01_im = a##01_im + scalar*b##01_im;  \
    c##02_re = a##02_re + scalar*b##02_re;  \
    c##02_im = a##02_im + scalar*b##02_im;  \
    c##10_re = a##10_re + scalar*b##10_re;  \
    c##10_im = a##10_im + scalar*b##10_im;  \
    c##11_re = a##11_re + scalar*b##11_re;  \
    c##11_im = a##11_im + scalar*b##11_im;  \
    c##12_re = a##12_re + scalar*b##12_re;  \
    c##12_im = a##12_im + scalar*b##12_im;  \
    c##20_re = a##20_re + scalar*b##20_re;  \
    c##20_im = a##20_im + scalar*b##20_im;  \
    c##21_re = a##21_re + scalar*b##21_re;  \
    c##21_im = a##21_im + scalar*b##21_im;  \
    c##22_re = a##22_re + scalar*b##22_re;  \
    c##22_im = a##22_im + scalar*b##22_im;  \
}while(0)

#endif // GENERIC_MATRIX_MACROS

#endif // _HISQ_FORCE_MACROS_H_
