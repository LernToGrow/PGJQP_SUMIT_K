package com.many_to_many.driver;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.many_to_many.model.AnswerMTM;
import com.many_to_many.model.QuestionMTM;

public class StoreData {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			Transaction tx=session.beginTransaction();
	          
		    AnswerMTM ans1=new AnswerMTM();  
		    ans1.setAnswername("Java is a programming language");  
		    ans1.setPostedBy("Ravi Malik");  
		      
		    AnswerMTM ans2=new AnswerMTM();  
		    ans2.setAnswername("Java is a platform");  
		    ans2.setPostedBy("Sudhir Kumar");  
		     
		    QuestionMTM q1=new QuestionMTM();  
		    q1.setQname("What is Java?");  
		    ArrayList<AnswerMTM> l1=new ArrayList<AnswerMTM>();  
		    l1.add(ans1);  
		    l1.add(ans2);  
		    q1.setAnswers(l1);  
		      
		    AnswerMTM ans3=new AnswerMTM();    
		    ans3.setAnswername("Servlet is an Interface");    
		    ans3.setPostedBy("Jai Kumar");    
		            
		    AnswerMTM ans4=new AnswerMTM();    
		    ans4.setAnswername("Servlet is an API");    
		    ans4.setPostedBy("Arun");    
		      
		    QuestionMTM q2=new QuestionMTM();  
		    q2.setQname("What is Servlet?");  
		    ArrayList<AnswerMTM> l2=new ArrayList<AnswerMTM>();  
		    l2.add(ans3);  
		    l2.add(ans4);  
		    q2.setAnswers(l2);  
		    session.persist(q1);    
		    session.persist(q2);    
		        
		    tx.commit();    
		    session.close();    
		    System.out.println("success");    
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
