from Queues_using_arrays import Queue
import pytest


@pytest.fixture
def empty_queue():
    return Queue()


@pytest.fixture
def filled_queue():
    queue = Queue()
    for i in range(1, 5):
        queue.enqueue(i)
    return queue


def test_enqueue_and_peek(empty_queue):
    empty_queue.enqueue(1)
    assert empty_queue.peek() == 1
    empty_queue.enqueue(2)
    assert empty_queue.peek() == 1
    empty_queue.enqueue(3)
    empty_queue.enqueue(4)
    assert empty_queue.peek() == 1


def test_dequeue(filled_queue):
    assert filled_queue.dequeue() == 1
    assert filled_queue.dequeue() == 2
    assert filled_queue.dequeue() == 3
    assert filled_queue.dequeue() == 4
    with pytest.raises(IndexError, match="Dequeuing from an empty queue"):
        filled_queue.dequeue()


@pytest.mark.parametrize("elements, expected_size", [
    ([], 0),
    ([1], 1),
    ([1, 2, 3], 3)
])
def test_size(empty_queue, elements, expected_size):
    for elem in elements:
        empty_queue.enqueue(elem)
    assert empty_queue.size() == expected_size


def test_is_empty(empty_queue, filled_queue):
    assert empty_queue.is_empty() is True
    assert filled_queue.is_empty() is False


def test_peek_empty_queue(empty_queue):
    with pytest.raises(IndexError, match="Peeking into an empty queue"):
        empty_queue.peek()


def test_dequeue_empty_queue(empty_queue):
    with pytest.raises(IndexError, match="Dequeuing from an empty queue"):
        empty_queue.dequeue()


def test_large_elements(empty_queue):
    num_el = 10000
    for i in range(num_el):
        empty_queue.enqueue(i)
    assert empty_queue.size() == num_el
    for i in range(num_el):
        assert empty_queue.dequeue() == i
    assert empty_queue.is_empty
