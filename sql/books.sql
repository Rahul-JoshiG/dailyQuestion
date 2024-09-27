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

