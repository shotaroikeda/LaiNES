/*
 * Addresses Currently mapped in super mario
 */
#define m 0x0000	// Temp/various uses. Is used in vertical physics for gravity acceleration (value copied from 0x0709).
#define m 0x0001	// Player's animation
#define m 0x0002	// Temp/various. Something to do with player y (but it skips to 0 every x frames, even when you dont move)
#define m 0x0003	// Player's direction (and others).
// 1 - Right
// 2 - Left
#define m 0x0004	// How much to load
#define m 0x0005	// Something to do with player x (same as 0x0002)
#define m 0x0008	// Object Offset.
#define m 0x0009	// Frame Counter. Count number of Frames.
#define m 0x000A	// Button state AB (flags)
#define m 0x00 // - No Button
#define m 0x40 // - A
#define m 0x80 // - B
#define m 0xC0 // - Both
#define m 0x000B	// Vertical direction input state (flags);
#define m 0x00 // - No Button
#define m 0x40 // - Down
#define m 0x80 // - Up
#define m 0xC0 // - Both
#define m 0x000E	// Player's state
#define m 0x00 // - Leftmost of screen
#define m 0x01 // - Climbing vine
#define m 0x02 // - Entering reversed-L pipe
#define m 0x03 // - Going down a pipe
#define m 0x04 // - Autowalk
#define m 0x05 // - Autowalk
#define m 0x06 // - Player dies
#define m 0x07 // - Entering area
#define m 0x08 // - Normal
#define m 0x09 // - Cannot move
#define m 0x0B // - Dying
#define m 0x0C // - Palette cycling, can't move
// 0 - No
// 1 - Yes (not so much drawn as "active" or something)
#define ENEMY1_DRAWN 0x000F 
#define ENEMY2_DRAWN 0x0010
#define ENEMY3_DRAWN 0x0011
#define ENEMY4_DRAWN 0x0012
#define ENEMY5_DRAWN 0x0013

#define POWERUP_DRAWN 0x0014	// Powerup drawn? (Corresponds with hitbox at 0x04C4). If a powerup is on screen and a second one would appear, the first one disappears (completely). You can see this in 1.1, get the star and open the powerup at the top. Hitbox is shared.
// 0 - No
#define ENEMY1_TYPE 0x0016 // 1 - Yes, 0 - No
#define ENEMY2_TYPE 0x0017 // 1 - Yes, 0 - No
#define ENEMY3_TYPE 0x0018 // 1 - Yes, 0 - No
#define ENEMY4_TYPE 0x0019 // 1 - Yes, 0 - No
#define ENEMY5_TYPE 0x001A // 1 - Yes, 0 - No

///////////////////////
// Begin Enemy Types //
///////////////////////

