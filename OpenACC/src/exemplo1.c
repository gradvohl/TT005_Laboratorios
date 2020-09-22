#include <stdio.h>
#include <openacc.h>

int main(void) {
  acc_device_t devtype;
  
  printf("Ola Mundo OpenACC\n");
  devtype = acc_get_device_type();
  printf("Numero de dispositivos OpenACC disponiveis: %d\n", acc_get_num_devices(devtype));
  printf("Tipo de dispositivos OpenACC disponiveis: %d\n", devtype);

  return 0;
}
