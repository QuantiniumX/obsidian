Inheritance allows one class, the "child" class, to inherit the properties and methods of another class, the "parent" class.

## Syntax
```python
class Animal: # parent "Animal" class
    def __init__(self, num_legs):
        self.num_legs - num_legs

class Cow(Animal): # child class "Cow" inherits "Animal"
    def __init(self):
        super().__init__(4)
```

## Usage of Inheritance
Inheritance should only be used when all instances of a child class are also instances of the parent class.

When a child class instances from a parent, it inherits everything. If you only want to share some functionality, Inheritance is probably not he best answer. Better to simply share some functions, or maybe make a new parent class that both classes inherit from.

Think of it as a venn diagram

**All cats are animals but not all animals are cats:**
![](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/LwZVCId.png)

## Inheritance Hierarchy
There is no limit to how deeply we can nest an inheritance tree. For example **cat** can inherit from **Animal** that can inherit from **Organism**. Don't inherit too much as it'll be a hassle to maintain it disregarding the use of OOP to make readable and maintainable code.

A good child class is a strict subset of it's parent class.

## Multiple Children 
Inheritance Hierarchy form trees. A parent class can have multiple children.
![Inheritance Tree](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/Cyv2n6l.png)

In good software a child class is a strict subset of its parent class. In a deep tree, that means the children need to be prefect members of all the parent class "types". In real world, it's much  more common to find sibling classes that share the traits of the parent class and are generally different variations of the parent class.
