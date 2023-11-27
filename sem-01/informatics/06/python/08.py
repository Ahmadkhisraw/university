def is_prime(num):
    if num < 2:
        return False

    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False

    return True

number = int(input("Введите число для проверки на простоту: "))

if is_prime(number):
    print(f"{number} - простое число.")
else:
    print(f"{number} - не простое число.")
