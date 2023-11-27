def count_vowels(input_str):
    vowels = "aeiouAEIOU"
    return sum(1 for char in input_str if char in vowels)

input_string = input("Введите строку: ")

vowels_count = count_vowels(input_string)

print("Количество гласных в строке:", vowels_count)
