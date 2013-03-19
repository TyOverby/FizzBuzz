def fizzBuzz(n: Int){
  (1 to n) foreach {
    case x if x % 15 == 0 => println("FizzBuzz")
    case x if x %  3 == 0 => println("Fizz")
    case x if x %  5 == 0 => println("Buzz")
    case x => println(x)
  }
}

