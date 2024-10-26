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
    A = np.array([[4,3,0],
                  [3,4,-1],
                  [0,-1,4]], dtype=float)
    b = np.array([24,30,24], dtype=float)
    x0 = np.array([1, 1, 1], dtype=float)
    
    solution = gauss_seidel(A, b, x0)
    print("Solution:", solution)


# 127.0.0.1   localhost
# 127.0.1.1   raunak-Inspiron-5509

# # The following lines are desirable for IPv6 capable hosts
# ::1     ip6-localhost ip6-loopback
# fe00::0 ip6-localnet
# ff00::0 ip6-mcastprefix
# ff02::1 ip6-allnodes
# ff02::2 ip6-allrouters