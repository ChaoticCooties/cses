def weird(n, line):
    """
    If n is even, divide by two
    If n is odd, multiply by 3 and add one
    returns if n is one
    """
    if n == 1:
        return line + "1"

    if n % 2 == 0:
        new_n = n // 2

    if n % 2 == 1:
        new_n = (n * 3) + 1

    return weird(new_n, (line + str(n) + " "))

n = int(input())
print(weird(n, ""))
