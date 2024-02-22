**Restaurant Management System**

This repository contains the source code for a Restaurant Management System implemented in C++, utilizing Object-Oriented Programming (OOP) principles with the use of the `virtual` keyword to achieve advanced functionality and maintainability.

### Features

- **Admin Panel**: Administrators can perform tasks such as updating the menu, informing employees, updating employees' salaries, setting employee salaries, updating inventory, viewing analytics, and viewing customer reports and reviews.

- **Employee Management**: Employees can perform operations like adding new records, searching records by employee ID, listing employees of a particular department, updating employee records, deleting employee records, and requesting duty schedule changes.

- **Customer Interaction**: Customers can view the menu, place orders, and generate bills.

### Object-Oriented Approach

The project follows an Object-Oriented Programming paradigm, leveraging classes and objects to encapsulate data and behavior. The `virtual` keyword is used to enable polymorphism, allowing for dynamic binding of functions at runtime. This approach enhances code organization, modularity, and reusability. Each functional aspect of the system is encapsulated within appropriate classes, promoting a clean and maintainable codebase.

### Directory Structure

- `src/`: Contains the source code files.
  - `main.cpp`: Entry point of the application.
  - `Admin.h`: Header file for admin-related functionalities.
  - `Employee.h`: Header file for employee-related functionalities.
  - `Menu.h`: Header file for managing the restaurant menu.
  - `Customer.h`: Header file for customer interactions.
- `include/`: Contains header files.
  - `Admin.h`
  - `Employee.h`
  - `Menu.h`
  - `Customer.h`
- `docs/`: Contains project documentation.
  - `README.md`: Overview of the project and instructions on usage.
  - Other documentation files.
- `assets/`: Contains additional resources such as images or data files.
- `tests/`: Contains unit tests for various components of the system.
- `utils/`: Contains utility functions or classes used across the project.
- `build/`: Contains build artifacts generated during compilation.
- `bin/`: Contains executable files generated after compilation.

### How to Use

1. **Compilation**: Compile the source code using a C++ compiler.
   ```bash
   g++ main.cpp -o restaurant_management_system
   ```

2. **Execution**: Run the compiled executable.
   ```bash
   ./restaurant_management_system
   ```

3. **User Interaction**: Follow the prompts to navigate through the admin, employee, or customer interfaces and perform desired actions.

### Contributors

Afaq Ahmad
Mahnoor Yasin
Yasir Jamal

### License

This project is licensed under the [MIT License](LICENSE).

### Notes

- Ensure that input data files (if any) are correctly formatted and available before running the program.
- For any issues or suggestions, please open an issue or pull request in the repository.
