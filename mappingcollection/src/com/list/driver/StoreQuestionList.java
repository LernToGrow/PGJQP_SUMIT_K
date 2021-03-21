package com.list.driver;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.list.model.QuestionList;


public class StoreQuestionList {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionfactory = configuration.buildSessionFactory();
			Session session = sessionfactory.openSession();
			Transaction tx = session.beginTransaction();
				ArrayList<String> list1=new ArrayList<String>();
				list1.add("java is programing language");
				list1.add("java is a platform");
				
				ArrayList<String> list2=new ArrayList<String>();
				list2.add("Servlet is a interface");
				list2.add("Servlet is API");
				
				
				QuestionList question1=new QuestionList();
				question1.setQname("What is java?");
				question1.setAnswers(list1);
				
				QuestionList question2=new QuestionList();
				question2.setQname("What is Servlet");
				question2.setAnswers(list2);
				
				session.save(question1);
				session.save(question2);
				
			tx.commit();
			session.close();
			System.out.println("Data Added");
		} catch (Exception e) {

		}
	}

}
