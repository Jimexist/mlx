// Copyright © 2023-2024 Apple Inc.

#include "mlx/primitives.h"

#define NO_GPU_MULTI(func)                                             \
  void func::eval_gpu(                                                 \
      const std::vector<array>& inputs, std::vector<array>& outputs) { \
    throw std::runtime_error(#func " has no GPU implementation.");     \
  }

#define NO_GPU(func)                                                  \
  void func::eval_gpu(const std::vector<array>& inputs, array& out) { \
    throw std::runtime_error(#func " has no GPU implementation.");    \
  }

namespace mlx::core {

NO_GPU(Abs)
NO_GPU(Add)
NO_GPU(AddMM)
NO_GPU(Arange)
NO_GPU(ArcCos)
NO_GPU(ArcCosh)
NO_GPU(ArcSin)
NO_GPU(ArcSinh)
NO_GPU(ArcTan)
NO_GPU(ArcTanh)
NO_GPU(ArgPartition)
NO_GPU(ArgReduce)
NO_GPU(ArgSort)
NO_GPU(AsType)
NO_GPU(AsStrided)
NO_GPU(Broadcast)
NO_GPU(Ceil)
NO_GPU_MULTI(Compiled)
NO_GPU(Concatenate)
NO_GPU(Convolution)
NO_GPU(Copy)
NO_GPU(Cos)
NO_GPU(Cosh)
NO_GPU_MULTI(CustomVJP)
NO_GPU_MULTI(Depends)
NO_GPU(Divide)
NO_GPU_MULTI(DivMod)
NO_GPU(Remainder)
NO_GPU(Equal)
NO_GPU(Erf)
NO_GPU(ErfInv)
NO_GPU(Exp)
NO_GPU(FFT)
NO_GPU(Floor)
NO_GPU(Full)
NO_GPU(Gather)
NO_GPU(Greater)
NO_GPU(GreaterEqual)
NO_GPU(Less)
NO_GPU(LessEqual)
NO_GPU(Load)
NO_GPU(Log)
NO_GPU(Log1p)
NO_GPU(LogicalNot)
NO_GPU(LogicalAnd)
NO_GPU(LogicalOr)
NO_GPU(LogAddExp)
NO_GPU(Matmul)
NO_GPU(Maximum)
NO_GPU(Minimum)
NO_GPU(Multiply)
NO_GPU(Negative)
NO_GPU(NotEqual)
NO_GPU(Pad)
NO_GPU(Partition)
NO_GPU(Power)
NO_GPU_MULTI(QRF)
NO_GPU(QuantizedMatmul)
NO_GPU(RandomBits)
NO_GPU(Reduce)
NO_GPU(Reshape)
NO_GPU(Round)
NO_GPU(Scan)
NO_GPU(Scatter)
NO_GPU(Sigmoid)
NO_GPU(Sign)
NO_GPU(Sin)
NO_GPU(Sinh)
NO_GPU(Slice)
NO_GPU(Softmax)
NO_GPU(Sort)
NO_GPU_MULTI(Split)
NO_GPU(Square)
NO_GPU(Sqrt)
NO_GPU(StopGradient)
NO_GPU(Subtract)
NO_GPU(Tan)
NO_GPU(Tanh)
NO_GPU(Transpose)

} // namespace mlx::core
