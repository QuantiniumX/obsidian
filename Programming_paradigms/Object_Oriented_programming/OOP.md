**Object Oriented Programing** or **OOP** is a pattern for writing clean and maintainable code 

## Goal of OOP
OOP is all about making the code easier to understand, easier to work with, easier to find and fix bugs and help us retain out sanity.

## Classes
A **Class** is a special type of value in object Oriented Programing. Just like a string, int or float, a class is a type but instead of being a built-in type a class is a custom data type that is defined by the developer. Classes provide a means of bundling data and functionality together.

An Object is just an [instance](https://stackoverflow.com/questions/20461907/what-is-meaning-of-instance-in-programming) of a class type.

``` python
health  = 25 # health is an instance of integer
aragorn = Soldier() # aragorn is an instance of Soldier type (class)
```
Classes are custom new types that we define as a programmer and each new instance of a class is called an object.

## Methods
One thing that makes OOP worth is we can define methods in them. A method is a function that's tied directly to a class and has access to all its properties.

## Self
Methods are nested within the class declaration. Their first parameters is always the instance of the class that the method is being called on. By convention it is 'self'. Since self is a reference to the object, you can use it to read and update the properties of the object.

``` python
class Wall:
    armor = 10
    height = 5

    def fortify(self):
        self.armor *= 2
```

## Method Return Values
Methods are generally used to mutate the the properties.

```python
class Soldier:
    armor = 2
    num_weapon = 2

    def get_speed(self):
        soeed = 10
        speed -= self.armor
        speed -= self.num_weapon
        return speed

soldier_one = Soldier()
print(soldier_one.get_speed())
```

## Methods VS Functions
A Method has all the properties as a function, but it is directly tied to a class and has access to all its properties.

```python
class Soldier:
    health = 5
    def take_damage(self, damage, multiplier):
        damage = damage * multiplier
        self.health -= damage

dalinar = Soldier()
damage, multiplier = 30, 3
dalinar.take_damage(damage, multiplier) # damage and multiplier are passed as arguments and dalinar is passed as self. So we are calculating health of dalinar
```

## Constructors 
A Constructor is a method that is called when a new object is created. In python is defined as [__init__](https://docs.python.org/3/reference/datamodel.html#object.__init__)

```python
class Soldier():
    def __init__(self, name, armor, num_weapon):
        self.name = name
        self.armor = armor
        self.num_weapon = num_weapon

soldier = Soldier('Legolas', 5, 10)
print(soldier.name)
print(soldier.armor)
print(soldier.num_weapon)
```

## Class Variables and Instance Variables
**Instance Variable** vary from object to object and are declared in the Constructor.

```python
class Wall:
    def __init__(self):
        self.height = 10

south_wall = Wall()
south_wall.height = 20 # changed the value of the object ie the instance of the class
print(south_wall.health) # 20

north_wall = Wall()
print(north_wall.height) # 10
```

**Class variable** remain the same between instances of the same class and are declared at the top level of a class definition.

```python
class Wall:
    def __init__(self):
        self.height = 10

south_wall = Wall()
print(south_wall.height) # 10

Wall.height = 20; # changed the value of the height of the class rather than the instance south_wall

print(south_wall.height) # 10
```

Generally Stay away from class variable as they make it hard to keep track of variable changes
