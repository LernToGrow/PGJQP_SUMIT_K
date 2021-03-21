package com.many_to_many.driver;

import java.util.Iterator;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import com.many_to_many.model.AnswerMTM;
import com.many_to_many.model.QuestionMTM;
import com.many_to_one.model.Address;
import com.many_to_one.model.Employee;

public class DisplayData {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionfactory = configuration.buildSessionFactory();
			Session session = sessionfactory.openSession();
			List<QuestionMTM> list = session.createQuery("from QuestionMTM").list();

			Iterator<QuestionMTM> itr = list.iterator();
			while (itr.hasNext()) {
				QuestionMTM que = itr.next();
				System.out.println(que.getId() + " " + que.getQname());
				List<AnswerMTM> list1 = que.getAnswers();
				Iterator<AnswerMTM> itr1 = list1.iterator();
				while (itr1.hasNext()) {
					AnswerMTM ans = itr1.next();
					System.out.println(ans.getId() + "" + ans.getAnswername() + "" + ans.getPostedBy());
				}
			}
			session.close();
			System.out.println("success");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