#define GREEN_KOOPA 0x00 // - Green Koopa
#define RED_KOOPA 0x01 // - Red Koopa
#define BUZZY_BEETLE 0x02 // - Buzzy beetle
#define RED_KOOPA 0x03 // - Red Koopa
#define GREEN_KOOPA 0x04 // - Green Koopa
#define HAMMER_BROTHER 0x05 // - Hammer brother
#define GOOMBA 0x06 // - Goomba
#define BLOOPER 0x07 // - Blooper
#define BULLET_BILL_FRENZY 0x08 // - BulletBill FrenzyVar
#define GREEN_KOOPA_PARA 0x09 // - Green Koopa paratroopa
#define GREY_CHEEP_CHEEP 0x0A // - Grey CheepCheep
#define RED_CHEEP_CHEEP 0x0B // - Red CheepCheep
#define POBODOO 0x0C // - Pobodoo
#define PIRANHA_PLANT 0x0D // - Piranha Plant
#define GREEN_PARATROOPA_JUMP 0x0E // - Green Paratroopa Jump
#define m 0x0F // - Crashes game(status bar margin)
#define BOWSER_FLAME 0x10 // - Bowser's flame
#define LAKITU 0x11 // - Lakitu
#define SPINY_EGG 0x12 // - Spiny Egg
#define NOTHING 0x13 // - Nothing
#define FLY_CHEEP_CHEEP 0x14 // - Fly CheepCheep
#define BOWSERS_FLAME 0x15 // - Bowser's Flame
#define FIREWORKS 0x16 // - Fireworks
#define BULLETBILL_FRENZY 0x17 // - BulletBill Frenzy
#define STOP_FRENZY 0x18 // - Stop Frenzy
#define m 0x19 // - ?
#define FIREBAR 0x20
#define FIREBAR 0x21
#define FIREBAR 0x22
#define LONG_FIREBAR 0x21 // - Long Firebar (castle) AND sets previous enemy slot to 0x20 or else only half of the line shows
#define m 0x23 // - ?
#define STATIC_LIFT 0x24 // - Static lift
#define STATIC_LIFT 0x25 // - Static lift
#define m 0x26 // - Vertical going lift
#define m 0x27 // - Vertical going lift
#define m 0x28 // - Horizontal going lift
#define m 0x29 // - Static lift (Will Fall if Player stays on it for too long)
#define m 0x2A // - Horizontal forward moving lift with strange hitbox
#define m 0x2B // - Halves of double lift (like 1.2)
#define m 0x2C // - Halves of double lift (like 1.2)
#define m 0x2D // - Bowser (special), will try to set previous addr to 2D as well, if unable only his ass shows :) He also tries to reach a certain height, if not there already, before starting his routine.
#define m 0x2E // - PowerUp Object
#define m 0x2F // - Vine Object
#define m 0x30 // - Flagpole Flag Object
#define m 0x31 // - StarFlag Object
#define m 0x32 // - Jump spring Object
#define m 0x33 // - BulletBill CannonVar
#define m 0x34 // - Warpzone
#define m 0x35 // - Retainer Object
#define m 0x36 // - Crash
#define m 0x37 // - 2 Little Goomba.
#define m 0x38 // - 3 Little Goomba.
#define m 0x3A // - Skewed goomba.
#define m 0x3B // - 2 Koopa Troopa.
#define m 0x3C // - 3 Koopa Troopa.

/////////////////////
// End Enemy Types //
/////////////////////

#define m 0x001B	// Powerup on screen
#define m 0x00 // - No
#define m 0x2E // - Yes
#define m 0x001D	// Player "float" state
#define m 0x00 // - Standing on solid/else
#define m 0x01 // - Airborn by jumping
#define m 0x02 // - Airborn by walking of a ledge
#define m 0x03 // - Sliding down flagpole
#define m 0x001E // - Enemy state? Haven't tested much.
#define m 0x0023 // - Enemy state? Haven't tested much.
#define m 0x00 // - Does _not_ mean they don't exist
#define m 0x01 // - falling_enemy or Bullet_Bill drawn(not killed yet).
#define m 0x04 // - Enemy Stomped
#define m 0x20 // - BulletBill / CheepCheep / hammer_bro stomped
#define m 0x22 // - killed with fire or star
#define m 0x23 // - bowser_killed
#define m 0xC4 // - koopa stomped falling
#define m 0x84 // - koopa or buzzyBeetle Stomped and moving;
#define m 0xFF // - Will kill them off (like getting hit by a star)
#define m 0x0023	// Powerup state/heading (there's probably another register to check)
// 0x02-0x06 - 'question block' hit sequence
// 0x07-0x11 - Powerup emerging sequence
#define m 0xC0 // - When shroom airborn going right
#define m 0xC2 // - When shroom airborn going left
#define m 0x80 // - When powerup moving right (or not moving at all)
#define m 0x82 // - When powerup moving left
#define m 0x0024 // 5	Fireball drawn (corresponds with hitbox coordinates 0x04C8/C) when not 0

#define HAMMER1 0x002A // -0x0032	Hammers (correspond with last 9 hitbox coordaintes, 0x04D0-0x04F3), when not 0
#define HAMMER2 0x002B 
#define HAMMER3 0x002C 
#define HAMMER4 0x002D 
#define HAMMER5 0x002e 
#define HAMMER6 0x002f 
#define HAMMER7 0x0030
#define HAMMER8 0x0031
#define HAMMER9 0x0032

