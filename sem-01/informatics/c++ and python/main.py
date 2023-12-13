from src.operations import multiplication
import time

def python_multiplication(lhs, rhs):
    return lhs * rhs

def count_spend_time(mul_times):
    elapsed_times = []
    for ntime in mul_times:
        elapsed_time = []
        start = time.perf_counter()
        for _ in range(ntime):
            python_multiplication(1, 2)
        elapsed_time.append(time.perf_counter() - start)
        elapsed_times.append(elapsed_time)

        start = time.perf_counter()
        for _ in range(ntime):
            multiplication(1, 2)
        elapsed_time.append(time.perf_counter() - start)

    return elapsed_times
    
mul_times = [5000, 10000, 15000]
elapsed_time = count_spend_time(mul_times)

for i, mul_time in enumerate(mul_times):
    print(f'{mul_time} : c {elapsed_time[i][1]} : python {elapsed_time[i][0]}')