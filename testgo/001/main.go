package main

import (
	"001/helper"
	"fmt"
)

const conferenceTickets = 50

var bookings = make([]UserData, 0)
var remainingTicket uint = 50

type UserData struct {
	firstName       string
	lastName        string
	email           string
	numberOfTickets uint
}

func main() {

	fmt.Println("Welcome to booking application")
	fmt.Printf("We have total of %v tickets and %v are still available\n", conferenceTickets, remainingTicket)

	for {
		firstName, lastName, email, userTickets := getUserInput()

		isValidName, isValidEmail, isValidTicket := helper.ValidUsrInput(firstName, lastName, email, userTickets, remainingTicket)

		if isValidEmail && isValidName && isValidTicket {

			setBooking(userTickets, firstName, lastName, email)

			firstNames := getFirstName()
			fmt.Printf("there firstname booking are : %v\n", firstNames)
			if remainingTicket == 0 {
				fmt.Println("Our conference is booked out. Come back next year. ")
				break
			}
		} else {
			if !isValidName {
				fmt.Println("Firstname or lastName is too short")
			}
			fmt.Println("Your input data invalid, please try again")
		}

	}

}

func getFirstName() []string {
	firstNames := []string{}
	for _, booking := range bookings {

		firstNames = append(firstNames, booking.firstName)
	}
	return firstNames
}

func getUserInput() (string, string, string, uint) {
	var firstName string
	var lastName string
	var email string
	var userTickets uint

	fmt.Println("Enter Your first name: ")
	fmt.Scan(&firstName)
	fmt.Println("Enter your last name: ")
	fmt.Scan(&lastName)
	fmt.Println("Enter your email: ")
	fmt.Scan(&email)
	fmt.Println("Enter number of tickets: ")
	fmt.Scan(&userTickets)

	return firstName, lastName, email, userTickets

}

func setBooking(userTickets uint, firstName string, lastName string, email string) {

	remainingTicket -= userTickets
	var userData = UserData{
		firstName:       firstName,
		lastName:        lastName,
		email:           email,
		numberOfTickets: userTickets,
	}

	bookings = append(bookings, userData)
	fmt.Printf("List of booking %v\n", bookings)
	fmt.Printf("thank you %v %v for booking %v tickets. You will recive a confirmation email at %v\n", firstName, lastName, userTickets, email)
	fmt.Printf("%v ticket remaining\n", remainingTicket)
}
