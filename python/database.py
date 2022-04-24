#demo program to create a database for clothes store management
import sqlite3 #using sqlite3
sqlite.connect('clothes_store_information')

#Create table content part
import sqlite3
conn = sqlite3.connect('test_database') 
c = conn.cursor()

c.execute('''
          CREATE TABLE IF NOT EXISTS products
          ([product_id] INTEGER PRIMARY KEY, [product_name] TEXT, [product_price] INTEGER, [product_quantity] INTEGER)
          ''')
          
c.execute('''
          CREATE TABLE IF NOT EXISTS safety_box
          ([tiền_mua_hàng] INTEGER, [tiền_bán] INTEGER, [tiền_duy_trì_quán] INTEGER)
          ''')

c.execute('''
          CREATE TABLE IF NOT EXISTS customer
          ([name] TEXT, [age] INTEGER, [phone number] INTEGER)
          ''')

c.execute('''
          CREATE TABLE IF NOT EXISTS staff
          ([name] TEXT, [age] INTEGER, [phone number] INTEGER, [salary] INTEGER , [shift] DATETIME)
          ''')

c.execute('''
          CREATE TABLE IF NOT EXISTS order
          ([order number] INTEGER , [order date] DATETIME, [order status] INTEGER)
          ''')
                     
conn.commit()
#Insert information to table
import sqlite3

conn = sqlite3.connect('test_database') 
c = conn.cursor()
                   
c.execute('''
          INSERT INTO products (product_id, product_name, product_price, product_quantity)
                VALUES
                (1,'pants',10,100),
                (2,'T-shirt',7,100),
                (3,'socks',1,100),
                (4,'shoes',20,100),
                (5,'skirt',11,100)
          ''')

c.execute('''
          INSERT INTO safety_box (tiền_mua_hàng, tiền_bán, tiền_duy_trì_quán)
                VALUES
                (1,800),
                (2,200),
                (3,300),
                (4,450),
                (5,150)
          ''')

c.execute('''
          INSERT INTO customer (name, age, phone number)
                VALUES
                ('A',18,01246384345),
                ('B',21,07286528568),
                ('C',20,06523852698)
          ''')

c.execute('''
          INSERT INTO staff (name, age, phone number, salary, shift)
                VALUES
                ('C',21,0354285146,10,'19:00:00'),
                ('D',23,0142342244,10,'8:00:00'),
                ('E',19,0985366686,10,'14:00:00')
          ''')

c.execute('''
          INSERT INTO order (order number, order date, order status)
                VALUES
                (1,'2022-2-12 13:00:00',ongoing),
                (2,'2022-3-15 10:00:00',ongoing),
                (3,'2022-4-20 19:00:00',cancel)
          ''')
conn.commit()

#Display table part
import sqlite3
import pandas as pd

conn = sqlite3.connect('test_database') 
c = conn.cursor()
                   
c.execute('''
          SELECT
          a.products,
          b.safetybox,
          c.customer,
          d.staff,
          e.order
          FROM products a
          LEFT JOIN safety_box b ON a.product_id = b.product_id
          ''')

df = pd.DataFrame(c.fetchall(), columns=['product_name','safetybox'])
print (df)
