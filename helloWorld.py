#!/usr/bin/env python3
import Adafruit_BBIO.GPIO as GPIO
import time

LED="P9_11"

GPIO.setup(LED, GPIO.OUT)

print("Hello, World!")

print("\r")

# Add your name below here.  Be sure it still runs.
print("Hi, this is Jonah Egertson.")
