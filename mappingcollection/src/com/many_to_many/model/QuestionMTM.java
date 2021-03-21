package com.many_to_many.model;

import java.util.List;

public class QuestionMTM {
	private int id;
	private String qname;
	private List<AnswerMTM> answers;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getQname() {
		return qname;
	}

	public void setQname(String qname) {
		this.qname = qname;
	}

	public List<AnswerMTM> getAnswers() {
		return answers;
	}

	public void setAnswers(List<AnswerMTM> answers) {
		this.answers = answers;
	}
}