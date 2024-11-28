Password Manager in C
This project is a simple command-line password manager written in C. Users can create a 6-digit password, optionally modify it before saving, and later verify the password with a login attempt.
Made by Eren Zara

Features
Password Creation: Users can create a 6-digit numeric password.
Input Validation: Ensures the password meets requirements (e.g., numeric, 6 digits, no leading zeros).
Password Confirmation: Users can re-enter the password to confirm.
Limited Login Attempts: Limits users to 3 attempts to input the correct password.
Table of Contents
Installation
Usage
Code Explanation
Contributing
License
Installation
Ensure you have a C compiler installed (e.g., GCC).
Clone this repository:
git clone https://github.com/your-username/your-repository.git
cd your-repository
Compile the code:
gcc -o password_manager password_manager.c
Usage
Run the compiled program:
./password_manager
Follow the on-screen instructions to create, save, and confirm your password.
If you enter an incorrect password three times, the program will terminate.
Code Explanation
Password Creation: The program enforces a 6-digit numeric password. Non-numeric inputs or invalid lengths trigger an error.
Password Confirmation: Users are prompted to confirm their password by re-entering it.
Login Attempts: Users have three attempts to input the correct password.
Example Walkthrough
Welcome!
Create your password: 123456

Would you like to change your password before saving it (y/n)? n

Your password is saved.
Please enter the password to confirm: 123456
Login successful!
Contributing
Contributions are welcome! To contribute:

Fork this repository.
Create a new branch (git checkout -b feature-branch).
Commit your changes (git commit -m "Add a new feature").
Push the branch (git push origin feature-branch).
Open a pull request.
License
This project is licensed under the MIT License.

Acknowledgements
The C programming community for continuous inspiration and resources.
[Your Name/Team] for development efforts.
