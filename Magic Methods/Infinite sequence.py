def check_index(key):
    if not isinstance(key, int):
        raise TypeError
    if key < 0:
        raise IndexError


class ArithmeticSequence(object):
    def __init__(self, start=0, step=1):
        self.start = start
        self.step = step;
        self.changed = {}

    def __getitem__(self, item):
        check_index(item)
        try:
            return self.changed[item]
        except KeyError:
            return self.start + item * self.step

    def __setitem__(self, key, value):
        check_index(key)
        self.changed[key] = value


seq = ArithmeticSequence(1, 3)
print(seq[4])
seq[4] = 8
seq[5] = 'hekko'
print(seq[4])

print(seq.changed)
