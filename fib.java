class Fib {
    public static void main(String[] a){
        int n = Integer.parseInt(a[0]);
		String method = a[1];
		long fibonacci = 0;
		switch (method) {
			case "i":
				fibonacci = fibIter(n);
				break;
			case "r":
				fibonacci = fibRec(n);
				break;
		}
        System.out.println("Java done\n" + fibonacci);
    }

    private static long fibRec(int n){
        if (n < 2) {
            return n;
        } else {
            return fibRec(n - 1) + fibRec(n - 2);
        }
    }
	
	private static long fibIter(int n) {
		long prev = 0;
		long next = 1;
		for (int i = 1; i < n; i++) {
			long sum = prev + next;
			prev = next;
			next = sum;
		}
		return next;
	}

}
