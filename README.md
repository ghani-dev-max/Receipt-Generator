# 🧾 Receipt Generator in C++

A simple and interactive C++ program that allows users to input items, quantities, and prices, then calculates:
- Subtotal
- Discount
- Tax
- Final total

It saves all information to a `receipt.txt` file and opens it in **Notepad (Windows only)**.

---

## ✨ Features

- Unlimited item entry (type `done` to finish)
- Discount & tax calculation
- Saves to `receipt.txt`
- Automatically opens the file in Notepad (Windows only)
- Beginner-friendly code

---

## 🖥️ How to Run

### 🔹 Prerequisites:
- A C++ compiler (Dev-C++, Code::Blocks, Visual Studio, VS Code + g++)
- Windows OS (for auto Notepad feature)

### 🔹 Steps:
1. Clone this repo or download the `receipt_generator.cpp` file.
2. Open it in your favorite C++ IDE.
3. Compile and run the program.
4. Follow prompts to enter items, discount, and tax.
5. After finishing, the receipt will open in Notepad automatically.

---

## 🧪 Example Output
 receipt.txt Output:
Customer: Usman
Date: 2025-7-2 Time: 23:58:20
Milk x2 = $10.00
Subtotal: $10.00
Discount (10%): -$1.00
Tax (5%): +$0.45
Total after discount & tax: $9.45
### ✅ Console Input:
Enter your name: Usman
Enter item name (or type 'done' to finish): Milk
Enter quantity: 2
Enter price per item: 5
Enter item name (or type 'done' to finish): done
Enter discount percentage: 10
Enter tax percentage: 5