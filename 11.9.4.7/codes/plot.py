import numpy as np
import matplotlib.pyplot as plt


n_values=np.arange(-3,13)
y=np.loadtxt("series.dat", delimiter=" ", max_rows=1)
plt.stem(n_values,y, basefmt='r', label=r'$y(n)$')
plt.xlabel('n')
plt.ylabel("y(n)")
plt.legend()
plt.grid(True)
plt.savefig('../figs/Figure_1.png')