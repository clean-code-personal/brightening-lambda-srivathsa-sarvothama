# Lambda for pixel brightening

Objective of this assignment is to experience the code-reduction that's possible with lambdas.

This repository is an experimental refactoring, in-progress.

## What's been done

In the quest for more encapsulation, the knowledge of pixels (e.g., that they are arranged by rows)
is in the `Image` class now. The `Image` class is now responsible for running through all the pixels.
See its `pixelRunner` function.

However, the `Image` class should not have all kinds of processing,
so the pixel-level processing is now done behind an interface (`IPixelProcessor`).
A concrete class called `PixelBrightener` implements the brightening of individual pixels.

## Refactoring with lambdas

In an effort to make the code more concise, the `Image` class overloads `pixelRunner` to accept
a `pixelProcessor` function. The `experimental-brightener.cpp` uses this overloaded variant.

## Your task - complete the refactor

- The `main()` function in `brightening-lambda.cpp` still uses the original variant. Change it to **use the lambda variant** `experimental-brightener`
- **Check** with the debugger that the functionality is equivalent
- The old code (`ipixelprocessor.h`, its derived classes and those that use them) aren't required anymore. **Remove all old code**.
- Straighten out the names of the files (not an experiment anymore, since we checked it works)
- All other clean-code practices (no commented code + standard guidelines)
