#include <ATen/ATen.h>
#include <ATen/NativeFunctions.h>

// The stubs in here are only used for static dispatch.
// Dynamic dispatch doesn't ever see those but directly goes to the kernels in VariableTypeManual.cpp.
// TODO Since the plan is to remove static dispatch, we should then also remove this file here.

namespace at {
namespace native {

void _backward(const Tensor& self, TensorList inputs, const Tensor& gradient, c10::optional<bool> keep_graph, bool create_graph) {
  AT_ERROR("backward is not implemented for Tensor");
  return self._backward(inputs, gradient, keep_graph, create_graph);
}

void set_data(Tensor& self, const Tensor& new_data) {
  return self.set_data(new_data);
}

Tensor data(const Tensor& self) {
  return self.data();
}

bool is_leaf(const Tensor& self) {
  return self.is_leaf();
}

int64_t output_nr(const Tensor& self) {
  return self.output_nr();
}

int64_t _version(const Tensor& self) {
  return self._version();
}

Tensor& requires_grad_(Tensor& self, bool _requires_grad) {
  return self.requires_grad_(_requires_grad);
}

void retain_grad(Tensor& self) {
  return self.retain_grad();
}

Tensor _fw_primal(const Tensor& self, int64_t level) {
  AT_ERROR("_fw_primal is not implemented for Tensor");
}

} // namespace native
} // namespace at
