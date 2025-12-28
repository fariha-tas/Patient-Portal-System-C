# Patient Portal System

A terminal-based patient management system developed in C that allows patients to manage healthcare services through a file-based database.

##  Features

* **Doctor Appointments:** Consultations available across specialized departments including Cardiology, Neurology, Dermatology, and more.
* **Pathology & Lab Tests:** Book diagnostic tests and view transparent pricing through the integrated testing module.
* **Blood Bank:** Access `blood_record.txt` to check availability and manage blood donations.
* **Departmental Management:** Specific modules for ENT, Gynecology, Orthopedics, Physiotherapy, and Surgery.

---

## File Structure

The system uses text files to store data, ensuring portability and easy access:

* **`Patient Portal System.c`**: The main source code for the application.
* **`blood_record.txt`**: Stores donor and blood group availability.
* **`Test.txt`**: Contains the catalog of pathology tests and their prices.
* **Departmental Files**: (e.g., `Cardiology.txt`, `Neurology.txt`) Store doctor information.
* **`About.txt`**: Contains hospital and system information.

---

##  How to Run

1. **Prerequisites**: Ensure you have a C compiler (like GCC) installed.
2. Set up an IDE for C language.
3. **Clone the project**:
   ```bash
   git clone [https://github.com/yourusername/repository-name.git](https://github.com/yourusername/repository-name.git)
4. Run the `Patient Portal System.c` file
