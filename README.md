# Lost Plane Finder
![Image of LPF](http://i.imgur.com/XkBY5gp.jpg)


The *Lost Plane Finder* is a small digispark based device that is attached to the balance lead of a LIPO or similar battery that can be used to recover downed RC aircraft. The Digispark both serves as a traditional RC voltage alarm to prevent overdischarge and as beacon that is automatically triggered to find crashed aircraft. When the Digispark detects several minutes of inactivity of battery voltage, it triggers a loud buzzer to help find the downed craft.

## Installation

The Lost Plane Finder can be built with just under two dollars in pieces. 

**You build one, you will need:**

| **Item**          | Cost (Source)     |
|-------------------|------------------------|
| Digispark         | 1.37 (AliExpress)      |
| 5v Buzzer         | .87 (x10, AliExpress)  |
| 2-4s JST-XH Balance Connector | 0.99 [Example](http://www.readymaderc.com/store/index.php?main_page=product_info&cPath=11_66_68&products_id=518) |

These will need to be wired up as seen in the diagram above. How to flash the Digispark can be found at [this site.](https://digistump.com/wiki/digispark/tutorials/connecting) If the alarm does not work for you, you may need to configure your *config.h* file as instructed.

## Usage

Attach to your balance plug right before takeoff. The alarm will trigger when either your battery is discharged to the point where you should land, or if the battery voltage has not changed in several minutes.

There is an untested 3D Printed Case also included if you'd like to try it out.

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## History
####Reddit Post History:
1. [Original Post](https://www.reddit.com/r/Multicopter/comments/3qucc0/diy_lost_plane_finder_low_voltage_buzzer_for_2/)
2. [Finished Prototype](https://www.reddit.com/r/Multicopter/comments/3r8gd6/diy_lost_plane_low_voltage_buzzer_for_2_ready_to/)

## Credits

Development and Testing by [Digaus](https://www.reddit.com/user/digaus).

Documentation by [Will Manidis](https://github.com/WillManidis)

## License

The MIT License (MIT)
