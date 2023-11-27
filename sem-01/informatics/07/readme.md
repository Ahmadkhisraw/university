## Анализ структур данных

### 1. Множество (Set):

- **Основные операции:**
  - Вставка элемента
  - Удаление элемента
  - Проверка принадлежности элемента множеству
  - Объединение множеств
  - Пересечение множеств

- **Сложность операций:**
  - Вставка/Удаление/Проверка принадлежности: В среднем O(1), в худшем случае O(n)
  - Объединение/Пересечение: O(min(m, n)), где m и n - размеры множества

- **Подходит для:**
  - Уникальных элементов
  - Проверки принадлежности элемента к множеству
  - Операций объединения и пересечения множества

### 2. Массив (Array):

- **Основные операции:**
  - Доступ к элементу по индексу
  - Вставка элемента
  - Удаление элемента
  - Поиск элемента

- **Сложность операций:**
  - Доступ к элементу по индексу: O(1)
  - Вставка/Удаление (в конце массива): O(1)
  - Вставка/Удаление (в середине массива): O(n)
  - Поиск элемента: O(n)

- **Подходит для:**
  - Случаи, когда требуется быстрый доступ к элементам по индексу
  - Случаи, когда размер массива фиксирован или изменяется редко

### 3. Стек (Stack):

- **Основные операции:**
  - Вставка элемента (push)
  - Извлечение элемента (pop)
  - Просмотр верхнего элемента (top/peek)

- **Сложность операций:**
  - Вставка/Извлечение элемента: O(1)
  - Просмотр верхнего элемента: O(1)

- **Подходит для:**
  - Реализации алгоритмов с локальными переменными (например, рекурсия)
  - Управления вызовами функций (память вызовов)

### 4. Очередь (Queue):

- **Основные операции:**
  - Вставка элемента (enqueue)
  - Извлечение элемента (dequeue)
  - Просмотр первого элемента (front)

- **Сложность операций:**
  - Вставка/Извлечение элемента: O(1)
  - Просмотр первого элемента: O(1)

- **Подходит для:**
  - Организации данных по принципу "первым пришел, первым вышел" (FIFO)
  - Моделирования процессов, таких как обработка запросов

### 5. Связный Список (Linked List):

- **Основные операции:**
  - Вставка элемента
  - Удаление элемента
  - Поиск элемента

- **Сложность операций:**
  - Вставка/Удаление элемента: O(1) (при доступе к узлу)
  - Поиск элемента: O(n)

- **Подходит для:**
  - Случаи, когда требуется частая вставка/удаление элементов
  - Динамически изменяющихся данных
  - Когда размер неизвестен заранее