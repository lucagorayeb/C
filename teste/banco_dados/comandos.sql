CREATE DATABASE IF NOT EXISTS banco_c;

USE banco_c;

CREATE TABLE IF NOT EXISTS usuarios(
id INT AUTO_INCREMENT PRIMARY KEY,
nome VARCHAR(100) NOT NULL UNIQUE,
idade INT NOT NULL
);

INSERT INTO usuarios (nome, idade)
VALUES
("Larissa Bento Nogueira", 20),
("Luca Siqueira Assis Gorayeb de Mello", 20);

