#20/09/2024
#Create a database with name of "books_shop_db".
create database books_shops_db;
use books_shops_db;

#Create a table with the name of "books"  and fields are: book_id, title, author_first_name, author_last_name, release_year, stock_quantity, pages
Create table books(
	book_id int not null primary key auto_increment,
    title varchar(100),
    author_fname varchar(100),
    author_lname varchar(100),
    release_year int,
    stock_quantity int,
    pages int);


#21/09/2024
#Insert below data into "books" table
insert into books(title, author_fname, author_lname, release_year, stock_quantity, pages) values
('The namesake', 'Jhumpa', 'Lahiri', 2003, 32, 291),
('Norse Mythology', 'Neil', 'Gaiman', 2016, 43, 304),
('American Gods', 'Neil', 'Gaiman', 2001, 12, 465),
('Interpreter of Maladies', 'Jhumpa', 'Lahiri', 1996, 97, 198),
('A Hologram for the King: A Novel', 'Dave', 'Eggers', 2012, 154, 352),
('The Circle', 'Dave', 'Eagger', 2013, 28, 504),
('The Amazing Adventures of Kavalier & Clay', 'Michael', 'Chabon', 2000, 68, 634),
('Just Kids', 'Patti', 'Smith', 2010, 55, 304),
('A Heartbreaking Work of Staggering Genius', 'Dave', 'Eggers', 2001, 104, 437),
('Coraline', 'Neil', 'Gaiman', 2003, 100, 208),
('What We Talk About When We Talk About Love: Stories', 'Raymond', 'Carver', 1981, 23, 176),
("Where I'm Calling From: Selected Stories", 'Raymond', 'Carver', 1989, 12, 526), 
('White Noise', 'Don', 'DeLillo', 1985, 49, 325),
('Cannery Row', 'John', 'Steinbeck', 1945, 95, 181),
('Oblivion: Stories', 'David', 'Foster Wallace', 2004, 172, 329),
('Consider the Lobster', 'David', 'Foster Wallace', 2005, 92, 143);

#23/09/2024
#Write SQL query to fetch all details from books table.
Select * from books; 

#Write SQL query to fetch title, release_year, author_fanme, author_lname from books table.
Select title, release_year, author_fname, author_lname from books;

#24/09/2024
#Write the SQL queries to update the author_last_name whose write the book "Coraline"
Update books 
set author_lname = 'Joshi' 
where title = 'Coraline';

#Write the SQL queries to fetch unique author_first_name and author_last_name?
SELECT DISTINCT author_fname, author_lname AS author 
FROM books;

SET SQL_SAFE_UPDATES = 0;
SET SQL_SAFE_UPDATES = 1;

#25/09/2024
#Delete books details where books pages are less than 200
Delete from books where pages<200;

#Write a query to fetch only those records from the books table whose pages is above 400.
Select * from books where pages>400;


#26/09/2024
#Write a sql query to Reverse and uppercase the following sentence: "Why does my cat look at me with such hatered?"
Select Upper(Reverse("Why does my cat look at me with such hatered?")) as reverse_upper;

#Write a sql query to print original author_last_name and reverse_last_name as the forward and backward names.
Select author_lname as forward, Reverse(author_lname) as backward from books;

#27/09/2024
#Write a sql queries to combine the author_first_name and author_last_name and print with title, release_year and stock_quantity.
Select Concat(author_fname, ' ', author_lname) as author, title, release_year, stock_quantity from books;

#Write a sql queries to combine the author_first_name and author_last_name in caps and print with title, pages and stock_quantity.
Select Concat(Upper(author_fname),' ', Upper(author_lname)) as author, title, pages, stock_quantity from books;

#28/09/2024
#Write a query to concat title and release year like that "title was release in release year" 
#the value of title and release year fetch from the books table.
Select Concat(title, ' was release in ', release_year) as titile_with_year from books;

#Write a query to print book title and length of each title
Select title, length(title) as length from books;


#29/09/2024
#short title, author name, quantity
Select concat(substring(title, 1, 10),'...') as 'short title',
concat(author_lname, ', ', author_fname) as author,
concat(stock_quantity,' in stock') as quantity
from books;

#Write a sql query to fetch unique title and author_last_name in ascending order.
Select distinct(title) as title, author_lname
from books
order by author_lname asc;


#30/09/2024
#Find the longest book from the books table. 
#(longest books means Highest number of pages
Select title, pages from books 
order by pages desc limit 1;

#Print the summary containing title, year, for the 3 most recent books
Select title, release_year from books
order by release_year desc limit 3;


#01/10/2024
#Find the 3 books with lowest stock
Select title, stock_quantity from books
order by stock_quantity asc limit 3;

#Print title, author_last_name, sorted first by author_last_name, and then by title
Select title, author_lname from books
order by author_lname, title;