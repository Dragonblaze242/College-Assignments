----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:10:28 03/11/2020 
-- Design Name: 
-- Module Name:    rightshift - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LEFT_SHIFT is
    Port ( clk,sin : in  STD_LOGIC;
           sout : out  STD_LOGIC);
end LEFT_SHIFT;

architecture Behavioral of LEFT_SHIFT is
signal s:STD_LOGIC_VECTOR(7 downto 0);
begin
process(clk)
begin
if(clk'event and clk='1') then
for i in 0 to 6 loop
sout<=s(0);
s(i)<=s(i+1);
end loop;
s(7)<=sin;
end if;
end process;
end Behavioral;

