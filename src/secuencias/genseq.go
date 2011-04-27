
package main

import (
	"fmt"
	"flag"
	"time"
	"rand"
)

var length int
var maxvalue int
var minvalue int
var maxinc int
var withzeros bool
var seed int64

func main() {
	flag.IntVar(&length, "l", 5000, "length")
	flag.IntVar(&maxvalue, "m", 1000, "maxvalue")
	flag.IntVar(&minvalue, "n", 1, "minvalue")
	flag.IntVar(&maxinc, "i", 25, "maxincrement")
	flag.BoolVar(&withzeros, "z", false, "withzeros")
	flag.Int64Var(&seed, "s", time.Seconds(), "seed")
	flag.Parse()

	rand.Seed(seed)
	
	value := (maxvalue + minvalue) / 2
	for i := 0; i < length; i++ {
		value += rand.Intn(maxinc * 2) - maxinc
		switch {
		case value > maxvalue:
			value = maxvalue - rand.Intn(maxinc)
		case value < minvalue:
			value = minvalue + rand.Intn(maxinc)
		}
		fmt.Println(value);
	}
	
}