#define m 0x0030 // /2	Coins (corresponds with last three coordinates, 0x04E0, 0x04EC, 0x04F0), when not 0
#define m 0x0033	// Player facing Direction.
// 0 - Not on screen
// 1 - Right
// 2 - Left
#define POWERUP_TYPE 0x0039	// Powerup type (when on screen)
// 0 - Mushroom
// 1 - Flower
// 2 - Star
// 3 - 1up

#define PLAYER_MOVING_DIRECTION 0x0045	// Player Moving Direction.
// 1 - Right
// 2 - Left

#define ENEMY1_MOVING_DIRECTION 0x0046	// Enemy heading
#define ENEMY2_MOVING_DIRECTION 0x0047	// Enemy heading
#define ENEMY3_MOVING_DIRECTION 0x0048	// Enemy heading
#define ENEMY4_MOVING_DIRECTION 0x0049	// Enemy heading
#define ENEMY5_MOVING_DIRECTION 0x004A	// Enemy heading
// 1 - Right
// 2 - Left

#define m 0x004B	// Shroom heading
// 1 - Right
// 2 - Left

#define PLAYER_HORIZONTAL_SPEED 0x0057	// Player horizontal speed
// 0xD8<0 - Moving left
// 0x00 - Not moving
// 0<0x28 - Moving right
#define ENEMY1_VERTICAL_SPEED 0x0058// /C	Enemy vertical speed
// 0xD8<0 - Moving left
// 0x00 - Not moving
// 0<0x28 - Moving right
#define PLAYER_X_POSITION 0x006D	// Player horizontal position in level
#define ENEMY1_X_POSITION 0x006E
#define ENEMY2_X_POSITION 0x006F
#define ENEMY3_X_POSITION 0x0070
#define ENEMY4_X_POSITION 0x0071
#define ENEMY5_X_POSITION 0x0072

#define PLAYER_SCREEN_X_POSITION 0x0086	// Player x position on screen
#define ENEMY1_SCREEN_X_POSITION 0x0087 // - Enemy x position on screen
#define ENEMY2_SCREEN_X_POSITION 0x0088 // - Enemy x position on screen
#define ENEMY3_SCREEN_X_POSITION 0x0089 // - Enemy x position on screen
#define ENEMY4_SCREEN_X_POSITION 0x008A // - Enemy x position on screen
#define ENEMY5_SCREEN_X_POSITION 0x008B // - Enemy x position on screen

#define POWERUP_SCREEN_X_POSITION 0x008C	// Powerup x position on screen
#define FIREBALL_X_POSITION 0x008D	// Fireball X-Position.
#define FIREBALL_Y_POSITION 0x00D5	// Fireball Y-Position

0x008F-0x0091	Brick smash 1 y
#define BRICK_SMASH_1_Y 0x008F // Brick smash 1 y
#define BRICK_SMASH_1_Y 0x0090 // Brick smash 1 y
#define BRICK_SMASH_1_Y 0x0091 // Brick smash 1 y

#define BRICK_SMASH_2_Y 0x0090 // Brick smash 2 y
#define BRICK_SMASH_2_Y 0x0091 // Brick smash 2 y
#define BRICK_SMASH_2_Y 0x0092 // Brick smash 2 y

#define m 0x009F	// Player vertical velocity in whole pixels (signed byte), see 0x0433 for fractional
// Upward: FB = normal jump
// Downward: 05 = fastest fall
#define m 0x00A0 // Enemy vertical velocity
#define m 0x00A1 // Enemy vertical velocity
#define m 0x00A2 // Enemy vertical velocity
#define m 0x00A3 // Enemy vertical velocity
#define m 0x00A4 // Enemy vertical velocity
// Upward - 0xFB ~ 0xFF (FB = fastest)
// Downward - 0x01 ~ 0x04 (04 = fastest)
#define m 0x00A2	// Timers for the fireballlines (castles). I guess their position can be determined from this. Runs 0-0x1F for one circle (slow?)
#define m 0x00A3 // Timers for the fireballlines (castles). I guess their position can be determined from this. Runs 0-0x1F for one circle (slow?)

