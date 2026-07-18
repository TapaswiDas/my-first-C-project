# 🚀 My First C Projects

Welcome to my repository! I am an incoming B.Tech freshman profiling my self-taught coding journey before stepping onto college campus. I built these projects completely from scratch to get a solid, practical head start on C programming mechanics, logic design, and problem-solving.

The primary goal of this repository is to track my growth as I transition into my undergraduate engineering studies, moving from core control flow up to advanced memory and data structures.

---

## 🛠️ Projects Showcase

### 🧮 Terminal Calculator (`calculator.c`)
This project is a terminal-based interactive calculator designed to master multi-operational control flow and string parsing in C. The program takes two decimal numbers and prompts the user to select an operation—ranging from basic arithmetic to floating-point division. It utilizes the standard `<string.h>` library for robust operation selection via `strcmp` and implements safe string formatting by stripping trailing newline characters with `strcspn`. The codebase highlights a clean execution loop that allows for continuous, seamless computations based on real-time user validation.

### 🏦 Robust ATM Simulator (`atm.c`)
An early-intermediate banking emulator designed to master memory address references and modular software design[cite: 3]. Moving away from monolithic scripts, this application cleanly abstracts tasks into dedicated helper functions and implements pass-by-reference state management via raw memory pointers (`double *balance`) to dynamically update balance metrics across isolated scopes[cite: 3]. The program handles fragile execution lifecycles through a centralized `buffer_clean()` routing mechanism, neutralizing trailing newlines and preventing phantom data bugs between alphanumeric inputs[cite: 3]. It also features a strict session-termination security loop that shuts down operations upon three consecutive login failures[cite: 3].

### 📊 Student Grading & Analytics System (`grader.c`)
A performant, loop-driven dataset processor built to implement mathematical analysis on bulk memory. The application utilizes scalable, dynamic array allocation bound to variable sizing states to cleanly manipulate multiple floating-point grades simultaneously. It implements deep defensive code-validation algorithms that leverage integrated `while` evaluation checks directly within the `scanf` stream, safely shielding the runtime from letters or garbage input loops. The analytics backend processes the active array through custom traversal blocks to instantly yield structural reporting metrics, including class average, minimum/maximum values, and multi-tier pass/fail boundary tracking.

### 👣 Fitness Step Tracker (`step_tracker.c`)
A sequential array data processor designed to track and analyze daily physical activity over a dynamic calendar period. The program allows users to safely input daily step counts via a collision-free `scanf` loop backed by an integrated stream cleanser. Once the metrics are populated, the analytics engine iterates through the collection to compute total active steps, daily averages, and identify peak performance days. This project serves as a practical exploration of standard array traversal, data filtering, and converting raw linear data into actionable behavioral summaries.

### 🎯 Proximity Number Guessing Game Engine (`guessing-game.c`)
A modular, console-based interactive number guessing game written in C. This project marks a hands-on development milestone focused on mastering robust programmatic logic, functional scope discipline, and structural control flow without relying on editor autocomplete tools[cite: 3].

The application cleanly separates user interface, execution routines, and core logic[cite: 3]. It features a standalone evaluation engine that processes user guesses against a dynamically seeded random number (1–100)[cite: 3]. Instead of standard static feedback, the program tracks structural states to calculate the exact mathematical distance of a guess, providing responsive proximity hints that actively guide the player toward a perfect win[cite: 3].

---

## 📈 Technical Concepts Covered So Far
* **Memory Architecture:** Pass-by-reference state mutation using raw pointer manipulation (`*` and `&`)[cite: 3].
* **Data Structures:** Linear sequential arrays, tracking boundaries, and algorithmic data traversal.
* **Defensive Program Design:** Secure input validation loops that intercept and quarantine invalid data types.
* **Modular Code Separation:** Refactoring large scripts into clean, reusable, multi-functional single-responsibility building blocks[cite: 3].
* **Low-Level Stream Handling:** Advanced input buffer flushing using centralized stream-cleansing algorithms[cite: 3].
* **String Processing:** Null-terminator targeting and safe string isolation techniques (`strcmp`, `strcspn`, `fgets`)[cite: 3].

---

## 🎯 Next Milestone
Now that I have successfully mastered **Arrays**, **Functions**, and passing data via **Pointers**, my next architectural leap will be introducing **Structs (`struct`)** to group diverse, real-world data shapes together, followed by diving into **File Handling (`fopen`, `fprintf`)** to save program data directly onto permanent hardware storage.
