#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& target_product) {
    std::vector<int> indices;  // To store the indices of target products

    for (int i = 0; i < products.size(); i++) {
        if (products[i] == target_product) {
            indices.push_back(i);  // Add the index if product matches the target
        }
    }

    return indices;
}

int main() {
    std::vector<std::string> product_list = {"Apple", "Banana", "Apple", "Orange", "Apple", "Mango"};
    std::string target = "Apple";

    std::vector<int> result = linear_search_product(product_list, target);

    if (result.empty()) {
        std::cout << "Product not found in the list." << std::endl;
    } else {
        std::cout << "Product '" << target << "' found at indices: ";
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i];
            if (i < result.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
