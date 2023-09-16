package main

import (
	"os"
	"fmt"
	"math"
	"strconv"
)

func IsPrime(value int) bool {
	squareOfValue := int(math.Sqrt(float64(value)))
	for i := 2; i <= squareOfValue; i++ { if value % i == 0 { return false } }
	return true
}

func ListPrime(maxValue int) {
	for i := 2; i <= maxValue; i++ { if IsPrime(i) { fmt.Println(i) } }
}

func main() {
	maxValue := 0
	if len(os.Args) > 1 {
		maxValue, _ = strconv.Atoi(os.Args[1])
	} else { 
		buffer := ""
		fmt.Print("Enter Max Value: ")
		fmt.Scanln(&buffer)
		maxValue, _ = strconv.Atoi(buffer)
	}
	ListPrime(maxValue)
}
