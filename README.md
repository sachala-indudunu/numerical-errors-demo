# Numerical Error Simulation (C++)

This project demonstrates how small numerical errors can accumulate over time, inspired by real-world system failures.

## Patriot Missile Simulation

This example simulates the timing error that occurred in the Patriot missile system during the Gulf War.

- Time is tracked in tenths of a second (ticks)
- A truncated binary approximation of 0.1 is used instead of the exact value
- Over long runtime (100 hours), a small error accumulates

## Key Idea

A tiny rounding error in representing 0.1 leads to a measurable drift over time.

## How to Run

g++ main.cpp -o sim
./sim
