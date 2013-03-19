fun fizz_buzz n =
    let fun fizz_helper cur =
        if cur > n then () else ((
          if cur mod 15 = 0 then print("FizzBuzz\n")
          else if cur mod 3 = 0 then print "Fizz\n"
          else if cur mod 5 = 0 then print "Buzz\n"
          else print (Int.toString cur ^ "\n")); fizz_helper (cur + 1))
    in
      fizz_helper 1
    end
