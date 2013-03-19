#lang racket

(define fizz-buzz (lambda (n)
                    (letrec ([ fb-helper (lambda (i)
                                           (if (<= i n)
                                               (begin (cond
                                                        [(= 0 (modulo i 15)) (displayln "FizzBuzz")]
                                                        [(= 0 (modulo i 3))  (displayln "Fizz")]
                                                        [(= 0 (modulo i 5))  (displayln "Buzz")]
                                                        [#t (displayln i)])
                                                      (fb-helper (+ i 1)))
                                               ""))])
                      (fb-helper 1))))

(let ([args (current-command-line-arguments)])
    (if (not (= 0 (vector-length args)))
        (fizz-buzz (string->number (vector-ref args 0)))
        ""))
