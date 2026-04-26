class Complex:
    def __init__(self, r=0.0, i=0.0):
        self._real = r
        self._imag = i

    def __add__(self, other):
        z = Complex()
        z._real = self._real + other._real
        z._imag = self._imag + other._imag
        return z

    def __sub__(self, other):
        z = Complex()
        z._real = self._real - other._real
        z._imag = self._imag - other._imag
        return z

    def display(self):
        print(self._real, "+", self._imag, "i")


c1 = Complex(12.3, 11.78)
c2 = Complex(13.21, 66)

c3 = c1 + c2
c3.display()

c4 = c1 - c2
c4.display()