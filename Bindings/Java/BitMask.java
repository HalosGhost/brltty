/*
 * libbrlapi - A library providing access to braille terminals for applications.
 *
 * Copyright (C) 2006-2020 by
 *   Samuel Thibault <Samuel.Thibault@ens-lyon.org>
 *   Sébastien Hinderer <Sebastien.Hinderer@ens-lyon.org>
 *
 * libbrlapi comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

package org.a11y.brlapi;

public class BitMask {
  private final static int BYTE_SIZE = Byte.SIZE;

  private final byte[] maskBytes;
  private final int maskSize;

  public BitMask (byte[] bytes) {
    maskBytes = bytes;
    maskSize = maskBytes.length * BYTE_SIZE;
  }

  public int getSize () {
    return maskSize;
  }

  public boolean isSet (int index) {
    if (index < 0) return false;
    if (index >= maskSize) return false;

    int bit = 1 << (index % BYTE_SIZE);
    index /= BYTE_SIZE;
    return (maskBytes[index] & bit) != 0;
  }
}
