**Encapsulation** is the practice of hiding complexity inside a [black box](https://en.wikipedia.org/wiki/Black_box) so that it is easier to focus on the problem at hand.
The most basic example of Encapsulation is a function. Generally while using an inbuilt function we don't have to care about the inner workings of the function. We only see it on the basis of it input ans the output.

```python
acceleration = calc_acceleration(initial_speed, final_speed, time) # We just think of passing the arguments and getting the total acceleration that is calculated when the function call happens.
```

## Public and Private
By default all properties and methods in the function are public. We can access them using the dot(.) operator.
```python
Wall.height = 10
print(Wall.height)
```

Private data members are how we encapsulate logic and data within a class. To make a property or method private, you just need to prefix it with two underscores
```python
class Wall:
    def __init__(self, armor, magic_restrictions):
        self.__armor == armor
        self.__magic_restrictions = magic_restrictions

    def get_defense(self):
        return self.__armor = self.__magic_restrictions

front_wall = Wall(10, 20)
print(front_wall.__armor) # Will give an error
print(front_wall.get_defense()) # 30
```

We do this because, in this example, armor and magic_restrictions are implementation details. After creating a Wall, they don't matter anymore. Now we can just call get_defense and get its value and not worry about what happens under the hood.

## Not Securiy
Encapsulation doesnt make the code more secure in a cryptographic or cyber-security sense. **It is about organization, not security.** 
