package com.one_to_one.model;

import java.util.List;

public class QuestionOTO {
	private int id;  
	private String qname;  
	private List<AnswerOTO> answers;
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
	public List<AnswerOTO> getAnswers() {
		return answers;
	}
	public void setAnswers(List<AnswerOTO> answers) {
		this.answers = answers;
	}  
	
}
