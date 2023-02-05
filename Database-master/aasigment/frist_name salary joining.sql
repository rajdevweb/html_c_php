-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3307
-- Generation Time: Nov 11, 2022 at 06:10 AM
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

INSERT INTO `uemployee` (`First_name`, `Joining_date`, `salary`) VALUES
('John', '2001-01-13 12:00:00', 1000000),
('Michael', '2013-01-13 12:00:00', 800000),
('Roy', '2013-02-13 12:00:00', 700000),
('Tome', '2013-02-13 12:00:00', 600000),
('Jerry', '2013-02-13 12:00:00', 650000),
('Philip', '2013-02-13 12:00:00', 750000),
('Philip', '2013-02-13 12:00:00', 650000),
('TestName', '2013-02-13 12:00:00', 650000);

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
