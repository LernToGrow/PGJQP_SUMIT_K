package com.one_to_many.driver;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.one_to_many.model.Answer;
import com.one_to_many.model.Question;

public class AddQuestion {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			Transaction tx=session.beginTransaction();
			
			Answer ans1=new Answer();
			ans1.setAnswername("java is programing language");
			ans1.setPostedby("ravi m");
			
			Answer ans2=new Answer();
			ans2.setAnswername("java is a platform");
			ans2.setPostedby("rishi m");
			
			Answer ans3=new Answer();
			ans3.setAnswername("it is used to devlopes software");
			ans3.setPostedby("ram kishan");

			Answer ans4=new Answer();
			ans4.setAnswername("Servlet is interface ");
			ans4.setPostedby("raj kumar");
			
			Answer ans5=new Answer();
			ans5.setAnswername("servlet is API");
			ans5.setPostedby("ravikant j");
			
			Answer ans6=new Answer();
			ans6.setAnswername("it is used to devlpoes web aplication");
			ans6.setPostedby("rangnath k");

			ArrayList<Answer> list1=new ArrayList<Answer>();
			list1.add(ans1);
			list1.add(ans2);
			list1.add(ans3);
			
			ArrayList<Answer> list2=new ArrayList<Answer>();
			list2.add(ans4);
			list2.add(ans5);
			list2.add(ans6);
			
			Question q1=new Question();
			q1.setQname("What is java?");
			q1.setAnswers(list1);
			
			Question q2=new Question();
			q2.setQname("What is Servlet");
			q2.setAnswers(list2);
			
			session.persist(q1);
			session.persist(q2);
			
			tx.commit();
			session.close();
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
