import java.util.ArrayList;
import java.util.BitSet;
import java.util.List;

public class PrimeNumber {
	private List<Integer> m_primeNumbers;

	/**
	 * @param sizeOfSieve The upper bound to the determination of prime numbers.
	 */
	public PrimeNumber(int sizeOfSieve) {
		m_primeNumbers = new ArrayList<Integer>();
		sieveOfEratosthenes(sizeOfSieve);
	}

	/**
	 * @param number The number whose sum of divisors is required
	 * @return The sum of divisors of the given number
	 */
	public int getSumOfDivisors(int number) {
		int sum = 1;
		while (number > 1) {
			int temp = 1;
			int primeFactor = getSmallestPrimeFactor(number);
			while (number % primeFactor == 0) {
				temp = temp * primeFactor + 1;
				number /= primeFactor;
			}
			sum *= temp;
		}

		return sum;
	}

	/**
	 * @param number The number whose smallest prime factor is required
	 * @return The smallest rpime factor for the given number
	 */
	public int getSmallestPrimeFactor(int number) {
		for (int prime : m_primeNumbers)
			if (number % prime == 0)
				return prime;

		return Integer.MIN_VALUE;
	}
}
