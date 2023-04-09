package main

import (
	"fmt"
	"time"
)

func win() {
	fmt.Println("code flow successfully changed")
}

func main() {

	fmt.Println("normal flow")

	t1 := time.Now()
	time.Sleep(1 * time.Second)
	t2 := time.Now()
	if t1 == t2 {
		win()
	}
}
