package main

import (
	"fmt"
)

func main() {

	i := 42
	switch i {
	case 42:
		fmt.Println("forty-two")
	case 1337:
		fmt.Println("thirteen thirty seven")
	case 3:
		fmt.Println("three")
	}
}
