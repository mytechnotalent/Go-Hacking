package main

import (
	"fmt"
	"time"
)

func getMagicNumber() int {
	var number int
	fmt.Print("Enter the magic number: ")
	fmt.Scan(&number)
	if number == 42 {
		fmt.Println("THE MEANING OF LIFE!")
	} else {
		fmt.Println("clearly not a Hitchhiker's fan... :(")
	}
	return number
}

func add(a, b, c, d, e, f, g, h int) int {
	return a + b + c + d + e + f + g + h
}

func win() {
	fmt.Println("code flow successfully changed")
}

func main() {
	var magicNumber, sum int

	magicNumber = getMagicNumber()
	sum = add(magicNumber, 2, 3, 4, 5, 6, 7, 8)
	fmt.Printf("sum: %d\n", sum)

	t1 := time.Now()
	time.Sleep(2 * time.Second)
	t2 := time.Now()

	if t2.Sub(t1) == time.Second {
		win()
	}
}
