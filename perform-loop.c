/* Generated by           cobc 3.1.2.0 */
/* Generated from         perform-loop.cob */
/* Generated at           Jan 04 2023 22:28:52 */
/* GnuCOBOL build date    Dec 10 2022 19:56:17 */
/* GnuCOBOL package date  Dec 23 2020 12:04:58 UTC */
/* Compile command        cobc -C perform-loop.cob */

#include <stdio.h>
#include <string.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"perform-loop.cob"
#define  COB_PACKAGE_VERSION		"3.1.2"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Jan 04 2023 22:28:52"
#define  COB_MODULE_DATE		20230104
#define  COB_MODULE_TIME		222852

/* Global variables */
#include "perform-loop.c.h"

/* Function prototypes */

int		PERFORM__LOOP (void);
static int		PERFORM__LOOP_ (const int);
static void		PERFORM__LOOP_module_init (cob_module *module);

/* Functions */

/* PROGRAM-ID 'PERFORM-LOOP' */

/* ENTRY 'PERFORM__LOOP' */

int
PERFORM__LOOP ()
{
  return PERFORM__LOOP_ (0);
}

static int
PERFORM__LOOP_ (const int entry)
{
  /* Program local variables */
  #include "perform-loop.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	if (entry == -10)
  		goto P_dump;
  	if (entry == -20)
  		goto P_clear_decimal;
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  if (cob_module_global_enter (&module, &cob_glob_ptr, 0, entry, 0))
  	return -1;

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_ptr->return_address_ptr = &&P_cgerror;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 10        : Entry     PERFORM-LOOP            : perform-loop.cob */
  l_2:;

  /* Line: 11        : DISPLAY            : perform-loop.cob */
  cob_display (0, 1, 1, &f_8);

  /* Line: 12        : PERFORM            : perform-loop.cob */
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_8, 1, 7LL, 0) > 0))
      break;
    /* PERFORM INCREMENT-COUNTER */
    frame_ptr++;
    frame_ptr->perform_through = 5;
    frame_ptr->return_address_ptr = &&l_6;
    goto l_5;
    l_6:
    frame_ptr--;
  }

  /* Line: 13        : DISPLAY            : perform-loop.cob */
  cob_display (0, 1, 1, &f_8);

  /* Line: 15        : GOBACK             : perform-loop.cob */
  goto exit_program;

  /* Line: 17        : Paragraph INCREMENT-COUNTER       : perform-loop.cob */
  l_5:;

  /* Line: 18        : ADD                : perform-loop.cob */
  cob_add_int (&f_8, 1, 0);

  /* Line: 19        : DISPLAY            : perform-loop.cob */
  cob_display (0, 1, 1, &f_8);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 5)
    goto *frame_ptr->return_address_ptr;

  /* Program exit */

  exit_program:

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_2;
  P_cgerror:
  	cob_fatal_error (COB_FERROR_CODEGEN);


  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  PERFORM__LOOP_module_init (module);

  module->crt_status = NULL;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_2 = 0;
  *(b_8) = 49;

  if (0 == 1) goto P_cgerror;
  initialized = 1;
  goto P_ret_initialize;

  P_dump:
    return 0;


  /* CANCEL callback handling */
  P_cancel:

  if (!initialized)
  	return 0;
  if (module && module->module_active)
  	cob_fatal_error (COB_FERROR_CANCEL);

  b_2 = 0;
  cob_module_free (&module);

  initialized = 0;

  P_clear_decimal:
  return 0;

}

/* End PROGRAM-ID 'PERFORM-LOOP' */

/* Initialize module structure for PERFORM-LOOP */
static void PERFORM__LOOP_module_init (cob_module *module)
{
  module->module_name = "PERFORM-LOOP";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())PERFORM__LOOP;
  module->module_cancel.funcptr = (void *(*)())PERFORM__LOOP_;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 0;
  module->flag_main = 0;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;
  module->flag_debug_trace = 0;
  module->flag_dump_ready = 0;
  module->module_stmt = 0;
  module->module_sources = NULL;
}

/* End functions */

