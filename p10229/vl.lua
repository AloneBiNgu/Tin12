local Matrix = {}
Matrix.__index = Matrix

function Matrix.New()
    local self = setmetatable({}, Matrix)
    self.Matrix = {}
    return self
end

function Matrix:Init()
    self.Matrix[1] = {1, 0}
    self.Matrix[2] = {1, 1}
end

function Matrix:Print()
    table.foreach(self.Matrix, print)
end

function 

local a = Matrix.New()
a:Init()
a:Print()