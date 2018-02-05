int ssl3_accept(int initial_state ) 
{ int s__info_callback = __VERIFIER_nondet_int() ;
  int s__in_handshake = __VERIFIER_nondet_int() ;
  int s__state ;
  int s__new_session ;
  int s__server ;
  int s__version = __VERIFIER_nondet_int() ;
  int s__type ;
  int s__init_num ;
  int s__hit = __VERIFIER_nondet_int() ;
  int s__rwstate ;
  int s__init_buf___0 ;
  int s__debug = __VERIFIER_nondet_int() ;
  int s__shutdown ;
  int s__cert = __VERIFIER_nondet_int() ;
  int s__options = __VERIFIER_nondet_int() ;
  int s__verify_mode = __VERIFIER_nondet_int() ;
  int s__session__peer = __VERIFIER_nondet_int() ;
  int s__cert__pkeys__AT0__privatekey = __VERIFIER_nondet_int() ;
  int s__ctx__info_callback = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_accept_renegotiate = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_accept = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_accept_good = __VERIFIER_nondet_int() ;
  int s__s3__tmp__cert_request ;
  int s__s3__tmp__reuse_message = __VERIFIER_nondet_int() ;
  int s__s3__tmp__use_rsa_tmp ;
  int s__s3__tmp__new_cipher = __VERIFIER_nondet_int() ;
  int s__s3__tmp__new_cipher__algorithms = __VERIFIER_nondet_int() ;
  int s__s3__tmp__next_state___0 ;
  int s__s3__tmp__new_cipher__algo_strength = __VERIFIER_nondet_int() ;
  int s__session__cipher ;
  int buf ;
  unsigned long l ;
  unsigned long Time ;
  unsigned long tmp ;
  int cb ;
  long num1 ;
  int ret ;
  int new_state ;
  int state ;
  int skip ;
  int got_new_session ;
  int tmp___1 = __VERIFIER_nondet_int() ;
  int tmp___2 = __VERIFIER_nondet_int() ;
  int tmp___3 = __VERIFIER_nondet_int() ;
  int tmp___4 = __VERIFIER_nondet_int() ;
  int tmp___5 = __VERIFIER_nondet_int() ;
  int tmp___6 = __VERIFIER_nondet_int() ;
  int tmp___7 ;
  long tmp___8 = __VERIFIER_nondet_long() ;
  int tmp___9 = __VERIFIER_nondet_int() ;
  int tmp___10 = __VERIFIER_nondet_int() ;
  int blastFlag ;
  int __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  int __cil_tmp60 ;
  unsigned long __cil_tmp61 ;

  {
#line 60
;
  s__state = initial_state;
#line 61
  blastFlag = 0;
#line 62
  tmp = __VERIFIER_nondet_int();
#line 63
  Time = tmp;
#line 64
  cb = 0;
#line 65
  ret = -1;
#line 66
  skip = 0;
#line 67
  got_new_session = 0;
#line 68
  if (s__info_callback != 0) {
#line 69
    cb = s__info_callback;
  } else {
#line 71
    if (s__ctx__info_callback != 0) {
#line 72
      cb = s__ctx__info_callback;
    }
  }
#line 77
  s__in_handshake ++;
#line 78
  if (tmp___1 + 12288) {
#line 79
    if (tmp___2 + 16384) {

    }
  }
#line 87
  if (s__cert == 0) {
#line 88
    return (-1);
  }
  {
#line 93
  while (1) {
    while_0_continue: /* CIL Label */ ;
#line 95
    state = s__state;
#line 96
    if (s__state == 12292) {
      goto switch_1_12292;
    } else {
#line 99
      if (s__state == 16384) {
        goto switch_1_16384;
      } else {
#line 102
        if (s__state == 8192) {
          goto switch_1_8192;
        } else {
#line 105
          if (s__state == 24576) {
            goto switch_1_24576;
          } else {
#line 108
            if (s__state == 8195) {
              goto switch_1_8195;
            } else {
#line 111
              if (s__state == 8480) {
                goto switch_1_8480;
              } else {
#line 114
                if (s__state == 8481) {
                  goto switch_1_8481;
                } else {
#line 117
                  if (s__state == 8482) {
                    goto switch_1_8482;
                  } else {
#line 120
                    if (s__state == 8464) {
                      goto switch_1_8464;
                    } else {
#line 123
                      if (s__state == 8465) {
                        goto switch_1_8465;
                      } else {
#line 126
                        if (s__state == 8466) {
                          goto switch_1_8466;
                        } else {
#line 129
                          if (s__state == 8496) {
                            goto switch_1_8496;
                          } else {
#line 132
                            if (s__state == 8497) {
                              goto switch_1_8497;
                            } else {
#line 135
                              if (s__state == 8512) {
                                goto switch_1_8512;
                              } else {
#line 138
                                if (s__state == 8513) {
                                  goto switch_1_8513;
                                } else {
#line 141
                                  if (s__state == 8528) {
                                    goto switch_1_8528;
                                  } else {
#line 144
                                    if (s__state == 8529) {
                                      goto switch_1_8529;
                                    } else {
#line 147
                                      if (s__state == 8544) {
                                        goto switch_1_8544;
                                      } else {
#line 150
                                        if (s__state == 8545) {
                                          goto switch_1_8545;
                                        } else {
#line 153
                                          if (s__state == 8560) {
                                            goto switch_1_8560;
                                          } else {
#line 156
                                            if (s__state == 8561) {
                                              goto switch_1_8561;
                                            } else {
#line 159
                                              if (s__state == 8448) {
                                                goto switch_1_8448;
                                              } else {
#line 162
                                                if (s__state == 8576) {
                                                  goto switch_1_8576;
                                                } else {
#line 165
                                                  if (s__state == 8577) {
                                                    goto switch_1_8577;
                                                  } else {
#line 168
                                                    if (s__state == 8592) {
                                                      goto switch_1_8592;
                                                    } else {
#line 171
                                                      if (s__state == 8593) {
                                                        goto switch_1_8593;
                                                      } else {
#line 174
                                                        if (s__state == 8608) {
                                                          goto switch_1_8608;
                                                        } else {
#line 177
                                                          if (s__state == 8609) {
                                                            goto switch_1_8609;
                                                          } else {
#line 180
                                                            if (s__state == 8640) {
                                                              goto switch_1_8640;
                                                            } else {
#line 183
                                                              if (s__state == 8641) {
                                                                goto switch_1_8641;
                                                              } else {
#line 186
                                                                if (s__state == 8656) {
                                                                  goto switch_1_8656;
                                                                } else {
#line 189
                                                                  if (s__state == 8657) {
                                                                    goto switch_1_8657;
                                                                  } else {
#line 192
                                                                    if (s__state == 8672) {
                                                                      goto switch_1_8672;
                                                                    } else {
#line 195
                                                                      if (s__state == 8673) {
                                                                        goto switch_1_8673;
                                                                      } else {
#line 198
                                                                        if (s__state == 3) {
                                                                          goto switch_1_3;
                                                                        } else {
                                                                          goto switch_1_default;
#line 203
                                                                          if (0) {
                                                                            switch_1_12292: 
#line 205
                                                                            s__new_session = 1;
                                                                            switch_1_16384: ;
                                                                            switch_1_8192: ;
                                                                            switch_1_24576: ;
                                                                            switch_1_8195: 
#line 210
                                                                            s__server = 1;
#line 211
                                                                            if (cb != 0) {

                                                                            }
                                                                            {
#line 216
                                                                            __cil_tmp55 = s__version * 8;
#line 216
                                                                            if (__cil_tmp55 != 3) {
#line 217
                                                                              return (-1);
                                                                            }
                                                                            }
#line 221
                                                                            s__type = 8192;
#line 222
                                                                            if (s__init_buf___0 == 0) {
#line 223
                                                                              buf = __VERIFIER_nondet_int();
#line 224
                                                                              if (buf == 0) {
#line 225
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
#line 230
                                                                              if (! tmp___3) {
#line 231
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
#line 236
                                                                              s__init_buf___0 = buf;
                                                                            }
#line 240
                                                                            if (! tmp___4) {
#line 241
                                                                              ret = -1;
                                                                              goto end;
                                                                            }
#line 246
                                                                            s__init_num = 0;
#line 247
                                                                            if (s__state != 12292) {
#line 248
                                                                              if (! tmp___5) {
#line 249
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
#line 254
                                                                              s__state = 8464;
#line 255
                                                                              s__ctx__stats__sess_accept ++;
                                                                            } else {
#line 257
                                                                              s__ctx__stats__sess_accept_renegotiate ++;
#line 258
                                                                              s__state = 8480;
                                                                            }
                                                                            goto switch_1_break;
                                                                            switch_1_8480: ;
                                                                            switch_1_8481: 
#line 263
                                                                            s__shutdown = 0;
#line 264
                                                                            ret = __VERIFIER_nondet_int();
#line 265
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 270
                                                                            s__s3__tmp__next_state___0 = 8482;
#line 271
                                                                            s__state = 8448;
#line 272
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8482: 
#line 275
                                                                            s__state = 3;
                                                                            goto switch_1_break;
                                                                            switch_1_8464: ;
                                                                            switch_1_8465: ;
                                                                            switch_1_8466: 
#line 280
                                                                            s__shutdown = 0;
#line 281
                                                                            ret = __VERIFIER_nondet_int();
#line 282
                                                                            if (blastFlag == 0) {
#line 283
                                                                              blastFlag = 1;
                                                                            }
#line 287
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 292
                                                                            got_new_session = 1;
#line 293
                                                                            s__state = 8496;
#line 294
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8496: ;
                                                                            switch_1_8497: 
#line 298
                                                                            ret = __VERIFIER_nondet_int();
#line 299
                                                                            if (blastFlag == 1) {
#line 300
                                                                              blastFlag = 2;
                                                                            }
#line 304
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 309
                                                                            if (s__hit) {
#line 310
                                                                              s__state = 8656;
                                                                            } else {
#line 312
                                                                              s__state = 8512;
                                                                            }
#line 314
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8512: ;
                                                                            switch_1_8513: ;
                                                                            {
#line 318
                                                                            __cil_tmp56 = (unsigned long )s__s3__tmp__new_cipher__algorithms;
#line 318
                                                                            if (__cil_tmp56 + 256UL) {
#line 319
                                                                              skip = 1;
                                                                            } else {
#line 321
                                                                              ret = __VERIFIER_nondet_int();
#line 322
                                                                              if (ret <= 0) {
                                                                                goto end;
                                                                              }
                                                                            }
                                                                            }
#line 328
                                                                            s__state = 8528;
#line 329
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8528: ;
                                                                            switch_1_8529: 
#line 333
                                                                            l = (unsigned long )s__s3__tmp__new_cipher__algorithms;
                                                                            {
#line 334
                                                                            __cil_tmp57 = (unsigned long )s__options;
#line 334
                                                                            if (__cil_tmp57 + 2097152UL) {
#line 335
                                                                              s__s3__tmp__use_rsa_tmp = 1;
                                                                            } else {
#line 337
                                                                              s__s3__tmp__use_rsa_tmp = 0;
                                                                            }
                                                                            }
#line 339
                                                                            if (s__s3__tmp__use_rsa_tmp) {
                                                                              goto _L___0;
                                                                            } else {
#line 342
                                                                              if (l + 30UL) {
                                                                                goto _L___0;
                                                                              } else {
#line 345
                                                                                if (l + 1UL) {
#line 346
                                                                                  if (s__cert__pkeys__AT0__privatekey == 0) {
                                                                                    goto _L___0;
                                                                                  } else {
                                                                                    {
#line 349
                                                                                    __cil_tmp58 = (unsigned long )s__s3__tmp__new_cipher__algo_strength;
#line 349
                                                                                    if (__cil_tmp58 + 2UL) {
                                                                                      {
#line 350
                                                                                      __cil_tmp59 = (unsigned long )s__s3__tmp__new_cipher__algo_strength;
#line 350
                                                                                      if (__cil_tmp59 + 4UL) {
#line 351
                                                                                        tmp___7 = 512;
                                                                                      } else {
#line 353
                                                                                        tmp___7 = 1024;
                                                                                      }
                                                                                      }
                                                                                      {
#line 355
                                                                                      __cil_tmp60 = tmp___6 * 8;
#line 355
                                                                                      if (__cil_tmp60 > tmp___7) {
                                                                                        _L___0: 
#line 357
                                                                                        ret = __VERIFIER_nondet_int();
#line 358
                                                                                        if (ret <= 0) {
                                                                                          goto end;
                                                                                        }
                                                                                      } else {
#line 364
                                                                                        skip = 1;
                                                                                      }
                                                                                      }
                                                                                    } else {
#line 367
                                                                                      skip = 1;
                                                                                    }
                                                                                    }
                                                                                  }
                                                                                } else {
#line 371
                                                                                  skip = 1;
                                                                                }
                                                                              }
                                                                            }
#line 375
                                                                            s__state = 8544;
#line 376
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8544: ;
                                                                            switch_1_8545: ;
#line 380
                                                                            if (s__verify_mode + 1) {
#line 381
                                                                              if (s__session__peer != 0) {
#line 382
                                                                                if (s__verify_mode + 4) {
#line 383
                                                                                  skip = 1;
#line 384
                                                                                  s__s3__tmp__cert_request = 0;
#line 385
                                                                                  s__state = 8560;
                                                                                } else {
                                                                                  goto _L___2;
                                                                                }
                                                                              } else {
                                                                                _L___2: 
                                                                                {
#line 391
                                                                                __cil_tmp61 = (unsigned long )s__s3__tmp__new_cipher__algorithms;
#line 391
                                                                                if (__cil_tmp61 + 256UL) {
#line 392
                                                                                  if (s__verify_mode + 2) {
                                                                                    goto _L___1;
                                                                                  } else {
#line 395
                                                                                    skip = 1;
#line 396
                                                                                    s__s3__tmp__cert_request = 0;
#line 397
                                                                                    s__state = 8560;
                                                                                  }
                                                                                } else {
                                                                                  _L___1: 
#line 401
                                                                                  s__s3__tmp__cert_request = 1;
#line 402
                                                                                  ret = __VERIFIER_nondet_int();
#line 403
                                                                                  if (ret <= 0) {
                                                                                    goto end;
                                                                                  }
#line 408
                                                                                  s__state = 8448;
#line 409
                                                                                  s__s3__tmp__next_state___0 = 8576;
#line 410
                                                                                  s__init_num = 0;
                                                                                }
                                                                                }
                                                                              }
                                                                            } else {
#line 414
                                                                              skip = 1;
#line 415
                                                                              s__s3__tmp__cert_request = 0;
#line 416
                                                                              s__state = 8560;
                                                                            }
                                                                            goto switch_1_break;
                                                                            switch_1_8560: ;
                                                                            switch_1_8561: 
#line 421
                                                                            ret = __VERIFIER_nondet_int();
#line 422
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 427
                                                                            s__s3__tmp__next_state___0 = 8576;
#line 428
                                                                            s__state = 8448;
#line 429
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8448: 
#line 432
                                                                            if (num1 > 0L) {
#line 433
                                                                              s__rwstate = 2;
#line 434
                                                                              num1 = tmp___8;
#line 435
                                                                              if (num1 <= 0L) {
#line 436
                                                                                ret = -1;
                                                                                goto end;
                                                                              }
#line 441
                                                                              s__rwstate = 1;
                                                                            }
#line 445
                                                                            s__state = s__s3__tmp__next_state___0;
                                                                            goto switch_1_break;
                                                                            switch_1_8576: ;
                                                                            switch_1_8577: 
#line 449
                                                                            ret = __VERIFIER_nondet_int();
#line 450
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 455
                                                                            if (ret == 2) {
#line 456
                                                                              s__state = 8466;
                                                                            } else {
#line 458
                                                                              ret = __VERIFIER_nondet_int();
#line 459
                                                                              if (ret <= 0) {
                                                                                goto end;
                                                                              }
#line 464
                                                                              s__init_num = 0;
#line 465
                                                                              s__state = 8592;
                                                                            }
                                                                            goto switch_1_break;
                                                                            switch_1_8592: ;
                                                                            switch_1_8593: 
#line 470
                                                                            ret = __VERIFIER_nondet_int();
#line 471
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 476
                                                                            s__state = 8608;
#line 477
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8608: ;
                                                                            switch_1_8609: 
#line 481
                                                                            ret = __VERIFIER_nondet_int();
#line 482
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 487
                                                                            s__state = 8640;
#line 488
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8640: ;
                                                                            switch_1_8641: 
#line 492
                                                                            ret = __VERIFIER_nondet_int();
#line 493
                                                                            if (blastFlag == 4) {
#line 494
                                                                              blastFlag = 5;
                                                                            } else {
#line 496
                                                                              if (blastFlag == 7) {
#line 497
                                                                                blastFlag = 8;
                                                                              } else {
#line 499
                                                                                if (blastFlag == 10) {
                                                                                  goto ERROR;
                                                                                }
                                                                              }
                                                                            }
#line 506
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 511
                                                                            if (s__hit) {
#line 512
                                                                              s__state = 3;
                                                                            } else {
#line 514
                                                                              s__state = 8656;
                                                                            }
#line 516
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_8656: ;
                                                                            switch_1_8657: 
#line 520
                                                                            s__session__cipher = s__s3__tmp__new_cipher;
#line 521
                                                                            if (! tmp___9) {
#line 522
                                                                              ret = -1;
                                                                              goto end;
                                                                            }
#line 527
                                                                            ret = __VERIFIER_nondet_int();
#line 528
                                                                            if (blastFlag == 2) {
#line 529
                                                                              blastFlag = 3;
                                                                            } else {
#line 531
                                                                              if (blastFlag == 5) {
#line 532
                                                                                blastFlag = 6;
                                                                              } else {
#line 534
                                                                                if (blastFlag == 8) {
#line 535
                                                                                  blastFlag = 9;
                                                                                }
                                                                              }
                                                                            }
#line 541
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 546
                                                                            s__state = 8672;
#line 547
                                                                            s__init_num = 0;
#line 548
                                                                            if (! tmp___10) {
#line 549
                                                                              ret = -1;
                                                                              goto end;
                                                                            }
                                                                            goto switch_1_break;
                                                                            switch_1_8672: ;
                                                                            switch_1_8673: 
#line 557
                                                                            ret = __VERIFIER_nondet_int();
#line 558
                                                                            if (blastFlag == 3) {
#line 559
                                                                              blastFlag = 4;
                                                                            } else {
#line 561
                                                                              if (blastFlag == 6) {
#line 562
                                                                                blastFlag = 7;
                                                                              } else {
#line 564
                                                                                if (blastFlag == 9) {
#line 565
                                                                                  blastFlag = 10;
                                                                                }
                                                                              }
                                                                            }
#line 571
                                                                            if (ret <= 0) {
                                                                              goto end;
                                                                            }
#line 576
                                                                            s__state = 8448;
#line 577
                                                                            if (s__hit) {
#line 578
                                                                              s__s3__tmp__next_state___0 = 8640;
                                                                            } else {
#line 580
                                                                              s__s3__tmp__next_state___0 = 3;
                                                                            }
#line 582
                                                                            s__init_num = 0;
                                                                            goto switch_1_break;
                                                                            switch_1_3: 
#line 585
                                                                            s__init_buf___0 = 0;
#line 586
                                                                            s__init_num = 0;
#line 587
                                                                            if (got_new_session) {
#line 588
                                                                              s__new_session = 0;
#line 589
                                                                              s__ctx__stats__sess_accept_good ++;
#line 590
                                                                              if (cb != 0) {

                                                                              }
                                                                            }
#line 598
                                                                            ret = 1;
                                                                            goto end;
                                                                            switch_1_default: 
#line 601
                                                                            ret = -1;
                                                                            goto end;
                                                                          } else {
                                                                            switch_1_break: ;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
#line 642
    if (! s__s3__tmp__reuse_message) {
#line 643
      if (! skip) {
#line 644
        if (s__debug) {
#line 645
          ret = __VERIFIER_nondet_int();
#line 646
          if (ret <= 0) {
            goto end;
          }
        }
#line 654
        if (cb != 0) {
#line 655
          if (s__state != state) {
#line 656
            new_state = s__state;
#line 657
            s__state = state;
#line 658
            s__state = new_state;
          }
        }
      }
    }
#line 671
    skip = 0;
  }
  while_0_break: /* CIL Label */ ;
  }

  end: 
#line 676
  s__in_handshake --;
#line 677
  if (cb != 0) {

  }
#line 682
  return (ret);
  ERROR: __VERIFIER_error();
#line 684
  return (-1);
}
}
@