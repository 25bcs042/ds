class Complex:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def add(self, other):
        real_part = self.real + other.real
        imag_part = self.imag + other.imag
        return Complex(real_part, imag_part)

    def display(self):
        print(f"{self.real} + {self.imag}i")


c1 = Complex(3, 2)
c2 = Complex(1, 4)

c3 = c1.add(c2)

print("First Complex Number:")
c1.display()

print("Second Complex Number:")
c2.display()

print("Sum of Complex Numbers:")
c3.display()