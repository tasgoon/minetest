minetest.register_node("canvastest:test_block", {
        tiles = {"tutorial_decowood.png"},
        groups = {snappy=1,choppy=2,oddly_breakable_by_hand=2,flammable=3},
})

test = {}

function test.init()
    print("W00t.")
end

function test.draw()
    print("no.")
end

minetest.register_on_punchnode(
    function(pos, node, puncher, pointed_thing)
        if node.name == "canvastest:test_block" then
            minetest.create_canvas(test)
        end
    end
)



--minetest.create_canvas()
