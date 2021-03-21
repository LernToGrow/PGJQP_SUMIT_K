package com.list.driver;

import java.util.Iterator;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.list.model.QuestionList;
import com.set.model.Question;

public class DisplayQuestionList {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionfactory = configuration.buildSessionFactory();
			Session session = sessionfactory.openSession();

			Transaction tx = session.beginTransaction();
			List<QuestionList> list = session.createQuery("From QuestionList").list();

			Iterator<QuestionList> itr = list.iterator();
			while (itr.hasNext()) {
				QuestionList q = itr.next();
				System.out.println("Question Name :"+q.getQname());
				
				List<String> list2=q.getAnswers();
				Iterator<String> itr2=list2.iterator();
				while(itr2.hasNext())
				{
					System.out.println(itr2.next());
				}
				}

			tx.commit();
			session.close();

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
