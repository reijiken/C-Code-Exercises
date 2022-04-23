#demo program to create a database for clothes store management
import sqlite3 #using sqlite3
sqlite.connect('clothes_store_information')

#Create table content part
import sqlite3
conn = sqlite3.connect('test_database') 
c = conn.cursor()

c.execute('''
          CREATE TABLE IF NOT EXISTS products
          ([product_id] INTEGER PRIMARY KEY, [product_price] INTEGER, [product_quantity] INTEGER, [product_size] TEXT)
          ''')
          
c.execute('''
          CREATE TABLE IF NOT EXISTS safety_box
          ([tiền_mua_hàng] INTEGER , [tiền_bán] INTEGER, [tiền_duy_trì_quán] INTEGER)
          ''')
                     
conn.commit()
#Insert information to table
import sqlite3

conn = sqlite3.connect('test_database') 
c = conn.cursor()
                   
c.execute('''
          INSERT INTO products (product_id, product_price, product_quantity,product_size)

                VALUES
                (1,'Computer'),
                (2,'Printer'),
                (3,'Tablet'),
                (4,'Desk'),
                (5,'Chair')
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

conn.commit()

#Display table part
import sqlite3
import pandas as pd

conn = sqlite3.connect('test_database') 
c = conn.cursor()
                   
c.execute('''
          SELECT
          a.products,
          b.safetybox
          FROM products a
          LEFT JOIN safety_box b ON a.product_id = b.product_id
          ''')

df = pd.DataFrame(c.fetchall(), columns=['product_name','safetybox'])
print (df)