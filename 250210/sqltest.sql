create database temp;
create table students(id int(5) auto_increment primary key,
name char(5),
age int(5)
);

insert into students(name, age) values('kim', 25);
insert into students(name, age) values('lee', 37);
insert into students(name, age) values('park', 26);
insert into students(name, age) values('choi', 35);
insert into students(name, age) values('jung', 34);

select count(*) from students;

select Max(age),min(age) from students;
