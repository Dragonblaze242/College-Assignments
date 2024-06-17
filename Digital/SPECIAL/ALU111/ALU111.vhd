----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:46:28 03/12/2020 
-- Design Name: 
-- Module Name:    ALU111 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU111 is
    Port ( a,b : in  STD_LOGIC_VECTOR (7 downto 0);
           sel : in  STD_LOGIC_VECTOR (3 downto 0);
           y : out  STD_LOGIC_VECTOR (7 downto 0);
           cin : in  STD_LOGIC);
end ALU111;

architecture Behavioral of ALU111 is




signal arith :STD_LOGIC_VECTOR (7 downto 0);
signal logic :STD_LOGIC_VECTOR (7 downto 0);
begin
with sel(2 downto 0) select
arith<=a when "000",
		a+1 when "001",
		a-1 when "010",
		b when "011",
		b+1 when "100",
		b-1 when "101",
		a+b when "110",
		a+b+cin when "111";
with sel(2 downto 0) select
logic<=not a when "000",
		not b when "001",
		a and b when "010",
		a or b when "011",
		a nand b  when "100",
		a nor b when "101",
		a xor b when "110",
		a xnor b when "111";

with sel(3) select
y<=logic when '1',
   arith when '0';
end Behavioral;

