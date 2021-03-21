package com.nitt.driver;

import org.hibernate.*;

import org.hibernate.boot.registry.StandardServiceRegistry;
import org.hibernate.boot.registry.StandardServiceRegistryBuilder;
import org.hibernate.cfg.Configuration;
import org.hibernate.metamodel.Metadata;
import org.hibernate.metamodel.MetadataSources;

import com.nitt.model.Address;
import com.nitt.model.Employee;

public class Store {
	public static void main(String[] args) {

		SessionFactory sessionfactory;
		Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
		sessionfactory = configuration.buildSessionFactory();
		Session session = sessionfactory.openSession();

		Transaction t = session.beginTransaction();

		Employee e1 = new Employee();
		e1.setName("Ravi Malik");
		e1.setEmail("ravi@gmail.com");

		Address address1 = new Address();
		address1.setAddressLine1("G-21,Lohia nagar");
		address1.setCity("Ghaziabad");
		address1.setState("UP");
		address1.setCountry("India");
		address1.setPincode(201301);

		e1.setAddress(address1);
		address1.setEmployee(e1);

		session.persist(e1);
		t.commit();

		session.close();
		System.out.println("success");
	}
}
