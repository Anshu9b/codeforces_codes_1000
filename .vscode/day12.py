def is_lower_triangular(matrix):
    """
    Returns True if the input matrix is lower triangular, False otherwise.
    """
    rows = len(matrix)
    cols = len(matrix[0])
    
    for i in range(rows):
        for j in range(i+1, cols):
            if matrix[i][j] != 0:
                return False
    
    return True
