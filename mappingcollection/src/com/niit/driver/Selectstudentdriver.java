package com.niit.driver;
import com.niit.model.*;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;


public class Selectstudentdriver {

	public static void main(String[] args)
	{
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			List<student> students=session.createQuery("from student").list();
			if(!(students.isEmpty()))
			{
				for(student student:students)
				{
					System.out.println("Student id :"+student.getStudid()+"Name :"+student.getName()+" Email id : "+student.getEmail()+ " Age"+student.getAge());;
				}
			}
			else
			{
				System.out.println("no Records Found plz add records to  view them");
			}
		}catch(Exception e)
		{
			e.printStackTrace();
		}

	}

}
