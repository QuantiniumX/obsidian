import random


def is_sorted(random_array):
    for i in range(1, len(random_array)):
        if random_array[i] < random_array[i - 1]:
            return False
    return True


def bogo_sort(random_array):
    while not is_sorted(random_array):
        random.shuffle(random_array)
    return random_array


def generate_random_array(size, min_val, max_val):
    return [random.randint(min_val, max_val) for _ in range(size)]


def main():
    size = 10
    min_val = 1
    max_val = 100
    random_array = generate_random_array(size, min_val, max_val)
    print(f"Unsorted Array: {random_array}")
    sorted_array = bogo_sort(random_array)
    print(f"sorted Array: {sorted_array}")


main()
