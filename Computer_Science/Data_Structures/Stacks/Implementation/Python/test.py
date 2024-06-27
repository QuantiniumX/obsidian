import pytest
from implementing_stack_arrays import Stack


@pytest.fixture
def empty_stack():
    return Stack()


@pytest.fixture
def filled_stack():
    stack = Stack()
    for i in range(1, 4):
        stack.push(i)
    return stack


def test_push_and_peek(empty_stack):
    empty_stack.push(1)
    assert empty_stack.peek() == 1
    empty_stack.push(2)
    assert empty_stack.peek() == 2


def test_pop(filled_stack):
    assert filled_stack.pop() == 3
    assert filled_stack.pop() == 2
    assert filled_stack.pop() == 1
    assert filled_stack.pop() is None


@pytest.mark.parametrize("elements, expected_size", [
    ([], 0),
    ([1], 1),
    ([1, 2, 3], 3)
])
def test_size(empty_stack, elements, expected_size):
    for elem in elements:
        empty_stack.push(elem)
    assert empty_stack.size() == expected_size


def test_is_empty(empty_stack, filled_stack):
    assert empty_stack.is_empty() is True
    assert filled_stack.is_empty() is False


def test_peek_empty_stack(empty_stack):
    assert empty_stack.peek() is None


def test_large_number_of_elements(empty_stack):
    num_elements = 10000
    for i in range(num_elements):
        empty_stack.push(i)
    assert empty_stack.size() == num_elements
    for i in reversed(range(num_elements)):
        assert empty_stack.pop() == i
    assert empty_stack.is_empty()
