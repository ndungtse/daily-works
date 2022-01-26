-- módulo de túnel y cinematicas para PES 2020 : Jostike Games
-- solo sider 6.1 



local fileroot = ".\\content\\tunnel"

local function make_key(ctx, filename)
    if ctx.stadium == 21 then
	if ctx.timeofday == 0 then     
        tunnel = "Stadium\\Anfield Ex"
        else
        tunnel = "Stadium\\Anfield"
        end
elseif ctx.stadium == 61 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Santiago_de_chile Ex"
        else
        tunnel = "Stadium\\Santiago_de_chile"
        end    
elseif ctx.stadium == 51 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Signal Iduna Park Ex"
        else
        tunnel = "Stadium\\Signal Iduna Park"
        end	
elseif ctx.stadium == 63 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Veltis Arena Ex"
        end		
elseif ctx.stadium == 24 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Maracana Ex"
        end			
elseif ctx.stadium == 7 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Old Trafford Ex"        
		end			
elseif ctx.stadium == 19 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\libertadores_De_america"
        else
        tunnel = "Stadium\\libertadores_De_america"        
		end				
elseif ctx.stadium == 05 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Etihad Ex"
        else
        tunnel = "Stadium\\Etihad"        
		end				
elseif ctx.stadium == 22 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Juventus Ex"       
		end			
elseif ctx.stadium == 11 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Allianz arena Ex"       
		end	
elseif ctx.stadium == 04 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Santiago Bernabeu Ex"       
        else
        tunnel = "Stadium\\Santiago Bernabeu"
        end				
elseif ctx.stadium == 27 then	  
    if ctx.timeofday == 0 then    
		tunnel = "Stadium\\Monumental Ex"       
		else
		tunnel = "Stadium\\Monumental Ex" 
		end		
elseif ctx.stadium == 28 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Bombonera Ex"       
		end		
elseif ctx.stadium == 1 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Giuseppe Meazza Ex"       
		else
        tunnel = "Stadium\\Giuseppe Meazza"
        end								
elseif ctx.stadium == 8 then
        tunnel = "Stadium\\Da Luz"
elseif ctx.stadium == 52 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Emirates Ex"       
		end			
elseif ctx.stadium == 86 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Monumental U Ex"       
		else
        tunnel = "Stadium\\Monumental U"
        end									
elseif ctx.stadium == 94 then
	if ctx.timeofday == 0 then  
        tunnel = "Stadium\\Tottenham Hotspur Ex"	
        end	
	else
        tunnel = nil
    end
    if tunnel ~= nil then
        return string.format("%s:%s", tunnel, filename)
    end
end

local function get_filepath(ctx, filename, key)
    if key and tunnel ~= nil then
        return string.format("%s\\%s\\%s", fileroot, tunnel, filename)
    end
end

function make_log(ctx)
    if tunnel ~= ni then
       logResult = tunnel
       logResult = string.gsub(logResult, "Stadium\\", "")
       log("-------- " .. logResult)
    end
end

local function init(ctx)
    if fileroot:sub(1,1)=='.' then
        fileroot = ctx.sider_dir .. fileroot
    end
    ctx.register("trophy_rewrite", make_log)
    ctx.register("livecpk_make_key", make_key)
    ctx.register("livecpk_get_filepath", get_filepath)
end

return { init = init }