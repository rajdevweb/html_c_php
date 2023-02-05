-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3307
-- Generation Time: Nov 10, 2022 at 07:41 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bojii`
--

-- --------------------------------------------------------

--
-- Table structure for table `uemployee`
--

CREATE TABLE `uemployee` (
  `Employee_id` int(11) NOT NULL,
  `First_name` varchar(50) DEFAULT NULL,
  `Last_name` varchar(50) DEFAULT NULL,
  `Salary` int(11) DEFAULT NULL,
  `Joining_date` datetime DEFAULT NULL,
  `Department` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `uemployee`
--

INSERT INTO `uemployee` (`Employee_id`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', 1000000, '2001-01-13 12:00:00', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-13 12:00:00', 'Insurance'),
(3, 'Roy', 'Thomes', 700000, '2013-02-13 12:00:00', 'Insurance'),
(4, 'Tome', 'Jose', 600000, '2013-02-13 12:00:00', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-13 12:00:00', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '2013-02-13 12:00:00', 'Serives'),
(7, 'Philip', '123', 650000, '2013-02-13 12:00:00', 'Serives'),
(8, 'TestName', 'Lname%', 650000, '2013-02-13 12:00:00', 'Serives');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `uemployee`
--
ALTER TABLE `uemployee`
  ADD PRIMARY KEY (`Employee_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `uemployee`
--
ALTER TABLE `uemployee`
  MODIFY `Employee_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
