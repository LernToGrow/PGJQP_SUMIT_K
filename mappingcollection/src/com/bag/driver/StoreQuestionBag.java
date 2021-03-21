package com.bag.driver;

import java.util.ArrayList;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.bag.model.QuestionBag;
import com.list.model.QuestionList;

public class StoreQuestionBag {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			Transaction tx=session.beginTransaction();
			ArrayList<String> list1=new ArrayList<String>();
			list1.add("	HTML is a hyper text markup language");
			list1.add("it is used to design webpage ");
			
			ArrayList<String> list2=new ArrayList<String>();
			list2.add("longform of css is casceding style sheet");
			list2.add("it is used to gives styles");
			
			
			QuestionBag question1=new QuestionBag();
			question1.setName("What is html?");
			question1.setAnswers(list1);
			
			QuestionBag question2=new QuestionBag();
			question2.setName("What is css?");
			question2.setAnswers(list2);
			
			session.save(question1);
			session.save(question2);
			tx.commit();
			session.close();
			System.out.println("Data Added");
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
