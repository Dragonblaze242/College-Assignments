----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:57:39 03/05/2020 
-- Design Name: 
-- Module Name:    SHIFT_REGISTER - Behavioral 
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

entity SHIFT_REGISTER is
    Port ( si,clk : in  STD_LOGIC;
           so : out  STD_LOGIC);
end SHIFT_REGISTER;

architecture Behavioral of SHIFT_REGISTER is
signal temp: STD_LOGIC_VECTOR (7 downto 0);
signal i:STD_LOGIC;
begin
process(clk)
begin
if(clk'event and clk='1') then
for i in 0 to 6 loop
temp(i+1)<=temp(i);
end loop;
temp(0)<=si;
end if;
end process;
so<=temp(7);
end Behavioral;

