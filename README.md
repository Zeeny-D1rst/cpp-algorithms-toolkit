# C++ Algorithms Toolkit

Pequeno toolkit de algoritmos em C++17 com funções genéricas, demonstração executável e testes com `assert`.

## Algoritmos
- Bubble Sort com early exit.
- Selection Sort.
- Busca binária com retorno `std::optional<std::size_t>`.

## Compilar e executar
```bash
cmake -S . -B build
cmake --build build
./build/algorithms_demo
./build/algorithms_tests
```
No Windows, os executáveis ficam na pasta `build/Debug` ou `build/Release`, conforme o gerador.
