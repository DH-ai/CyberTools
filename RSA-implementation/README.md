RSA encryption is a public-key encryption algorithm that allows secure data transmission. It's based on the mathematical difficulty of factoring the product of two large prime numbers. 

## Steps in RSA Encryption

* Choose two large prime numbers, pp and qq.
* Compute $n=p×qn=p×q$.
* Compute the totient $ϕ(n)=(p−1)×(q−1)ϕ(n)=(p−1)×(q−1)$.
* Choose an integer ee such that $1 < e < ϕ(n) 1 < e < ϕ(n)$ and $gcd(e,ϕ(n))=1gcd(e,ϕ(n))=1$. ee is the public exponent.
* Compute dd such that $d×e≡1mod$  $ϕ(n)d×e≡1modϕ(n)$. dd is the private exponent.
