package com.bag.model;

import java.util.List;

public class QuestionBag {
	private int id;
	private String name;
	private List<String> answers;
	
	public QuestionBag() {
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public List<String> getAnswers() {
		return answers;
	}

	public void setAnswers(List<String> answers) {
		this.answers = answers;
	}
	
	
}
