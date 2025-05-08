// (a+b)%m = a%m + b%m 
// (a-b)%m = a%m - b%m
// (a*b)%m = a%m * b%m
// (a/b)%m = a%m / b%m
// (a^b)%m = a%m ^ b%m

// (a+b)%m = (a%m + b%m)%m
// (a-b)%m = (a%m - b%m)%m
// (a*b)%m = (a%m * b%m)%m
// (a/b)%m = (a%m / b%m)%m
// (a^b)%m = (a%m ^ b%m)%m

// (a+b)%m = (a%m + b%m) % m
// (a-b)%m = (a%m - b%m) % m
// (a*b)%m = (a%m * b%m) % m
// (a/b)%m = (a%m / b%m) % m
// (a^b)%m = (a%m ^ b%m) % m

//*Fast Exponentiation
// a^b ---> (a^b/2)^2 ---> if b is even 
// a^b ---> a^(b/2)^2 * a ---> if b is odd