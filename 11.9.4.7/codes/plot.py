import numpy as np
import matplotlib.pyplot as plt

def y(n):
    return (n+1)*((n+2)**2)*(n+3)/12

n_values=np.arange(-3,9)
print(n_values)
print(y(n_values))
plt.stem(n_values,y(n_values)*np.heaviside(n_values,1), basefmt='r', label=r'$y(n)$')
plt.xlabel('n')
plt.ylabel("x(n)")
plt.title("Stem Plot of $y(n)$")
plt.legend()
plt.grid(True)
plt.savefig('../figs/Figure_1.png')