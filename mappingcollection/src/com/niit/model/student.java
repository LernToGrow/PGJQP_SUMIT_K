package com.niit.model;

import java.io.Serializable;

public class student implements Serializable {
	private Integer studid;
	private String  name;
	private String email;
	private Integer age;
	public student()
	{
		
	}
	public Integer getStudid() {
		return studid;
	}
	public void setStudid(Integer studid) {
		this.studid = studid;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public Integer getAge() {
		return age;
	}
	public void setAge(Integer age) {
		this.age = age;
	};
	
}
