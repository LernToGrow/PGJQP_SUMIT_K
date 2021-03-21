package com.bag.driver;

import java.util.Iterator;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.bag.model.QuestionBag;
import com.list.model.QuestionList;

public class DisplayQuestionBag {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionfactory = configuration.buildSessionFactory();
			Session session = sessionfactory.openSession();

			List<QuestionBag> list = session.createQuery("From QuestionBag").list();

			Iterator<QuestionBag> itr = list.iterator();
			while (itr.hasNext()) {
				QuestionBag q = itr.next();
				System.out.println("Question Name :" + q.getName());

				List<String> list2 = q.getAnswers();
				Iterator<String> itr2 = list2.iterator();
				while (itr2.hasNext()) {
					System.out.println(itr2.next());
				}
			}

			session.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
