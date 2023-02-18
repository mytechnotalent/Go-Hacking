package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	fmt.Print("Enter your favorite number: ")
	scanner.Scan()
	input := scanner.Text()

	num, err := strconv.Atoi(input)
	if err != nil {
		fmt.Println("Invalid input")
		return
	}

	if num == 42 {
		fmt.Println(num, "the answer to life")
	} else {
		fmt.Println(num, "not the answer to life")
	}
}
