#include <iostream>
#include "qpp/qpp.h"

int main() {
    using namespace qpp;

    // Simple quantum example: measure a qubit in superposition
    ket q0 = 0_ket;
    q0 = hadamard(q0);
    auto result = measure(q0);
    std::cout << "Measurement result: " << result.first << std::endl;

    return 0;
}
