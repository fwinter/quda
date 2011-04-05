//
// Auto-tuned blas CUDA parameters, generated by blas_test
//

static int blas_threads[23][3] = {
  {  64,  448,  448},  // Kernel  0: copyCuda (high source precision)
  { 256,  416,  544},  // Kernel  1: copyCuda (low source precision)
  {  64,  160,  128},  // Kernel  2: axpbyCuda
  {  64,  384,  128},  // Kernel  3: xpyCuda
  {  64,  384,  128},  // Kernel  4: axpyCuda
  {  64,  160,  128},  // Kernel  5: xpayCuda
  {  64,  384,  128},  // Kernel  6: mxpyCuda
  { 192,  384,  736},  // Kernel  7: axCuda
  {  64,  128,  128},  // Kernel  8: caxpyCuda
  { 128,  128,   96},  // Kernel  9: caxpbyCuda
  {  64,   96,   96},  // Kernel 10: cxpaypbzCuda
  { 128,   96,   96},  // Kernel 11: axpyBzpcxCuda
  {  64,   96,   96},  // Kernel 12: axpyZpbxCuda
  { 224,   96,   64},  // Kernel 13: caxpbypzYmbwCuda
  { 128,  256,  256},  // Kernel 14: normCuda
  { 128,  128,  256},  // Kernel 15: reDotProductCuda
  { 128,  256,  512},  // Kernel 16: axpyNormCuda
  { 128,  256,  512},  // Kernel 17: xmyNormCuda
  { 128,  128,  128},  // Kernel 18: cDotProductCuda
  { 128,  256,   64},  // Kernel 19: xpaycDotzyCuda
  { 128,  128,  128},  // Kernel 20: cDotProductNormACuda
  { 128,  128,  128},  // Kernel 21: cDotProductNormBCuda
  {  64,  128,   64}   // Kernel 22: caxpbypzYmbwcDotProductWYNormYCuda
};

static int blas_blocks[23][3] = {
  { 8192,   512,  1024},  // Kernel  0: copyCuda (high source precision)
  { 8192,  4096,   128},  // Kernel  1: copyCuda (low source precision)
  {  512,  2048,  8192},  // Kernel  2: axpbyCuda
  {  512,  1024,  8192},  // Kernel  3: xpyCuda
  {  512,  1024, 32768},  // Kernel  4: axpyCuda
  {  512,  2048, 32768},  // Kernel  5: xpayCuda
  {  512,  1024, 65536},  // Kernel  6: mxpyCuda
  {  128,  1024,  4096},  // Kernel  7: axCuda
  {  512, 16384, 65536},  // Kernel  8: caxpyCuda
  {  256, 16384, 65536},  // Kernel  9: caxpbyCuda
  {  512,  8192, 16384},  // Kernel 10: cxpaypbzCuda
  {  256,  4096,  4096},  // Kernel 11: axpyBzpcxCuda
  { 1024,  4096,  4096},  // Kernel 12: axpyZpbxCuda
  {  128, 32768, 65536},  // Kernel 13: caxpbypzYmbwCuda
  {   64,    64,   512},  // Kernel 14: normCuda
  {   64,    64,  1024},  // Kernel 15: reDotProductCuda
  { 2048,    64,   512},  // Kernel 16: axpyNormCuda
  {  512,    64,   512},  // Kernel 17: xmyNormCuda
  {   64,    64,    64},  // Kernel 18: cDotProductCuda
  {  256,   256,    64},  // Kernel 19: xpaycDotzyCuda
  {   64,    64,    64},  // Kernel 20: cDotProductNormACuda
  {   64,    64,    64},  // Kernel 21: cDotProductNormBCuda
  {   64,   256,    64}   // Kernel 22: caxpbypzYmbwcDotProductWYNormYCuda
};
