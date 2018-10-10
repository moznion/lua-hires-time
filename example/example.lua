local hires_time = require 'hires_time'

local epoch_micros, err = hires_time.get_epoch_micros()
if err ~= nil then
    print(err)
    os.exit(1)
end

print(string.format("%.0f", epoch_micros))

