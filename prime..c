def is_prime(num):
    """
    Checks if a given number is prime.
    """
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    # Check for divisibility by odd numbers up to the square root of num
    i = 3
    while i * i <= num:
        if num % i == 0:
            return False
        i += 2
    return True

def print_primes_in_range(start, end):
    """
    Prints all prime numbers within a given range (inclusive).
    """
    print(f"Prime numbers between {start} and {end}:")
    for num in range(start, end + 1):
        if is_prime(num):
            print(num)

# Example usage:
lower_bound = 100
upper_bound = 200
print_primes_in_range(lower_bound, upper_bound)