/**
 * @file main.c
 * @brief MikroSDK base application.
 */

#include "board.h"
#include "drv_digital_out.h"

/// @todo Include wanted Driver headers to use.
/// @example
///     #include "drv_digital_out.h"

/// @todo Define Driver objects.
/// @example
     static digital_out_t led1_pin;
     static digital_out_t led2_pin;

/// @brief Application init function.
void application_init()
{
    /// @todo Initialize Driver objects.
    /// @example
    digital_out_init(&led1_pin, PE12);
    digital_out_init(&led2_pin, PE15);

}

/// @brief Application task.
void application_task()
{
    /// @todo Implement your application code here.
    /// @example
    digital_out_toggle(&led1_pin);
    Delay_ms(500);
    digital_out_toggle(&led2_pin);
    Delay_ms(500);
    
}

/// @brief Application main function.
void main(void)
{
    application_init();
    while (1)
    {
        application_task();
    }
}
