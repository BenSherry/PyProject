class Magic(object):
    def __init__(self, name='yang'):
        self.name = name

    def show(self):
        print(self.name)


class GreatMagic(Magic):
    def __init__(self, age):
        # Magic.__init__(self, "world")
        super().__init__("son")
        self.age = age

    def __len__(self):
        return len(self.age) + 1

    def __getitem__(self, item):
        if item == 'age':
            return self.name
        else:
            return self.age

    def __setitem__(self, key, value):
        if key == 'name':
            self.name = value
        else:
            self.age = value;


magic = GreatMagic('yhis')
print(magic['name'])
print(magic['age'])
magic['name'] = "tomomse"
print(magic['name'])