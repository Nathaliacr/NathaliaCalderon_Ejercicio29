import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("ej.dat")

plt.figure(figsize=(15,5))
plt.subplot(1,2,1)
plt.imshow(data)
plt.xlabel("X")
plt.ylabel("U")
plt.colorbar(label="T")

