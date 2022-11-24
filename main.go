package main

import (
	"fmt"
	"net/http"
)

type User struct {
	Id       string
	Name     string
	Password string
}

func main() {
	fmt.Println("running...")
	var user User

	http.HandleFunc("/registe", func(w http.ResponseWriter, r *http.Request) {
		user.Id = r.FormValue("Id")
		user.Name = r.FormValue("name")

		user.Password = r.FormValue("password")
		w.Write([]byte("注册成功"))

	})
	http.HandleFunc("/login", func(w http.ResponseWriter, r *http.Request) {
		n := r.FormValue("Id")
		p := r.FormValue("password")
		if n == user.Id && p == user.Password {
			w.Write([]byte("登陆成功"))
			cookie := http.Cookie{
				Name:     "_cookie",
				Value:    user.Id,
				HttpOnly: true,
			}
			http.SetCookie(w, &cookie)

		} else {
			w.Write([]byte("登陆失败"))
		}

	})
	http.ListenAndServe(":1234", nil)
}