#define PLAYER_VIEWPORT_SCREEN_POSITION 0x00B5	// Player vertical screen position
// viewport = 1
// above viewport = 0
// anywhere below viewport is >1
// (when falling down a pit this will increase up to 5)

#define ENEMY1_VIEWPORT_SCREEN_POSITION 0x00B6 // Enemy vertical screen position (same as player)
#define ENEMY2_VIEWPORT_SCREEN_POSITION 0x00B7 // Enemy vertical screen position (same as player)
#define ENEMY3_VIEWPORT_SCREEN_POSITION 0x00B8 // Enemy vertical screen position (same as player)
#define ENEMY4_VIEWPORT_SCREEN_POSITION 0x00B9 // Enemy vertical screen position (same as player)
#define ENEMY5_VIEWPORT_SCREEN_POSITION 0x00BA // Enemy vertical screen position (same as player)
// viewport = 1
// above viewport = 0
// anywhere below viewport is >1
// (when falling down a pit this will increase up to 5)

#define m 0x00BB	// Powerup vertical screen position (same as player)
// viewport = 1
// above viewport = 0
// anywhere below viewport is >1
// (when falling down a pit this will increase up to 5)
0x00CE	Player y pos on screen (multiply with value at 0x00B5 to get level y pos)
0x00CF-0x00D3	Enemy y pos on screen (multiply with value at 0x00B6/A to get level y pos)
0x00D4	Powerup sprite y (multiply with value at 0x00BB to get level y pos)

0x00D79	Brick smash 1 x
0x00D8/A	Brick smash 2 x
0x00E4/6	Y of air bubbles when under water :p I think their x is equal to the player, not sure.

#define m 0x00A6	// Fireball_Y_Speed
#define m 0x00A7	// Fireball 2 y
#define m 0x00D6	// Vertical 1 vert speed
#define m 0x00D7	// Fireball 2 vert speed
#define m 0x00E7	// Level layout address
#define m 0x00E9	// Enemy layout address
#define m 0x00FA	// "Pause" Effect Register
#define m 0x00FB	// Area Music Register
#define m 0x00FC	// Event Music Register
#define m 0x00FD	// Sound Effect Register 1 (brick shatter, Bowser flame, others?)
#define m 0x00FE	// Sound Effect Register 2 (coin collect, powerup/vine emerge, powering-up, 1-Up, bullet blase, Bowser's plummet, others)
#define m 0x00FF	// Sound Effect Register 3 (jumping, bumping head, stomping, kicking, others)
#define m 0x0110// /5	Score tiles (the floating numbers when you get points, this tells which number should be shown, it's a palette, surprise surprise...)
#define m 0x0117// /B	Score x
0x011E-0x0122	Score y
#define m 0x03AD	// Player x pos within current screen offset
0x03AE-0x03B2	Enemy x pos within current screen offset
#define m 0x03B3	// Powerup x pos within current screen offset
#define m 0x03B8	// Player y pos within current screen (vertical screens always offset at 0?)
0x03B9/D	Enemy y pos within current screen (vertical screens always offset at 0?)
#define m 0x03BE	// Powerup y pos within current screen (vertical screens always offset at 0?)
#define m 0x03AF	// Fireball Relative X-Position.
#define m 0x03BA	// Fireball Relative Y-Position.
#define m 0x03C4	// Player palette, cycles when you have a star (not when you become fiery though, even though that uses the exact same cycles)
#define m 0x0400	// Player Object X-MoveForce.
#define m 0x0416	// Player Object YMF_Dummy.
0x0417/B	Enemy YMF_Dummy.
#define m 0x0433	// Player vertical fractional velocity. This is not accounted for when clamping to max fall velocity etc.
#define m 0x043A	// Fireball stuff?
#define m 0x043B	// Fireball stuff?
#define m 0x0450	// Player max velocity to the left. Values taken from
#define m 0xE4// : max walking vel
#define m 0xD8// : max running vel (changes to this when pressing B+L)
#define m 0x0456	// Player max velocity to the right
#define m 0x1C // - max walking vel
#define m 0x30 // - max running vel (changes to this when pressing B+R)
#define m 0x0490	// Player Collision_Bits,if you collided with Any Block / Object / Brick , Then Value will change to 0xFE otherwise it will stay 0xFF.
#define m 0x0491	// Enemy Collision_Bits, Value is set to 0x01 whenever player gets collided with enemy otherwise it stays 0x00.

