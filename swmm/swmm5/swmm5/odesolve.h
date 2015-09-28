<<<<<<< HEAD
//-----------------------------------------------------------------------------
//  odesolve.h
//
//  Header file for ODE solver contained in odesolve.c
//
//-----------------------------------------------------------------------------

// functions that open, close, and use the ODE solver
int  odesolve_open(int n);
void odesolve_close(void);
int  odesolve_integrate(double ystart[], int n, double x1, double x2,
     double eps, double h1, void (*derivs)(double, double*, double*));
=======
//-----------------------------------------------------------------------------
//  odesolve.h
//
//  Header file for ODE solver contained in odesolve.c
//
//-----------------------------------------------------------------------------

// functions that open, close, and use the ODE solver
int  odesolve_open(int n);
void odesolve_close(void);
int  odesolve_integrate(double ystart[], int n, double x1, double x2,
     double eps, double h1, void (*derivs)(double, double*, double*));
>>>>>>> 69bcb3e905257c4a370e55f483acbc4df825991b
