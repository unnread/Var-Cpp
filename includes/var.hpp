#pragma once

#include <iostream>
#include <string>
#include <variant>
#include <type_traits>


class Var
{
private:

    using Value = std::variant<
        bool,

        char,
        wchar_t,
        char8_t,
        char16_t,
        char32_t,

        short,
        int,
        long,
        long long,

        unsigned short,
        unsigned int,
        unsigned long,
        unsigned long long,

        float,
        double,
        long double,

        std::string,
        std::wstring
    >;


    Value var;


public:

    Var(bool v) : var(v) {}

    Var(char v) : var(v) {}
    Var(wchar_t v) : var(v) {}
    Var(char8_t v) : var(v) {}
    Var(char16_t v) : var(v) {}
    Var(char32_t v) : var(v) {}


    Var(short v) : var(v) {}
    Var(int v) : var(v) {}
    Var(long v) : var(v) {}
    Var(long long v) : var(v) {}


    Var(unsigned short v) : var(v) {}
    Var(unsigned int v) : var(v) {}
    Var(unsigned long v) : var(v) {}
    Var(unsigned long long v) : var(v) {}


    Var(float v) : var(v) {}
    Var(double v) : var(v) {}
    Var(long double v) : var(v) {}


    Var(std::string v) : var(v) {}
    Var(const char* v) : var(std::string(v)) {}


    Var(std::wstring v) : var(v) {}
    Var(const wchar_t* v) : var(std::wstring(v)) {}



    friend std::ostream& operator<<(std::ostream& out, const Var& v)
    {
        std::visit([&out](auto&& value)
        {
            using T = std::decay_t<decltype(value)>;


            if constexpr (std::is_same_v<T, wchar_t>)
            {
                out << static_cast<char>(value);
            }

            else if constexpr (std::is_same_v<T, char8_t>)
            {
                out << static_cast<char>(value);
            }

            else if constexpr (std::is_same_v<T, char16_t>)
            {
                out << static_cast<char>(value);
            }

            else if constexpr (std::is_same_v<T, char32_t>)
            {
                out << static_cast<char>(value);
            }

            else if constexpr (std::is_same_v<T, std::wstring>)
            {
                out << std::string(value.begin(), value.end());
            }

            else
            {
                out << value;
            }


        }, v.var);


        return out;
    }
};