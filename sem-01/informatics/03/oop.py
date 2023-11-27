class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

def find_common_age(person_x, person_y):
    return person_x.age if person_x.age == person_y.age else None

person_x = Person("X", 25)
person_y = Person("Y", 25)

common_age = find_common_age(person_x, person_y)

if common_age is not None:
    print(f"The common age is: {common_age}")
else:
    print("Persons have different ages.")