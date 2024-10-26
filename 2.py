import numpy as np

def gauss_seidel(A, b, x0=None, tol=1e-10, max_iterations=1000):
    """
    Solve the system of linear equations Ax = b using the Gauss-Seidel method.
    
    Parameters:
    A : ndarray
        Coefficient matrix.
    b : ndarray
        Right-hand side vector.
    x0 : ndarray, optional
        Initial guess for the solution.
    tol : float, optional
        Tolerance for convergence.
    max_iterations : int, optional
        Maximum number of iterations.
        
    Returns:
    x : ndarray
        Solution vector.
    """
    A = np.array(A, dtype=float)
    b = np.array(b, dtype=float)
    n = len(b)
    
    if x0 is None:
        x0 = np.zeros(n)
    
    x = np.copy(x0)
    
    for iteration in range(max_iterations):
        x_old = np.copy(x)
        
        for i in range(n):
            # Calculate the sum of the elements excluding the diagonal
            sum1 = np.dot(A[i, :i], x[:i])
            sum2 = np.dot(A[i, i+1:], x_old[i+1:])
            
            # Update the value of x[i]
            x[i] = (b[i] - sum1 - sum2) / A[i, i]
        
        # Check for convergence
        if np.linalg.norm(x - x_old, ord=np.inf) < tol:
            return x
        
        print(x)
        
    raise ValueError("Gauss-Seidel method did not converge within the maximum number of iterations")

# Example usage:
if __name__ == "__main__":
    A = np.array([[20, 1, -2],
                  [3, 20, -1],
                  [2, -3, 20]], dtype=float)
    b = np.array([17, -18, 25], dtype=float)
    x0 = np.zeros(len(b))
    
    solution = gauss_seidel(A, b, x0)
    print("Solution:", solution)