import matplotlib.pyplot as plt

x = [100, 1000, 10000, 50000, 100000]
bubble_sort_time = [0.000043, 0.001941, 0.295000, 6.748398, 28.160772]
merge_sort_time = [0.000014, 0.000172, 0.001482, 0.008577, 0.020120]
insertion_sort_time = [0.000257, 0.004164, 0.097674, 1.808362, 6.951045]
selection_sort_time = [0.000341, 0.006817, 0.265855, 7.525990, 29.765909]
heap_sort_time = [0.000000, 0.000000, 0.004000, 0.015000, 0.032000]
quick_sort_time = [0.000000, 0.000000, 0.006000, 0.008000, 0.018000]


plt.plot(x, bubble_sort_time, marker='o', color='b', linestyle='-', label='Bubble Sort')
plt.plot(x, merge_sort_time, marker='x', color='g', linestyle='--', label='Merge Sort')
plt.plot(x, insertion_sort_time, marker='s', color='r', linestyle='-.', label='Insertion Sort')
plt.plot(x, selection_sort_time, marker='d', color='purple', linestyle=':', label='Selection Sort')
plt.plot(x, heap_sort_time, marker='^', color='orange', linestyle='-', label='Heap Sort')
plt.plot(x, quick_sort_time, marker='v', color='cyan', linestyle='--', label='Quick Sort')


plt.title("Comparação de Tempo de Execução: Bubble, Merge, Insertion, Selection, Heap e Quick Sort")
plt.xlabel("Tamanho do Array (n)")
plt.ylabel("Tempo (segundos)")

plt.legend()
plt.show()