#define PLAYER_HITBOX_X1 0x04AC	// Player hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define PLAYER_HITBOX_Y1 0x04AD	// Player hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define PLAYER_HITBOX_X2 0x04AE	// Player hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define PLAYER_HITBOX_Y2 0x04AF	// Player hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)

#define ENEMY1_HITBOX_X1 0x04B0	// Enemy hitboxes (5x4 bytes, <<x1,y1> <x2,y2>>)
#define ENEMY1_HITBOX_Y1 0x04B1	
#define ENEMY1_HITBOX_X2 0x04B2	
#define ENEMY1_HITBOX_Y2 0x04B3	
#define ENEMY2_HITBOX_X1 0x04B4	// Enemy hitboxes (5x4 bytes, <<x1,y1> <x2,y2>>)
#define ENEMY2_HITBOX_Y1 0x04B5	
#define ENEMY2_HITBOX_X2 0x04B6	
#define ENEMY2_HITBOX_Y2 0x04B7	
#define ENEMY3_HITBOX_X1 0x04B8	// Enemy hitboxes (5x4 bytes, <<x1,y1> <x2,y2>>)
#define ENEMY3_HITBOX_Y1 0x04B9	
#define ENEMY3_HITBOX_X2 0x04BA	
#define ENEMY3_HITBOX_Y2 0x04BB	
#define ENEMY4_HITBOX_X1 0x04BC	// Enemy hitboxes (5x4 bytes, <<x1,y1> <x2,y2>>)
#define ENEMY4_HITBOX_Y1 0x04BD	
#define ENEMY4_HITBOX_X2 0x04BE	
#define ENEMY4_HITBOX_Y2 0x04BF	
#define ENEMY5_HITBOX_X1 0x04C0	// Enemy hitboxes (5x4 bytes, <<x1,y1> <x2,y2>>)
#define ENEMY5_HITBOX_Y1 0x04C1	
#define ENEMY5_HITBOX_X2 0x04C2	
#define ENEMY5_HITBOX_Y2 0x04C3	

#define POWERUP_HITBOX_X1 0x04C4	// Powerup hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define POWERUP_HITBOX_Y1 0x04C5	// Powerup hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define POWERUP_HITBOX_X2 0x04C6	// Powerup hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)
#define POWERUP_HITBOX_Y2 0x04C7	// Powerup hitbox (1x4 bytes, <<x1,y1> <x2,y2>>)

#define FIREBALL_HITBOX_X1 0x04C8	// (Fiery) fireball hitbox (2x4 bytes, <<x1,y1> <x2,y2>>)
#define FIREBALL_HITBOX_Y1 0x04C9	// (Fiery) fireball hitbox (2x4 bytes, <<x1,y1> <x2,y2>>)
#define FIREBALL_HITBOX_X2 0x04D0	// (Fiery) fireball hitbox (2x4 bytes, <<x1,y1> <x2,y2>>)
#define FIREBALL_HITBOX_Y2 0x04D1	// (Fiery) fireball hitbox (2x4 bytes, <<x1,y1> <x2,y2>>)

