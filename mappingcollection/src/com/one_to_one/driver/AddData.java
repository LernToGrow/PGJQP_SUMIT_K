package com.one_to_one.driver;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.one_to_many.model.Question;
import com.one_to_one.model.AnswerOTO;
import com.one_to_one.model.QuestionOTO;

public class AddData {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
		    Transaction t=session.beginTransaction();    
	        
		    AnswerOTO ans1=new AnswerOTO();    
		    ans1.setAnswername("Java is a programming language");    
		    ans1.setPostedBy("Ravi Malik");    
		        
		    AnswerOTO ans2=new AnswerOTO();    
		    ans2.setAnswername("Java is a platform");    
		    ans2.setPostedBy("Sudhir Kumar");    
		        
		    AnswerOTO ans3=new AnswerOTO();    
		    ans3.setAnswername("Servlet is an Interface");    
		    ans3.setPostedBy("Jai Kumar");    
		        
		    AnswerOTO ans4=new AnswerOTO();    
		    ans4.setAnswername("Servlet is an API");    
		    ans4.setPostedBy("Arun");    
		        
		    ArrayList<AnswerOTO> list1=new ArrayList<AnswerOTO>();    
		    list1.add(ans1);    
		    list1.add(ans2);    
		        
		    ArrayList<AnswerOTO> list2=new ArrayList<AnswerOTO>();    
		    list2.add(ans3);    
		    list2.add(ans4);    
		        
		    QuestionOTO question1=new QuestionOTO();    
		    question1.setQname("What is Java?");    
		    question1.setAnswers(list1);    
		        
		    QuestionOTO question2=new QuestionOTO();    
		    question2.setQname("What is Servlet?");    
		    question2.setAnswers(list2);    
		        
		    session.persist(question1);    
		    session.persist(question2);    
		        
		    t.commit();    
		    session.close();    
		    System.out.println("success");    
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
