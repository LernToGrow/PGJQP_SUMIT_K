package com.set.driver;

import java.util.Iterator;
import java.util.List;
import java.util.Set;

import javax.persistence.TypedQuery;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.set.model.Question;

public class DisplayQuestion {
public static void main(String[] args) {
	
	SessionFactory sessionfactory;
	Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
	sessionfactory=configuration.buildSessionFactory();
	Session session=sessionfactory.openSession();
	
	Transaction t=session.beginTransaction();    
    
	List<Question> list=session.createQuery("from Question").list();    
        
    Iterator<Question> itr=list.iterator();    
    while(itr.hasNext()){    
        Question q=itr.next();    
        System.out.println("Question Name: "+q.getQname());    
            
        //printing answers    
        Set<String> set=q.getAnswers();    
        Iterator<String> itr2=set.iterator();    
        while(itr2.hasNext()){    
            System.out.println(itr2.next());    
        }    
            
    }
//	Transaction t=session.beginTransaction();    
//	//List<Question> students=session.createQuery("from Question").list();
//	if(!(students.isEmpty()))
//	{
//		for(Question student:students)
//		{
//			System.out.println("Question id :"+student.getId()+"Name :"+student.getQname());;
//		}
//	}
//	else
//	{
//		System.out.println("no Records Found plz add records to  view them");
//	}
    t.commit();
    session.close();    
    
    System.out.println("success");    
}
}