#define HAMMER 0x04D0	// Hammer hitbox (9x4 bytes, <<x1,y1> <x2,y2>>) (like from bowser, hammerbros)
#define m 0x04E0	// Coin hitboxes (3x4 bytes, <<x1,y1> <x2,y2>>) (used for coins from questionmarks and when getting coins above bricks by hitting the brick)

	/*
0x0500-0x069F	Current tile (Does not effect graphics)

0x06CE	Fireball counter (increments as you fire). First bit probably used to toggle between hitbox indices
0x06D4	Cycle counter of gold coin in top of screen and image of questionmark blocks
0x06D5	PlayerGfx_Offset , Player sprite Mario state (didn't check them myself)
0xB8 - small stand
[0x60, 0x70, 0x80] - small walk cycle
0xC8 - big stand
0x20 - big jump
[0x00, 0x10, 0x20] - bigwalk cycle
0x50 - crouch
0x06D6	Warpzone Control. Game Checks value from here and decides which warpzone to load.
0x06D9	MultiLoop Correct Control.
0x06DE	ChangeArea Timer.
0x06FC	Player 1 input (regular flag pattern), select and start are reset after 1 frame. See 0x074A for more accurate input.
0x06FD	Player 2 input (regular flag pattern), select and start are reset after 1 frame. See 0x074B for more accurate input.
0x0700	Player X-Speed Absolute ,Player speed in _either_ direction (0 - 0x28)
0x0701	Friction Adder High ,Is breaking when 1 (freeze this and you immediately stand still when you stop moving)
0x0702	Walk animation (didn't check values)
0xE4 - is running
0x30 - skidding
98 - normal
Also some other values when starting to run or when turning around
0x0704	Swimming Flag ,Set to 0 to swim
0x0705	Player X-MoveForce, runs when you press left or right
0x0709	Current gravity which will be applied to the player sprite (see 0x0000, 0x0433 and Notes page).
Based on the current horizontal velocity, this takes on different values:
0x30 in a jump when still or walking slowly.
0x2D in a jump when walking at full speed.
0x38 in a jump when running at full speed.
If player is falling, takes values from 0x070A.
0x070A	Current fall gravity (not sure how this is decided). This value is decided, then copied to 0x0709 IF Mario is falling (0x009F positive).
Based on the current horizontal velocity, this takes on different values:
0xA8 for falling when still or walking slowly.
0x90 for falling when walking at full speed.
0xD0 for falling when running at full speed.
0x070B	When not 0, runs big-small animation (but does not affect anything internally)
0x070C	Player walk animation delay, in game frames (1/60 s). 0x05=slow walk, 0x03=full walk speed, 0x02=fastest/running speed
0x070D	Player walk animation current frame index (0,1,2,0,etc)
0x0714	0x04 when ducking as big mario, 0 otherwise (also when ducking as small). Keeps being 4 when you slide of an edge while ducking (so does not affect image, but does when set to 4 and being small...). When this register is frozen, you can move like normal, you're just ducking while doing so.
0x071A	Current screen (in level)
0x071B	Next screen (in level)
0x071C	ScreenEdge X-Position, loads next screen when player past it?
0x071D	Player x position, moves screen position forward when this moves
0x071E	Column Sets . Counts back, done when this is FF. you can see the level being built in memory up as this counter progresses, one frame at a time.
0x071F	AreaParser TaskNumber, runs from 4 to 0.
0x0722	Player HitDetect Flag. Determines whether allow Player to Pass through from Bricks or not. (Settting it to 0xFF will cause Player to Penetrate through Walls/Bricks)
0x0723	Scroll Lock, 1 = Prevent screen from scrolling right, i.e. Bowser, warp zone, etc. 0 = Allow scroll.
0x072C	Current level layout index
0x072F	Last value of 0x072C
0x0733	Replaces trees and Mushroom platforms
0 - All Mushroom platforms replaced with trees
1 - All trees replaced with Mushroom platforms, overwrites first BG palette line
2 - All trees and Mushroom platforms replaced Bill Blasters
3 - All trees and Mushroom platforms removed
4 - All trees and Mushroom platforms removed, causes invisible floors and ceilings to appear
5+ - Crash
0x0739	Current enemy layout index
0x0743	When true, new groundtiles and blocktiles will be loaded as clouds (coinblocks and questionmark blocks remain the same!)
0x0744	Something with background palette
0x0747	Timer Control.
0x074A	Buttons pressed player 1 (keeps updated, even while paused or whatever, the other register resets the start and select immediately)
0x074B	Buttons pressed player 2 (keeps updated, even while paused or whatever, the other register resets the start and select immediately)
0x074E	"Gold" block pallette - 00 turns blocks into water world and makes bubble, but no swimming
0x0750	Area Offset- Check this page for full list of value results.
0x0752	If not 0 will crash game when level loads
0x0753	Affects mario/luigi before level load, disables movement when not 0 after level load
0x0754	Player's state. This also affects hitting stuff. Decreases when you eat a mushroom! Increases when you get hit.
0 - Big
1 - Small
2 - When set to two, you can't hit blocks but you can stand on them... (no idea where this is used)
5 - Makes you small (even when your state is big or even fiery, in fiery case you become a small fiery)
0x0755	Player_Position For Scroll. It moves up to 0x70 (sometimes even 0x72) when player moves. When this register is frozen, NOTHING changes in the level, not even internally.
0x0756	Powerup state
0 - Small
1 - Big
>2 - fiery
0x075E	Set to 1 during "prelevel" screen
0x075F	World
0x0760	Level
0x0770	Game mode. Setting this will take affect immediately. You can skip a WORLD by setting it to 02 (and waiting a second or two). Crashes when set to >02 or when set to 02 in world 8. You can activate the demo at _any_ time. Set to 01 at the title screen and you start the game with the title screen showing.
00 - Start demo
01 - Start normal
02 - End current world
03 - End game (dead).
0x0772	Level loading setting. You can set this while playing.
- 00 - Restarts level - 01 - Right before the start of a level - 02 - Has an effect but unsure what (skip frame or input?) - 03 - Reset level. When in a level when doing this midlevel, this sometimes teleports you to a bonuslevel. exiting that bonuslevel enters another bonuslevel (as if you were exiting a pipe though), and exiting that level enters the normal world again.

0x0773	Level palette
00 - Normal
01 - Underwater
02 - Night
03 - Underground
04 - Castle
0x0774	Disable ScreenFlag.
0x0775	Scroll Amount
0x0776	Game Pause Status.
0x0777	GamePauseTimer, when (un)pausing, you can only re/unpause when this is zero
0x0778	Mirror_PPU CTRL_REG1 Affects blocks and level, lowest bit seems to toggle loaded screen..? also affects sprite palletes of objects
0x0779	Mirror_PPU CTRL_REG2 Affects colors.. most values crash. It is the value written to the PPU at 0x2001. See this page for details.
1E - Default
1F - Makes it grey scale
3E - Intensify red colors
5E - Intensify green colors
9E - Intensify blue colors
0x077A	Number_Of_Players ,If true, will load luigi when mario dies. You have to unset 0753 to move with luigi though
0x077F	Interval Timer Control. runs from 20 to 0 (Also Called 21 FrameRule) From This timer Game Checks for level Completion After every 21 Frames.
0x0780-0x07A2	All kinds of timers. Should investigate more to see what timer does what. Some are explained below
0x0781	Player Animation Timer
0x0782	JumpSwim Timer
0x0783	Running Timer
0x0784	BlockBounce Timer
0x0785	SideCollision Timer
0x0786	Jumpspring Timer
0x0787	GameTimer Control Timer (Setting it to 0x02 will Freeze Game Time)
0x0789	ClimbSide Timer
0x078A	EnemyFrame Timer
0x078F	FrenzyEnemy Timer
0x0790	BowserFireBreath Timer
0x0791	Stomp Timer
0x0792	AirBubble Timer
0x0795	Timer: falling down a pit (and more...)
0x079E	Timer: invincible after enemy collision. Freeze this register to anything but 0 and you remain invincible
0x079F	Timer: star (when you have star)
0x07A0	Timer: "prelevel" screen timer, fired again when level starts
0x07A2	Timer: demo start
0x07B1	EventMusic Buffer , If true, you wont "die" after falling or getting hit while small. You will be unable to move at the bottom of the screen though until you set it to 00
0x07D7/C	High score (1000000 100000 10000 1000 100 10) in BCD Format.
0x07D3/8	Luigi score (1000000 100000 10000 1000 100 10) in BCD Format.
0x07ED/E	Coins (10 1) (on screen only)
0x07F8/A	Digits of Game Timer (0100 0000 0000) in BCD Format.
0x07FC	Game difficulty (set when you beat the game)
	*/

0x07DD-0x07E2	Mario score (1000000 100000 10000 1000 100 10) in BCD Format.
0x075A	Lives
0x075E	Coins
