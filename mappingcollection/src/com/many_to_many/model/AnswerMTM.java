package com.many_to_many.model;

import java.util.List;

public class AnswerMTM {
	private int id;
	private String answername;
	private String postedBy;
	private List<QuestionMTM> questions;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getAnswername() {
		return answername;
	}

	public void setAnswername(String answername) {
		this.answername = answername;
	}

	public String getPostedBy() {
		return postedBy;
	}

	public void setPostedBy(String postedBy) {
		this.postedBy = postedBy;
	}

	public List<QuestionMTM> getQuestions() {
		return questions;
	}

	public void setQuestions(List<QuestionMTM> questions) {
		this.questions = questions;
	}
}
