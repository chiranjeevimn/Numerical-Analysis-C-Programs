# Numerical-Analysis-C-Programs
This repository contain the C program to implement Simpson 1/3 rule, Gauss elimination, Trapizoidal, Newton raphson method.

**1. Simpson's 1/3 rule**
   This method is also called parabolic rules. In Simpson's 1/3 rule, we approximate the polynomial based on quadratic approximation. In this, each approximation actually covers two of the subintervals. This is why we require the number of subintervals to be even.
Some of the approximations look more like a line than a quadric, but they really are quadratics.

**Following is the Formula of Simpson's ¹/₃ rule**

ₐ∫ᵇ f (x) dx = h/₃ [(y₀ + yₙ) + 4 (y₁ + y₃ + ..) + 2(y₂ + y₄ + ..)]

**2. Trapezoidal Rule**
   This method is also known as the trapezium rule. In the trapezoidal rule, we approximate the curve with a straight line and hence can only be accurate for sufficiently small h. This rule gives the exact value of the integral of f(x) as a linear function. when several trapezoids are used, we call it the composite trapezoidal rule.

**Following is the Formula of Trapezoidal Method**

ₐ∫ᵇ f (x) dx = h/2 [(y₀ + yₙ) + 2(y1+ y2 + ..)]
   
