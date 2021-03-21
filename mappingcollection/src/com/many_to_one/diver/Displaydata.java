package com.many_to_one.diver;

import java.util.Iterator;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import com.many_to_one.model.Address;
import com.many_to_one.model.Employee;

public class Displaydata {

	public static void main(String[] args) {
		try {
			SessionFactory sessionfactory;
			Configuration configuration=new Configuration().configure("hibernate.cfg.xml");
			sessionfactory=configuration.buildSessionFactory();
			Session session=sessionfactory.openSession();
			   List<Employee> list=session.createQuery("from Employee").list();   
		        
			    Iterator<Employee> itr=list.iterator();    
			    while(itr.hasNext()){    
			     Employee emp=itr.next();    
			     System.out.println(emp.getEmployeeId()+" "+emp.getName()+" "+emp.getEmail());    
			     Address address=emp.getAddress();    
			     System.out.println(address.getAddressLine1()+" "+address.getCity()+" "+    
			        address.getState()+" "+address.getCountry()+" "+address.getPincode());    
			    }    
			    
			    session.close();    
			    System.out.println("success");  
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
