package rw.rca.study;

import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

public class ThreadPool {
    Executor executor = new Executor() {
        @Override
        public void execute(Runnable command) {
            new Thread(command).start();
        }
    };

    Executor pool = Executors.newFixedThreadPool(10);

    public static void main(String[] args) {
        ThreadPool tp = new ThreadPool();
        tp.executor.execute(new Runnable() {
            @Override
            public void run() {
                System.out.println("Hello");
            }
        });
        tp.pool.execute(new Runnable() {
            @Override
            public void run() {
                System.out.println("Hello");
            }
        });
    }
}
