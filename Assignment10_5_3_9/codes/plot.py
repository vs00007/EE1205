import matplotlib.pyplot as plt
import numpy as np

def x(n):
        return (1+2*n)
n_values= np.arange(-3, 10, 1)

y= np.heaviside(n_values, 1) *x(n_values)

plt.stem(n_values, y, linefmt='-', markerfmt='o', basefmt='r', label=r'$1+2n$')

plt.xlabel('n')
plt.ylabel("x(n)")
plt.title("Stem Plot of $x(n)$")
plt.legend()
plt.grid(True)
plt.show()