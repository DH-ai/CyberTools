RSA encryption is a public-key encryption algorithm that allows secure data transmission. It's based on the mathematical difficulty of factoring the product of two large prime numbers. 

## Steps in RSA Encryption

### 1. Key Generation
* Choose two large prime numbers, $p$ and $q$.
* Compute $n=p×qn=p×q$.
* Compute the totient $ϕ(n)=(p−1)×(q−1)ϕ(n)=(p−1)×(q−1)$.
* Choose an integer $e$ such that $1 < e < ϕ(n) 1 < e < ϕ(n)$ and $gcd(e,ϕ(n))=1gcd(e,ϕ(n))=1$. $e$ is the public exponent.
* Compute $d$ such that $d\times e ≡ 1 mod ϕ(n)$. $d$ is the private exponent.

### 2. Encryption

* Convert the message intro and integer $m$ suck that $0\leq m < n$.
* Compute the ciphertext $c=m^e\ mod\ n$

### 3. Decryption
* Compute the plaintext message $m=c^d\ mod\ n$.

We will be using small keys or p and q values for simple implementation.
