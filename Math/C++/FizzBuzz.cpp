// Fizzbuzz is one of the most basic problems in the coding interview world. Try to write a small and elegant code for this problem. 

// Given a positive integer A, return an array of strings with all the integers from 1 to N.
// But for multiples of 3 the array should have “Fizz” instead of the number.
// For the multiples of 5, the array should have “Buzz” instead of the number.
// For numbers which are multiple of 3 and 5 both, the array should have “FizzBuzz” instead of the number.

// Look at the example for more details.

// Example

// A = 5
// Return: [1 2 Fizz 4 Buzz]




vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    for(int i=1; i<=A;i++){
        if((i%3==0) && (i%5==0))
        v.push_back("FizzBuzz");
        else if(i%3==0)
        v.push_back("Fizz");
        else if(i%5==0)
        v.push_back("Buzz");
        else{
            string str = to_string(i);
            v.push_back(str);
        }
        
    }
    return v;
}
