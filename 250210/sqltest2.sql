create database temp;
create table students(id int(5) auto_increment primary key, name char(10), age int(5), grade char(5));

insert into students values(1, 'Alice', 20, 'A');
insert into students values(2, 'Bob', 22, 'B');
insert into students values(3, 'Charlie', 21, 'A');
insert into students values(4, 'Dave', 23, 'C');


#1번
update students set age = 22 where name = 'Charlie';

select * from students;
#2번
select name, age from students where grade = 'A';
#3번
delete from students where name = 'Dave';

select * from students;
#4번
insert into students(name, age, grade) values('Eve', 24, 'B');

select * from students;
