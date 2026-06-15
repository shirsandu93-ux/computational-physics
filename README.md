# Computational Physics

A collection of numerical methods and solvers for computational physics problems.

## Repo Structure



computational-physics/
- ODE_solver/
  - euler.cpp
  - euler2d.cpp
  - runge_kutta_2nd_order.cpp
  - runge_kutta_4th_order.cpp
  - harmonic_oscillator_damping.pdf
- RootFinding/
  - newton_raphson.cpp
  - newton_raphson_two_function.cpp
- Curve_Fitting/
  - lagrangian_interpolation.cpp
  - least_square_log.cpp
  - gauss_seidal.cpp
- outputs/           



## Numerical Methods Included

### ODE Solvers
- **Euler Method** (`euler.cpp`) - First order ODE solver
- **Runge-Kutta 2nd Order** - Improved Euler method
- **Runge-Kutta 4th Order** - High accuracy ODE solver

### Root Finding
- **Newton-Raphson** - Single equation root finding
- **Newton-Raphson (2D)** - System of equations

### Curve Fitting
- **Lagrangian Interpolation** - Polynomial interpolation
- **Least Squares (Log)** - Logarithmic curve fitting
- **Gauss-Seidel** - Iterative linear system solver
