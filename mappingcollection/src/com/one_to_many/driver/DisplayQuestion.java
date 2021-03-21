package com.one_to_many.driver;

import java.util.Iterator;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import com.one_to_many.model.Answer;
import com.one_to_many.model.Question;

public class DisplayQuestion {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			
			List<Question> list=session.createQuery("from Question").list();
		    Iterator<Question> itr=list.iterator();    
		    while(itr.hasNext()){    
		        Question q=itr.next();    
		        System.out.println("Question Name: "+q.getQname());    
		            
		        //printing answers    
		        List<Answer> list2=q.getAnswers();    
		        Iterator<Answer> itr2=list2.iterator();    
		       while(itr2.hasNext())  
		       {  
		        Answer a=itr2.next();  
		            System.out.println(a.getAnswername()+":"+a.getPostedby());  
		        }    
		    }  
			
			
			session.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
