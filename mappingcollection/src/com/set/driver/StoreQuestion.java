package com.set.driver;

import java.util.HashSet;
import java.util.Set;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.set.model.Question;

public class StoreQuestion {

	public static void main(String[] args) {
		try
		{
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			
			Transaction tx=session.beginTransaction();
			
			HashSet<String> set1=new HashSet<String>();
			set1.add("Java is Progaming Language");
			set1.add("java is used for software devlopment");
			set1.add("Java is a platform");
			
			HashSet<String> set2=new HashSet<String>();
			set2.add("Servlet is Interface");
			set2.add("Servlet is API");
			set2.add("Servlet is a part of java");
			
			Question q1=new Question();
			q1.setQname("What is Java");
			q1.setAnswers(set1);
			
			Question q2=new Question();
			q2.setQname("what is Servlet");
			q2.setAnswers(set2);
			
			session.persist(q1);    
			session.persist(q2);   
			
			tx.commit();
			session.close();
			System.out.println("Success");
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}

}
