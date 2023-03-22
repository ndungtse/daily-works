package rw.rca.generics;

public final class Algorithm {
    public static <T> T max(T x, T y) {
        return((Comparable<T>) y).compareTo(x) > 0 ? y : x;
    }
}
