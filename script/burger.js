//Global classnames from Box2d namespace
var b2Vec2 = Box2D.Common.Math.b2Vec2
    , b2AABB = Box2D.Collision.b2AABB
    , b2BodyDef = Box2D.Dynamics.b2BodyDef
    , b2Body = Box2D.Dynamics.b2Body
    , b2FixtureDef = Box2D.Dynamics.b2FixtureDef
    , b2Fixture = Box2D.Dynamics.b2Fixture
    , b2World = Box2D.Dynamics.b2World
    , b2MassData = Box2D.Collision.Shapes.b2MassData
    , b2PolygonShape = Box2D.Collision.Shapes.b2PolygonShape
    , b2CircleShape = Box2D.Collision.Shapes.b2CircleShape
    , b2DebugDraw = Box2D.Dynamics.b2DebugDraw
    , b2Shape = Box2D.Collision.Shapes.b2Shape
    , b2Joint = Box2D.Dynamics.Joints.b2Joint
    , b2Settings = Box2D.Common.b2Settings
    ;
 
var world;
var ctx;
var canvas_width;
var canvas_height;
var img;
var slices = [];
 
//box2d to canvas scale , therefor 1 metre of box2d = 100px of canvas :)
var scale = 100;
 
/*
    Draw a world
    this method is called in a loop to redraw the world
*/  
function draw_world(world, context) 
{
    //first clear the canvas
    ctx.clearRect( 0 , 0 , canvas_width, canvas_height );
     
    ctx.fillStyle = '#000000';
    ctx.fillRect(0,0, canvas_width, canvas_height);
         
    //convert the canvas coordinate directions to cartesian
    ctx.save();
    ctx.translate(0 , canvas_height);
    ctx.scale(-1 , -1);
    for(i=0; i<6; i++){
		let p = slices[i].GetPosition();
		let a = slices[i].GetAngle()+Math.PI;
		let w = img.width/2;
		let h = img.height/3;
		
		ctx.translate(-p.x*scale, p.y*scale);
		ctx.rotate(a);
		ctx.drawImage(img, Math.floor(i/3)*w, i%3*h, w, h, -w/2, -h/2, w, h);
		ctx.rotate(-a);
		ctx.translate(p.x*scale, -p.y*scale);
	}
	
	ctx.restore();
}
 
//Create box2d world object
function createWorld() 
{
    //Gravity vector x, y - 10 m/s2 - thats earth!!
    var gravity = new b2Vec2(0, -10);
     
    world = new b2World(gravity , true );        
    ground = createBox(world, 4, -0.3, 4 , 0.5, {type : b2Body.b2_staticBody});
     
    return world;
}
 
//Create some elements
function createBurger() {
    for(i=0; i<6; i++)
		slices[i] = createBox(world, Math.random()/6+2, (6-i)*3, 1, 0.15);
}
 
//Create standard boxes of given height , width at x,y
function createBox(world, x, y, width, height, options) 
{
     //default setting
	options = Object.assign({
        'density' : 1.0 ,
        'friction' : 1.0 ,
        'restitution' : 0.5 ,
         
        'linearDamping' : 0.0 ,
        'angularDamping' : 0.0 ,
         
        'type' : b2Body.b2_dynamicBody
    }, options);
       
    var body_def = new b2BodyDef();
    var fix_def = new b2FixtureDef();
     
    fix_def.density = options.density;
    fix_def.friction = options.friction;
    fix_def.restitution = options.restitution;
     
    fix_def.shape = new b2PolygonShape();
         
    fix_def.shape.SetAsBox( width , height );
     
    body_def.position.Set(x , y);
     
    body_def.linearDamping = options.linearDamping;
    body_def.angularDamping = options.angularDamping;
     
    body_def.type = options.type;
    body_def.userData = options.user_data;
     
    var b = world.CreateBody( body_def );
    var f = b.CreateFixture(fix_def);
     
    return b;
}
 
/*
    This method will draw the world again and again
    called by settimeout , self looped
*/
function step() 
{
    var fps = 60;
    var timeStep = 1.0/fps;
     
    //move the world ahead , step ahead man!!
    world.Step(timeStep , 8 , 3);
    world.ClearForces();
     
    draw_world(world, ctx);
}
 
// main entry point
var canvas = document.getElementById('burger');
ctx = canvas.getContext('2d');
img = document.getElementById('img');

//first create the world
world = createWorld();

//get internal dimensions of the canvas
canvas_width = canvas.width;
canvas_height = canvas.height;

//create the burger boxes in the world
createBurger();

window.setInterval(step, 1000 / 60);