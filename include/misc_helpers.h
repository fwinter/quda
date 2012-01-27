#ifndef __MISC_HELPERS_H__
#define __MISC_HELPERS_H__


void link_format_cpu_to_gpu(void* dst, void* src,
			    int reconstruct, int bytes, int Vh, int pad,
			    int ghostV,
			    QudaPrecision prec, cudaStream_t stream);
void link_format_gpu_to_cpu(void* dst, void* src, 
			    int bytes, int Vh, int stride, QudaPrecision prec,
			    cudaStream_t stream);

void collectGhostSpinor(void *in, const void *inNorm,
			void* ghost_spinor_gpu,		   
			int dir, int whichway,
			const int parity, cudaColorSpinorField* inSpinor,
			cudaStream_t* stream);
void collectGhostStaple(int* X, void* even, void* odd, int volume, 
			QudaPrecision precision, void* ghost_staple_gpu,		   
			int dir, int whichway, cudaStream_t* stream);
#endif
