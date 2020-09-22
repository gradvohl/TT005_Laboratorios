#include <stdio.h>
#include <openacc.h>

int main(void) {
  acc_device_t devtype;
  
  printf("Hello world from OpenACC\n");
  devtype = acc_get_device_type();
  printf("Number of available OpenACC devices: %d\n", acc_get_num_devices(devtype));
  printf("Type of available OpenACC devices: %d\n", devtype);

  return 0;
}
