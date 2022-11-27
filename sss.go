package main

import (
	"math/rand"
	"net/http"
	"strconv"
	"time"
)

var Userstore map[string]*User

type User struct {
	ID       string
	Name     string
	password string
	cookie   http.Cookie
}

func main() {
	http.HandleFunc("/Register", func(w http.ResponseWriter, r *http.Request) { //注册
		var use User
		user := &use
		ID := r.FormValue("ID")
		password := r.FormValue("passward")
		if ID != "" && password != "" {
			user.ID = ID
			user.password = password
			Userstore[ID] = user //存到Userstore里，后面修改时改变Userstore里信息
			w.Write([]byte("注册成功"))
		} else {
			w.Write([]byte("注册失败，请重试"))
		}
	})
	http.HandleFunc("/Login", func(w http.ResponseWriter, r *http.Request) {
		ID := r.FormValue("ID")
		password := r.FormValue("password")
		if hereID, judge := Userstore[ID]; judge /*判断用户是否存在*/ {
			if hereID.password == password {
				rand.Seed(time.Now().UnixNano())
				value := strconv.Itoa(rand.Intn(10000)) //生成随机数作为value
				expire := time.Now().AddDate(0, 0, 1)
				cookie := &http.Cookie{
					Name:     "_cookie",
					Value:    value,
					Expires:  expire,
					HttpOnly: true,
				}
				http.SetCookie(w, cookie)
				w.Write([]byte("成功登录"))
			} else {
				w.Write([]byte("登陆失败"))
			}
		} else {
			w.Write([]byte("未注册,请注册"))
		}
	})
	http.HandleFunc("/Mainpage", func(w http.ResponseWriter, r *http.Request) { //用cookie访问
		for id, ck := range Userstore {
			cookie, err := r.Cookie(id)
			if err == nil && cookie.Value == ck.cookie.Value {
				w.Write([]byte("欢迎"))
			} else {
				return
			}
		}
	})
	http.HandleFunc("/Modify", func(w http.ResponseWriter, r *http.Request) { //修改
		for a, b := range Userstore {
			cookie, err := r.Cookie(a) //？
			if err == nil && cookie.Value == b.cookie.Value {

				if err != nil {
					return
				}
				ID := r.FormValue("ID") //获取
				Name := r.FormValue("Name")
				password := r.FormValue("password")

				modifyuser := Userstore[ID]
				if ID != "" {

					if password != "" { //修改
						modifyuser.password = password
					}
					if Name != "" {
						modifyuser.Name = Name
					}
					_, err := w.Write([]byte("修改完毕"))
					if err != nil {
						return //返回
					}
				}
			}
		}
	})
	http.ListenAndServe(":1234", nil)

}
