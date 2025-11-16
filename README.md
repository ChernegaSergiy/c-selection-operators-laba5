# Lab Work 5: Selection Operators in C

This project is a laboratory work for the "Computer Technologies and Programming" course. It contains two independent C programs demonstrating the use of **conditional statements** (`if`, `else if`, `else`) and branching logic.

## Programs Included

### 1. Task 1 — Conditional Calculation (`task1.c`)

The program receives two integer values `C` and `D` and performs one of the following operations:

- If **both numbers are negative**, the program calculates the **sum of squares**:  
  `S = C^2 + D^2`
- Otherwise, the program calculates the **square of the sum**:  
  `S = (C + D)^2`

### 2. Task 2 — Piecewise Function (`task2.c`)

This program implements a **piecewise-defined mathematical function** `y(t, z)`.

The value of `y` is computed as follows:

- if `t < 0` and `z < 0`:  
  `y = z + 4 * |t^3| * sin(t)`
- else if `t > 0` and `z > 0`:  
  `y = sqrt(z^2 + 3 * cos(t^2))`
- otherwise:  
  `y = 1`

The implementation uses the `<math.h>` library for trigonometric and power operations.

## How to Compile and Run

Both programs can be compiled using GCC or an equivalent C compiler.

### Compile Task 1
```bash
gcc task1.c -o task1
./task1
```

### Compile Task 2
```bash
gcc task2.c -o task2 -lm
./task2
```

> [!NOTE]  
> The `-lm` flag is required for linking the math library.

## Example Usage

Example run of **Task 1**:
```text
Введіть значення змінної C: -3
Введіть значення змінної D: -4
Числа в змінних мають від'ємні значення - рахуємо суму квадратів...
Результат: 25
```

Example run of **Task 2**:
```text
Введіть значення змінної t: 1.5
Введіть значення змінної z: 2.5
Результат виконання функції y_function: 1.829552
```

## Contributing

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
