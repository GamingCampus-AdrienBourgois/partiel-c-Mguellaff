#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <stdexcept>

#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to) {
    if (_from == _to) {
        return _value;  // Pas besoin de conversion si les unités sont les mêmes
    }

    switch (_from) {
    case TemperatureUnits::KELVIN:
        switch (_to) {
        case TemperatureUnits::CELSIUS:
            return _value - 273.15f;
        case TemperatureUnits::FAHRENHEIT:
            return (_value - 273.15f) * 9.0f / 5.0f + 32.0f;
        default:
            throw std::invalid_argument("Conversion not supported");
        }
    case TemperatureUnits::CELSIUS:
        switch (_to) {
        case TemperatureUnits::KELVIN:
            return _value + 273.15f;
        case TemperatureUnits::FAHRENHEIT:
            return _value * 9.0f / 5.0f + 32.0f;
        default:
            throw std::invalid_argument("Conversion not supported");
        }
    case TemperatureUnits::FAHRENHEIT:
        switch (_to) {
        case TemperatureUnits::KELVIN:
            return (_value - 32.0f) * 5.0f / 9.0f + 273.15f;
        case TemperatureUnits::CELSIUS:
            return (_value - 32.0f) * 5.0f / 9.0f;
        default:
            throw std::invalid_argument("Conversion not supported");
        }
    default:
        throw std::invalid_argument("Conversion not supported");
    }
}


#endif
