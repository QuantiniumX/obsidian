Polymorphism is the ability of the variable, function or object to take on multiple forms.
- "poly" = "many"
- "morph" = "form"

For eg- classes in the same hierarchical tree may have methods with the same name but different behaviours.

```python
class Creature():
    def move(self):
        print("the creature moves")

class Dragon(Creature):
    def move(self):
        print("the dragon flies")

class Kraken(Creature):
    def move(self):
        print("the kraken swims")

for creature in [Creature(), Dragon(), Kraken()]:
    creature.move()
# prints:
# the creature moves
# the dragon flies
# the kraken swims
```
