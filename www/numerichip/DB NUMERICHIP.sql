CREATE TABLE IF NOT EXISTS `accessoires` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `title` text NOT NULL,
  `descrip` text NOT NULL,
  `price` text NOT NULL,
  `img` varchar(200) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

CREATE TABLE IF NOT EXISTS `phone` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `idl` int(11) NOT NULL,
  `modele` text NOT NULL,
  `phone` int(11) NOT NULL,
  `title` text NOT NULL,
  `price` text NOT NULL,
  `img` varchar(200) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=12 ;

INSERT INTO `phone` (`id`, `idl`, `modele`, `phone`, `title`, `price`, `img`) VALUES
(1, 1, 'Galaxy S 6', 2, '', '', ''),
(2, 2, 'Galaxy S 5', 2, '', '', ''),
(3, 0, 'Iphone 6S / 6S Plus', 1, '', '', ''),
(4, 0, 'Iphone 6 / 6 Plus', 1, '', '', ''),
(5, 0, 'Galaxy Grand', 2, '', '', ''),
(6, 0, 'Iphone 5 / 5S', 1, '', '', ''),
(7, 0, 'Galaxy Note 3', 2, '', '', ''),
(8, 0, 'Galaxy Note 4', 2, '', '', ''),
(9, 0, 'Iphone 4 /4S', 1, '', '', ''),
(10, 1, '', 3, 'ecran tactile', '&minus; 35 &euro;', '../images/bulle1.png'),
(11, 2, '', 3, 'Ecran LCD', '&minus; 120 &euro;', '../images/bulle2.png');
