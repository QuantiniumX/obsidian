#include <iostream>
#include <vector>

int maximum(const std::vector<int> &vec) {
    int max = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}

void counting_sort(const std::vector<int> &vec, std::vector<int> &sorted_vec,
                   const int maxi) {
    std::vector<int> count(maxi + 1, 0);

    for (int i = 0; i < vec.size(); i++) {
        count[vec[i]] += 1;
    }

    for (int i = 1; i <= maxi; i++) {
        count[i] += count[i - 1];
    }

    for (int i = vec.size() - 1; i >= 0; i--) {
        int j = vec[i];
        count[j] -= 1;
        sorted_vec[count[j]] = vec[i];
    }
}

int main() {
    std::vector<int> vec{37, 12, 89, 5, 61, 23, 8, 45, 72, 16};
    std::size_t size = vec.size();
    int maxi = maximum(vec);

    std::vector<int> sorted_vec(size, 0);

    counting_sort(vec, sorted_vec, maxi);

    std::cout << "Sorted Array: " << std::endl;
    for (const int i : sorted_vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
