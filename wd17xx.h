struct wd17xx;

extern uint8_t wd17xx_read_data(struct wd17xx *fdc);
extern void wd17xx_write_data(struct wd17xx *fdc, uint8_t data);
extern uint8_t wd17xx_read_sector(struct wd17xx *fdc);
extern void wd17xx_write_sector(struct wd17xx *fdc, uint8_t data);
extern uint8_t wd17xx_read_track(struct wd17xx *fdc);
extern void wd17xx_write_track(struct wd17xx *fdc, uint8_t data);
extern void wd17xx_command(struct wd17xx *fdc, uint8_t val);
extern uint8_t wd17xx_status(struct wd17xx *fdc);
extern uint8_t wd17xx_status_noclear(struct wd17xx *fdc);
extern void wd17xx_set_drive(struct wd17xx *fdc, unsigned int drive);
extern void wd17xx_no_drive(struct wd17xx *fdc);
extern void wd17xx_set_side(struct wd17xx *fdc, unsigned int side);
extern struct wd17xx *wd17xx_create(unsigned type);
extern void wd17xx_free(struct wd17xx *fdc);
extern void wd17xx_detach(struct wd17xx *fdc, int dev);
extern int wd17xx_attach(struct wd17xx *fdc, int dev, const char *path, unsigned int sides, unsigned int tracks, unsigned int sectors, unsigned int secsize);
extern void wd17xx_trace(struct wd17xx *fdc, unsigned int onoff);
extern uint8_t wd17xx_intrq(struct wd17xx *fdc);
extern void wd17xx_set_sector0(struct wd17xx *fdc, unsigned drive, unsigned offset);
extern void wd17xx_set_side1(struct wd17xx *fdc, unsigned drive, unsigned offset);
extern void wd17xx_motor(struct wd17xx *fdc, unsigned on);
extern void wd17xx_tick(struct wd17xx *fdc, unsigned ms);
extern void wd17xx_set_motor_time(struct wd17xx *fdc, unsigned ms);
extern unsigned wd17xx_get_motor(struct wd17xx *fdc);
extern void wd17xx_set_density(struct wd17xx *fdc, unsigned den);
extern void wd17xx_set_media_density(struct wd17xx *fdc, unsigned drive, unsigned den);

#define DEN_ANY 0
#define DEN_SD	1
#define DEN_DD	2
#define DEN_HD	3
