package helper

import "strings"

func ValidUsrInput(firstName string, lastName string, email string, userTickets uint, remainingTicket uint) (bool, bool, bool) {

	isValidName := len(firstName) >= 2 && len(lastName) >= 2
	isValidEmail := strings.Contains(email, "@")
	isValidTicket := userTickets > 0 && userTickets <= remainingTicket

	return isValidName, isValidEmail, isValidTicket

}
