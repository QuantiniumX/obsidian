import pytest
from Linked_lists import Linked_list, Node


@pytest.fixture
def empty_list():
    return Linked_list()


@pytest.fixture
def populated_list():
    ll = Linked_list()
    ll.append(1)
    ll.append(2)
    ll.append(3)
    return ll


def test_append(empty_list):
    empty_list.append(1)
    assert empty_list.get_head() == 1
    assert empty_list.get_tail() == 1
    empty_list.append(2)
    assert empty_list.get_tail() == 2


def test_prepend(empty_list):
    empty_list.prepend(1)
    assert empty_list.get_head() == 1
    empty_list.prepend(2)
    assert empty_list.get_head() == 2


def test_insert(populated_list):
    populated_list.insert(4, 1)
    assert populated_list.get(1) == 4
    with pytest.raises(IndexError):
        populated_list.insert(5, 10)


def test_delete_at(populated_list):
    populated_list.delete_at(1)
    assert populated_list.get(1) == 3
    with pytest.raises(IndexError):
        populated_list.delete_at(10)


def test_size(empty_list, populated_list):
    assert empty_list.size() == 0
    assert populated_list.size() == 3


def test_delete(populated_list):
    populated_list.delete(2)
    assert populated_list.size() == 2
    assert populated_list.get(1) == 3


def test_get(populated_list):
    assert populated_list.get(1) == 2
    with pytest.raises(IndexError):
        populated_list.get(10)


def test_is_empty(empty_list, populated_list):
    assert empty_list.is_empty() == True
    assert populated_list.is_empty() == False


def test_get_head(empty_list, populated_list):
    with pytest.raises(IndexError):
        empty_list.get_head()
    assert populated_list.get_head() == 1


def test_get_tail(empty_list, populated_list):
    with pytest.raises(IndexError):
        empty_list.get_tail()
    assert populated_list.get_tail() == 3


def test_node_repr():
    node = Node(5)
    assert repr(node) == '5'
