def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32

def fahrenheit_to_celsius(fahrenheit):
    return (fahrenheit - 32) * 5/9

def celsius_to_kelvin(celsius):
    return celsius + 273.15

def kelvin_to_celsius(kelvin):
    return kelvin - 273.15

def fahrenheit_to_kelvin(fahrenheit):
    return (fahrenheit - 32) * 5/9 + 273.15

def kelvin_to_fahrenheit(kelvin):
    return (kelvin - 273.15) * 9/5 + 32

def temperature_converter():
    while True:
        print("\nTemperature Converter")
        print("1. Celsius to Fahrenheit")
        print("2. Fahrenheit to Celsius")
        print("3. Celsius to Kelvin")
        print("4. Kelvin to Celsius")
        print("5. Fahrenheit to Kelvin")
        print("6. Kelvin to Fahrenheit")

        try:
            choice = int(input("Choose conversion option (1-6): "))

            if choice not in range(1, 7):
                print("Invalid choice. Please select a valid option.")
                continue

            value = float(input("Enter the temperature value: "))

            if choice == 1:
                result = celsius_to_fahrenheit(value)
                print(f"{value} °C is {result:.2f} °F")
            elif choice == 2:
                result = fahrenheit_to_celsius(value)
                print(f"{value} °F is {result:.2f} °C")
            elif choice == 3:
                result = celsius_to_kelvin(value)
                print(f"{value} °C is {result:.2f} K")
            elif choice == 4:
                result = kelvin_to_celsius(value)
                print(f"{value} K is {result:.2f} °C")
            elif choice == 5:
                result = fahrenheit_to_kelvin(value)
                print(f"{value} °F is {result:.2f} K")
            elif choice == 6:
                result = kelvin_to_fahrenheit(value)
                print(f"{value} K is {result:.2f} °F")

            again = input("\nDo you want to convert another temperature? (yes/no): ").strip().lower()
            if again != 'yes':
                print("Thank you for using the Temperature Converter!")
                break
        except ValueError:
            print("Invalid input! Please enter a valid number.")
            continue

# Run the temperature converter
temperature_converter()
