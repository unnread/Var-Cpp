# Var - Bibliothèque C++

Une petite bibliothèque C++ qui permet de stocker plusieurs types de données dans une seule classe.

Elle évite d'avoir à écrire plusieurs variables (`int`, `float`, `double`, `std::string`, etc.) lorsque le type peut changer.

## Fonctionnalités

- bool
- char
- wchar_t
- char8_t
- char16_t
- char32_t
- short
- int
- long
- long long
- unsigned short
- unsigned int
- unsigned long
- unsigned long long
- float
- double
- long double
- std::string
- std::wstring

---

## Installation

Clonez le dépôt :

```bash
git clone https://github.com/VOTRE-NOM/Var.git
```

Puis incluez le fichier :

```cpp
#include "Var.hpp"
```

---

## Exemple

```cpp
#include <iostream>
#include "Var.hpp"

int main()
{
    Var a = 15;
    Var b = 3.14;
    Var c = "Bonjour";
    Var d = true;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
}
```

Résultat

```
15
3.14
Bonjour
1
```

---

## Types supportés

| Type | Support |
|------|---------|
| bool | ✅ |
| char | ✅ |
| wchar_t | ✅ |
| char8_t | ✅ |
| char16_t | ✅ |
| char32_t | ✅ |
| short | ✅ |
| int | ✅ |
| long | ✅ |
| long long | ✅ |
| unsigned short | ✅ |
| unsigned int | ✅ |
| unsigned long | ✅ |
| unsigned long long | ✅ |
| float | ✅ |
| double | ✅ |
| long double | ✅ |
| std::string | ✅ |
| std::wstring | ✅ |

---

## Fonctionnement

La bibliothèque repose sur :

- `std::variant`
- `std::visit`
- `if constexpr`
- Templates du C++17

Lorsqu'un objet `Var` est affiché avec `std::cout`, la bibliothèque détecte automatiquement le type contenu.

---

## Compatibilité

- C++17
- GCC
- Clang
- MSVC

---

## Auteur

Développé par **Youness Telmoune**.
