local hires_time = require 'hires_time'
print ('VERSION: ' .. hires_time._VERSION)

local epoch_micros, err = hires_time.get_epoch_micros()
assert(epoch_micros ~= nil and type(epoch_micros) == 'number', 'epoch_micros must be number, not nil')
assert(err == nil, 'err must be nil')

print 'OK'

